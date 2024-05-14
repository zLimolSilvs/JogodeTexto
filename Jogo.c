#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolha;
    srand(time(NULL)); // inicializa o gerador de números aleatórios

    printf("Você está em uma caverna escura e úmida. Você quer ir para a esquerda (1) ou para a direita (2)?\n");
    scanf("%d", &escolha);

    if (escolha == 1 || escolha == 2) {
        int caminho = rand() % 2 + 1; // escolhe aleatoriamente o caminho a ser tomado pelo jogador

        printf("Você decide ir ");
        if (escolha == 1)
            printf("para a esquerda...\n");
        else
            printf("para a direita...\n");

        printf("Você avança pelo caminho...\n");

        if (caminho == escolha) {
            printf("Você encontrou um tesouro!\nParabéns, você venceu!\n");
        } else {
            printf("Você caiu em uma armadilha!\nGame over!\n");
        }
    } else {
        printf("Escolha inválida! Você fica parado e é devorado por um monstro!\nGame over!\n");
    }

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int* VAR_0 ;
 int VAR_1 ;

void FUNC_1(void) {
    int VAR_2;

    FUNC_0("---------------------------------------------\n");
    FUNC_0(". - * #          .01 .125 .25 .5 milliseconds\n");
    FUNC_0("1,2,3,...,9      from 1 to 9     milliseconds\n");
    FUNC_0("A,B,C,D,E        10,20,30,40,50  milliseconds\n");
    FUNC_0("F,G,H,I,J        .1,.2,.3,.4,.5       seconds\n");
    FUNC_0("K,L,M,N,O,P,Q,?  1,2,4,8,16,30,60,>60 seconds\n");
    FUNC_0("From 0 to 100%%: ");
    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        FUNC_0("\033[48;5;%dm ", VAR_0[VAR_2]);
    }
    FUNC_0("\033[0m\n");
    FUNC_0("---------------------------------------------\n");
}

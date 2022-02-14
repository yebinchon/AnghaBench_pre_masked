
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

void FUNC_4(char *VAR_0) {
    if (FUNC_3(VAR_0, "END") == 0) {
        FUNC_2("Stopping the CPU. Bye!\n");
        asm volatile("hlt");
    } else if (FUNC_3(VAR_0, "PAGE") == 0) {

        uint32_t VAR_1;
        uint32_t VAR_2 = FUNC_1(1000, 1, &VAR_1);
        char VAR_3[16] = "";
        FUNC_0(VAR_2, VAR_3);
        char VAR_4[16] = "";
        FUNC_0(VAR_1, VAR_4);
        FUNC_2("Page: ");
        FUNC_2(VAR_3);
        FUNC_2(", physical address: ");
        FUNC_2(VAR_4);
        FUNC_2("\n");
    }
    FUNC_2("You said: ");
    FUNC_2(VAR_0);
    FUNC_2("\n> ");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

void FUNC_2(char *VAR_0) {
    if (FUNC_1(VAR_0, "END") == 0) {
        FUNC_0("Stopping the CPU. Bye!\n");
        asm volatile("hlt");
    }
    FUNC_0("You said: ");
    FUNC_0(VAR_0);
    FUNC_0("\n> ");
}

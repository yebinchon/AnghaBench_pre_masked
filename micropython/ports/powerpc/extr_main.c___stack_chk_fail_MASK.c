
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

void FUNC_2(void) {
    static bool VAR_0;

    if (VAR_0) {
        return;
    }
    VAR_0 = 1;
    FUNC_1("Stack corruption detected !\n");
    FUNC_0(0);
}

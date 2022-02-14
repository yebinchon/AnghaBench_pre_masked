
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_0 ;

void FUNC_6(void) {
    uint32_t VAR_1 = VAR_0;

    if (VAR_1 & (1<<1)) {
        FUNC_3();
    } else {
        FUNC_2();
    }

    if (VAR_1 & (1<<2)) {
        FUNC_5();
    } else {
        FUNC_4();
    }

    if (VAR_1 & (1<<3)) {
        FUNC_1();
    } else {
        FUNC_0();
    }
}

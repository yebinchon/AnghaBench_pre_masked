
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;

void FUNC_2(void) {
    static uint16_t VAR_2 = 0;

    if (FUNC_0(VAR_2) > 500 || VAR_2 == 0) {
        if (VAR_1 > 0) VAR_1 -= 1;

        if (VAR_1 > VAR_0 / 2) VAR_1 -= 1;

        if (VAR_1 > VAR_0 / 4 * 3) VAR_1 -= 2;
        VAR_2 = FUNC_1();
    }
}

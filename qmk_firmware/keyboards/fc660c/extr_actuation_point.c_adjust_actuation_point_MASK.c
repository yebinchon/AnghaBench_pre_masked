
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

void FUNC_3(int VAR_0) {
    FUNC_0();
    uint8_t VAR_1 = FUNC_1() + VAR_0;
    if (VAR_1 > 63) {
        if (VAR_0 > 0)
            FUNC_2(63);
        else
            FUNC_2(0);
    } else {
        FUNC_2(VAR_1);
    }
}

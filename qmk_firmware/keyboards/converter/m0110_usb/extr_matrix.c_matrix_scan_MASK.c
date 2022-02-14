
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;

uint8_t FUNC_5(void)
{
    uint8_t VAR_4;

    VAR_3 = 0;
    VAR_4 = FUNC_0();

    if (VAR_4 == VAR_1) {
        return 0;
    } else if (VAR_4 == VAR_0) {
        return 0;
    } else {
        VAR_3 = 1;
        FUNC_4(VAR_4);
    }

    if (VAR_2) {
        FUNC_3("["); FUNC_2(VAR_4); FUNC_3("]\n");
    }

    FUNC_1();
    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

uint8_t FUNC_4(void) {
    uint32_t VAR_8;
    uint32_t VAR_9;

    FUNC_0(VAR_2);

    FUNC_2();

    VAR_8 = FUNC_3() + VAR_5;

    while (!FUNC_1()) {
        VAR_9 = FUNC_3() % VAR_5;

        if (VAR_6 > VAR_7)
        {

            if (VAR_9 > 500 && VAR_9 < 600) {
                VAR_1;
            } else {
                VAR_0;
            }
        } else if (VAR_7 > VAR_6)
        {

            if (VAR_9 > 500 && VAR_9 < 600) {
                VAR_1;
            } else if (VAR_9 > 700 && VAR_9 < 800) {
                VAR_1;
            } else {
                VAR_0;
            }
        }

        if (FUNC_3() > VAR_8) {
            FUNC_0(VAR_4);
            return 0;
        }
    }

    FUNC_0(VAR_3);

    return 1;
}

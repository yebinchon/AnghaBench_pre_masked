
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__* VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__*) ;

uint8_t FUNC_7(void) {
    uint8_t VAR_5 = FUNC_0();

    if (FUNC_2()) {
        static uint8_t VAR_6;

        if (!FUNC_5(VAR_2 + VAR_3)) {
            VAR_6++;

            if (VAR_6 > VAR_0) {

                for (int VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
                    VAR_2[VAR_3 + VAR_7] = 0;
                }
            }
        } else {
            VAR_6 = 0;
        }

        FUNC_3();
    } else {
        FUNC_6(VAR_2 + VAR_4);



        FUNC_4();
    }

    return VAR_5;
}

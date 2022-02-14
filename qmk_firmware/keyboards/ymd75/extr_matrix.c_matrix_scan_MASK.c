
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ matrix_row_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;

uint8_t FUNC_5(void) {
    for (uint8_t VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
        FUNC_4(VAR_9);
        FUNC_1(5);

        matrix_row_t VAR_10 = (

            (~VAR_2) & 0xFF
        ) | (

            FUNC_2((~VAR_3) & 0xFF) << 8
        ) | (

                  ((~VAR_4) & (1 << VAR_5)) << 7
                  );

        if (VAR_8[VAR_9] != VAR_10) {
            VAR_8[VAR_9] = VAR_10;
            VAR_6 = VAR_0;
        }
    }

    if (VAR_6) {
        if (--VAR_6) {
            FUNC_0(1);
        } else {
            for (uint8_t VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
                VAR_7[VAR_11] = VAR_8[VAR_11];
            }
        }
    }
    FUNC_3();


    return 1;
}

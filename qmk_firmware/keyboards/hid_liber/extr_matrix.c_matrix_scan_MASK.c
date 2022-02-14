
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ matrix_row_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,scalar_t__) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int* VAR_6 ;
 int** VAR_7 ;

uint8_t FUNC_6(void)
{
    for (uint8_t VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        FUNC_4(VAR_8);
        FUNC_1(5);
        for (uint8_t VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
            bool VAR_10 = VAR_5[VAR_9] & (1<<VAR_8);
            bool VAR_11 = *VAR_7[VAR_9] & VAR_6[VAR_9];
            if (VAR_10 != VAR_11) {
                VAR_5[VAR_9] ^= ((matrix_row_t)1<<VAR_8);
                if (VAR_3) {
                    FUNC_2("bounce!: %02X\n", VAR_3);
                }
                VAR_3 = VAR_0;
            }
        }
        FUNC_5(VAR_8);
    }

    if (VAR_3) {
        if (--VAR_3) {
            FUNC_0(1);
        } else {
            for (uint8_t VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
                VAR_4[VAR_12] = VAR_5[VAR_12];
            }
        }
    }

    FUNC_3();
    return 1;
}

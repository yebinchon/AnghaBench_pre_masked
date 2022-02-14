
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int matrix_row_t ;
typedef scalar_t__ debounce_counter_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;

void FUNC_0(matrix_row_t VAR_6[], matrix_row_t VAR_7[], uint8_t VAR_8, uint8_t VAR_9) {
    VAR_5 = 0;
    debounce_counter_t *VAR_10 = VAR_4;
    for (uint8_t VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
        matrix_row_t VAR_12 = VAR_6[VAR_11] ^ VAR_7[VAR_11];
        matrix_row_t VAR_13 = VAR_7[VAR_11];
        for (uint8_t VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
            matrix_row_t VAR_15 = (VAR_2 << VAR_14);
            if (VAR_12 & VAR_15) {
                if (*VAR_10 == VAR_0) {
                    *VAR_10 = VAR_9;
                    VAR_3 = 1;
                    VAR_13 ^= VAR_15;
                } else {
                    VAR_5 = 1;
                }
            }
            VAR_10++;
        }
        VAR_7[VAR_11] = VAR_13;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef scalar_t__ matrix_row_t ;
typedef scalar_t__ debounce_counter_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;

void FUNC_0(matrix_row_t VAR_4[], matrix_row_t VAR_5[], uint8_t VAR_6, uint8_t VAR_7) {
    VAR_3 = 0;
    debounce_counter_t *VAR_8 = VAR_2;
    for (uint8_t VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
        matrix_row_t VAR_10 = VAR_5[VAR_9];
        matrix_row_t VAR_11 = VAR_4[VAR_9];


        if (VAR_10 != VAR_11) {
            if (*VAR_8 == VAR_0) {
                *VAR_8 = VAR_7;
                VAR_5[VAR_9] = VAR_11;
                VAR_1 = 1;
            } else {
                VAR_3 = 1;
            }
        }
        VAR_8++;
    }
}

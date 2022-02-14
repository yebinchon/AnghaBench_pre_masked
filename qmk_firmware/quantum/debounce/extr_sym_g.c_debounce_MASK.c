
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int matrix_row_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;

void FUNC_2(matrix_row_t VAR_3[], matrix_row_t VAR_4[], uint8_t VAR_5, bool VAR_6) {
    if (VAR_6) {
        VAR_1 = 1;
        VAR_2 = FUNC_1();
    }

    if (VAR_1 && FUNC_0(VAR_2) > VAR_0) {
        for (int VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
            VAR_4[VAR_7] = VAR_3[VAR_7];
        }
        VAR_1 = 0;
    }
}

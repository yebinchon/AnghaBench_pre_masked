
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int matrix_row_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

void FUNC_0(matrix_row_t* VAR_3, uint8_t VAR_4) {
    uint8_t VAR_5 = 0;



    VAR_5 = VAR_0 * (VAR_4 + 1);

    for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        VAR_2[VAR_5 + VAR_6] = VAR_3[VAR_6];
    }
}

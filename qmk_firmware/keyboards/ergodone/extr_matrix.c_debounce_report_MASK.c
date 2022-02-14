
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int matrix_row_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;

void FUNC_0(matrix_row_t VAR_3, uint8_t VAR_4) {
  for (uint8_t VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
    if (VAR_3 & (1 << VAR_5)) {
      VAR_2[VAR_4 * VAR_1 + VAR_5] = VAR_0;
    }
  }
}

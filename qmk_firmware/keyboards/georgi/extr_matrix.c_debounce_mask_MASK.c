
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int matrix_row_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__* VAR_2 ;
 int* VAR_3 ;

matrix_row_t FUNC_0(matrix_row_t VAR_4, uint8_t VAR_5) {
  matrix_row_t VAR_6 = 0;
  matrix_row_t VAR_7 = VAR_4 ^ VAR_3[VAR_5];
  VAR_3[VAR_5] = VAR_4;
  for (uint8_t VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
    if (VAR_2[VAR_5 * VAR_1 + VAR_8]) {
      --VAR_2[VAR_5 * VAR_1 + VAR_8];
    } else {
      VAR_6 |= (1 << VAR_8);
    }
    if (VAR_7 & (1 << VAR_8)) {
      VAR_2[VAR_5 * VAR_1 + VAR_8] = VAR_0;
    }
  }
  return VAR_6;
}

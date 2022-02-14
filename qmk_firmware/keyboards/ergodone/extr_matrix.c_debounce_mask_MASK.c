
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int matrix_row_t ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;

matrix_row_t FUNC_0(uint8_t VAR_2) {
  matrix_row_t VAR_3 = 0;
  for (uint8_t VAR_4=0; VAR_4 < VAR_0; ++VAR_4) {
    if (VAR_1[VAR_2 * VAR_0 + VAR_4]) {
      --VAR_1[VAR_2 * VAR_0 + VAR_4];
    } else {
      VAR_3 |= (1 << VAR_4);
    }
  }
  return VAR_3;
}

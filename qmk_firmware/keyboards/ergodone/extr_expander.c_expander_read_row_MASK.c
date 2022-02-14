
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned long matrix_row_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;

matrix_row_t FUNC_2(void)
{
  FUNC_1();


  matrix_row_t VAR_1 = 0;
  for (uint8_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
    if (FUNC_0(VAR_2)) {
      VAR_1 |= (1UL << (VAR_0 - 1 - VAR_2));
    }
  }

  return VAR_1;
}

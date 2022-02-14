
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int matrix_row_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 () ;
 int* VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

uint8_t FUNC_8(void)
{
  FUNC_2();

  for (uint8_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
    FUNC_5(VAR_2);
    FUNC_7(30);
    matrix_row_t VAR_3 = FUNC_0(VAR_2);
    matrix_row_t VAR_4 = (FUNC_4(VAR_2) & VAR_3) | (VAR_1[VAR_2] & ~VAR_3);
    FUNC_1(VAR_4 ^ VAR_1[VAR_2], VAR_2);
    VAR_1[VAR_2] = VAR_4;

    FUNC_6();
  }

  FUNC_3();

  return 1;
}

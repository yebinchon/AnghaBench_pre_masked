
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ matrix_row_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,int ,scalar_t__,int) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;

uint8_t FUNC_6(void)
{
  bool VAR_3 = 0;
  for (uint8_t VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    FUNC_4(VAR_4);
    FUNC_5(30);
    matrix_row_t VAR_5 = FUNC_3();
    for (uint8_t VAR_6 = 0; VAR_6 < FUNC_1(); VAR_6++) {
      bool VAR_7 = VAR_2[VAR_6] & ((matrix_row_t)1<<VAR_4);
      bool VAR_8 = VAR_5 & (1<<VAR_6);
      if ((VAR_3 |= VAR_7 != VAR_8)) {
     VAR_2[VAR_6] ^= (matrix_row_t) 1 << VAR_4;
      }
    }
  }

  FUNC_0(VAR_2, VAR_1, FUNC_1(), VAR_3);
  FUNC_2();

  return (uint8_t)VAR_3;
}

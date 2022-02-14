
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ matrix_row_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;

uint8_t FUNC_6(void)
{
  for (uint8_t VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
    FUNC_4(VAR_6);
    FUNC_1(3);

    uint8_t VAR_7 = FUNC_3();

    for (uint8_t VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
      bool VAR_9 = VAR_5[VAR_8] & ((matrix_row_t)1<<VAR_6);
      bool VAR_10 = VAR_7 & (1<<VAR_8);
      if (VAR_9 != VAR_10) {
        VAR_5[VAR_8] ^= ((matrix_row_t)1<<VAR_6);
        VAR_3 = VAR_0;
      }
    }
    FUNC_5();
  }

  if (VAR_3) {
    if (--VAR_3) {
      FUNC_0(1);
    } else {
      for (uint8_t VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
        VAR_4[VAR_11] = VAR_5[VAR_11];
      }
    }
  }

  FUNC_2();
  return 1;
}

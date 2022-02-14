
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ matrix_row_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;

uint8_t FUNC_5(void) {

  int VAR_6 = VAR_3 ? 0 : (VAR_1);

  for (uint8_t VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
      FUNC_3(VAR_7);
      FUNC_1(30);
      matrix_row_t VAR_8 = FUNC_2();
      if (VAR_5[VAR_7+VAR_6] != VAR_8) {
          VAR_5[VAR_7+VAR_6] = VAR_8;
          VAR_2 = VAR_0;
      }
      FUNC_4();
  }

  if (VAR_2) {
      if (--VAR_2) {
          FUNC_0(1);
      } else {
          for (uint8_t VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
              VAR_4[VAR_9+VAR_6] = VAR_5[VAR_9+VAR_6];
          }
      }
  }

  return 1;
}

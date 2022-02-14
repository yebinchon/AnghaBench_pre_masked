
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__* VAR_3 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__* VAR_4 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 () ;

int FUNC_11(void) {

  FUNC_1();


  FUNC_6();
  FUNC_5();
  FUNC_0(1);


  FUNC_4();
  FUNC_3();
  FUNC_0(VAR_0);


  if (FUNC_8()) {

    FUNC_2();
    return 1;
  }


  FUNC_10();

  uint8_t VAR_5 = 0;

  for (int VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
    VAR_4[VAR_6] = FUNC_7();
    FUNC_10();
    VAR_5 += VAR_4[VAR_6];
  }
  uint8_t VAR_7 = FUNC_7();
  FUNC_10();

  if (VAR_5 != VAR_7) {
    FUNC_2();
    return 1;
  }

  uint8_t VAR_8 = 0;

  for (int VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
    FUNC_9(VAR_3[VAR_9]);
    FUNC_10();
    VAR_8 += VAR_3[VAR_9];
  }
  FUNC_9(VAR_8);
  FUNC_10();


  FUNC_6();
  FUNC_3();

  FUNC_2();
  return 0;
}

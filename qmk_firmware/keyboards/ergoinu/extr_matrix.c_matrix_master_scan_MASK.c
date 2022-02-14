
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_1 () ;
 scalar_t__* VAR_7 ;
 scalar_t__ FUNC_2 () ;

uint8_t FUNC_3(void) {

  int VAR_8 = FUNC_0();

  int VAR_9 = (VAR_5) ? 0 : VAR_1;

  for (int VAR_10 = 0; VAR_10 < VAR_1; ++VAR_10) {
    VAR_7[VAR_10] = VAR_6[VAR_9+VAR_10];
  }

  if( FUNC_2() ) {

    VAR_3;

    VAR_4++;

    if (VAR_4 > VAR_0) {

      int VAR_11 = (VAR_5) ? (VAR_1) : 0;
      for (int VAR_12 = 0; VAR_12 < VAR_1; ++VAR_12) {
          VAR_6[VAR_11+VAR_12] = 0;
      }
    }
  } else {

    VAR_2;
    VAR_4 = 0;
  }
  FUNC_1();
  return VAR_8;
}

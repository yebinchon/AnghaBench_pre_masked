
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

void FUNC_4(void) {

  if (VAR_7 != 0 && (VAR_9 || VAR_6)){

    if (VAR_4 >= VAR_1) {
      VAR_4 = 0;

      if (VAR_3){
        FUNC_1();
      } else {
        FUNC_0();
      }

      VAR_5 = FUNC_3();
      if (VAR_5 >= VAR_0){
        VAR_3 = 0;

        VAR_4 = ((VAR_0 * VAR_2) * (-1));
      } else if (VAR_5 == 0){
        VAR_3 = 1;

        VAR_4 = ((VAR_0 * VAR_2) * (-1));
      }

      VAR_8 = 1;
    } else {
      VAR_4++;
    }
  } else {

    if (VAR_8){
      int VAR_10 = 0;

      while (FUNC_3() != VAR_7 && VAR_10 <= VAR_0 ){
        FUNC_2();
        VAR_10++;
      }
      VAR_8 = 0;
    }
  }
}

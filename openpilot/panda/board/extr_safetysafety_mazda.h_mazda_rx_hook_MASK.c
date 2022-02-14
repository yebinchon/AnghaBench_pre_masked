
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,int) ;

void FUNC_4(CAN_FIFOMailBox_TypeDef *VAR_11) {
  int VAR_12 = FUNC_1(VAR_11);
  int VAR_13 = FUNC_0(VAR_11);

  if ((VAR_13 == VAR_4) && (VAR_12 == VAR_3)) {
    int VAR_14 = FUNC_2(VAR_11, 0) - 127;

    FUNC_3(&VAR_10, VAR_14);
  }


  if ((VAR_13 == VAR_1) && (VAR_12 == VAR_3)) {
    int VAR_15 = FUNC_2(VAR_11, 0) & 8;
    if (VAR_15 != 0) {
      if (!VAR_7) {
 VAR_6 = 1;
      }
    }
    else {
      VAR_6 = 0;
    }
    VAR_7 = VAR_15;
  }


  if (VAR_12 == VAR_0) {

    if (VAR_13 == VAR_2) {
      VAR_8 = 1;
    }


    if (VAR_13 == VAR_5) {
      VAR_9 = 1;
    }
  }
}

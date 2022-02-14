
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(CAN_FIFOMailBox_TypeDef *VAR_7) {
  int VAR_8 = FUNC_1(VAR_7);
  int VAR_9 = FUNC_0(VAR_7);

  if (VAR_9 == 388) {
    int VAR_10 = ((FUNC_2(VAR_7, 6) & 0x7) << 8) | FUNC_2(VAR_7, 7);
    VAR_10 = FUNC_3(VAR_10, 11);

    FUNC_4(&VAR_5, VAR_10);
  }



  if (VAR_9 == 842) {
    VAR_4 = FUNC_2(VAR_7, 0) | FUNC_2(VAR_7, 1);
  }





  if ((VAR_8 == 0) && ((VAR_9 == 384) || (VAR_9 == 715))) {
    VAR_1 = 1;
    VAR_0 = 0;
  }


  if (VAR_9 == 481) {
    int VAR_11 = (FUNC_2(VAR_7, 5) & 0x70) >> 4;
    switch (VAR_11) {
      case 2:
      case 3:
        VAR_0 = 1;
        break;
      case 6:
        VAR_0 = 0;
        break;
      default:
        break;
    }
  }



  if (VAR_9 == 241) {
    int VAR_12 = FUNC_2(VAR_7, 1);


    if (VAR_12 < 10) {
      VAR_12 = 0;
    }
    if (VAR_12 && (!VAR_2 || VAR_4)) {
       VAR_0 = 0;
    }
    VAR_2 = VAR_12;
  }


  if (VAR_9 == 417) {
    int VAR_13 = FUNC_2(VAR_7, 6);
    if (VAR_13 && !VAR_3 && VAR_6) {
      VAR_0 = 0;
    }
    VAR_3 = VAR_13;
  }


  if (VAR_9 == 189) {
    bool VAR_14 = FUNC_2(VAR_7, 0) & 0x20;
    if (VAR_14) {
      VAR_0 = 0;
    }
  }
}

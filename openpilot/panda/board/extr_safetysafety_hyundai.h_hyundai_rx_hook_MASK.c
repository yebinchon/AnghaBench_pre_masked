
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(CAN_FIFOMailBox_TypeDef *VAR_6) {
  int VAR_7 = FUNC_1(VAR_6);
  int VAR_8 = FUNC_0(VAR_6);

  if (VAR_8 == 897) {
    int VAR_9 = ((FUNC_2(VAR_6) >> 11) & 0xfff) - 2048;

    FUNC_3(&VAR_5, VAR_9);
  }


  if ((VAR_7 == 0) && (VAR_8 == 832)) {
    VAR_2 = 1;
    VAR_0 = 0;
  }


  if (VAR_8 == 832) {
    VAR_1 = VAR_7;
  }


  if (VAR_8 == 1057) {

    int VAR_10 = (FUNC_2(VAR_6) >> 13) & 0x3;
    if (VAR_10 && !VAR_3) {
      VAR_0 = 1;
    }
    if (!VAR_10) {
      VAR_0 = 0;
    }
    VAR_3 = VAR_10;
  }


  if ((VAR_8 == 832) && (VAR_7 == VAR_1) && (VAR_1 != 0)) {
    VAR_4 = 1;
  }
}

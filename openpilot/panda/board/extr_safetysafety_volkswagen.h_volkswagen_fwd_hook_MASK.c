
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2, CAN_FIFOMailBox_TypeDef *VAR_3) {
  int VAR_4 = FUNC_0(VAR_3);
  int VAR_5 = -1;



  switch (VAR_2) {
    case 0:

      VAR_5 = 2;
      break;
    case 2:
      if ((VAR_4 == VAR_0) || (VAR_4 == VAR_1)) {

        VAR_5 = -1;
      } else {

        VAR_5 = 0;
      }
      break;
    default:

      VAR_5 = -1;
      break;
  }

  return VAR_5;
}

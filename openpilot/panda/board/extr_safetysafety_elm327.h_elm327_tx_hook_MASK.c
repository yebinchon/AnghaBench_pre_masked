
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(CAN_FIFOMailBox_TypeDef *VAR_0) {

  int VAR_1 = 1;
  int VAR_2 = FUNC_0(VAR_0);
  int VAR_3 = FUNC_1(VAR_0);


  if (VAR_3 != 8) {
    VAR_1 = 0;
  }



  if ((VAR_2 != 0x18DB33F1) && ((VAR_2 & 0x1FFF00FF) != 0x18DA00F1) &&
      ((VAR_2 != 0x7DF) && ((VAR_2 & 0x7F8) != 0x7E0))) {
    VAR_1 = 0;
  }
  return VAR_1;
}

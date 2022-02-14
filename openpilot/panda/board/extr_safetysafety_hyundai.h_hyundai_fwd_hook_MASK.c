
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2, CAN_FIFOMailBox_TypeDef *VAR_3) {

  int VAR_4 = -1;

  if (VAR_1) {
    if (VAR_2 == 0) {
      VAR_4 = VAR_0;
    }
    if (VAR_2 == VAR_0) {
      int VAR_5 = FUNC_0(VAR_3);
      if (VAR_5 != 832) {
        VAR_4 = 0;
      }
    }
  }
  return VAR_4;
}

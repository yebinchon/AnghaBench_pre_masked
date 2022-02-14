
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_1(int VAR_8, CAN_FIFOMailBox_TypeDef *VAR_9) {
  int VAR_10 = -1;
  if (VAR_4 && !VAR_5) {
    int VAR_11 = FUNC_0(VAR_9);
    if (VAR_8 == VAR_3) {
      VAR_10 = VAR_0;
    }
    else if (VAR_8 == VAR_0) {

      if (!((VAR_11 == VAR_2) && VAR_7) &&
          !((VAR_11 == VAR_1) && VAR_6)) {
 VAR_10 = VAR_3;
      }
    }
    else {
      VAR_10 = -1;
    }
  }
  return VAR_10;
}

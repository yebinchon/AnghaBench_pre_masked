
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(int VAR_3, CAN_FIFOMailBox_TypeDef *VAR_4) {

  int VAR_5 = -1;
  if (VAR_1 && !VAR_2) {
    if (VAR_3 == 0) {
      VAR_5 = 2;
    }
    if (VAR_3 == 2) {
      int VAR_6 = FUNC_0(VAR_4);


      int VAR_7 = ((VAR_6 == 0x2E4) || (VAR_6 == 0x412) || (VAR_6 == 0x191));

      int VAR_8 = (VAR_6 == 0x343);
      int VAR_9 = VAR_7 || (VAR_8 && VAR_0);
      if (!VAR_9) {
        VAR_5 = 0;
      }
    }
  }
  return VAR_5;
}

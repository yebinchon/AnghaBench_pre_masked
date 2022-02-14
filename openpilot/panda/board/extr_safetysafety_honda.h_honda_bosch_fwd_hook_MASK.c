
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int FUNC_2(int VAR_0, CAN_FIFOMailBox_TypeDef *VAR_1) {
  int VAR_2 = -1;
  int VAR_3 = (FUNC_1()) ? 2 : 1;
  int VAR_4 = (FUNC_1()) ? 0 : 2;

  if (VAR_0 == VAR_4) {
    VAR_2 = VAR_3;
  }
  if (VAR_0 == VAR_3) {
    int VAR_5 = FUNC_0(VAR_1);
    int VAR_6 = (VAR_5 == 0xE4) || (VAR_5 == 0x33D);
    if (!VAR_6) {
      VAR_2 = VAR_4;
    }
  }
  return VAR_2;
}

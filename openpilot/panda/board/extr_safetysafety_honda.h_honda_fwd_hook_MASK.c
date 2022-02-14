
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

  if (VAR_2 == 0) {
    VAR_4 = 2;
  }
  if (VAR_2 == 2) {

    int VAR_5 = FUNC_0(VAR_3);
    bool VAR_6 = (VAR_5 == 0xE4) || (VAR_5 == 0x194) || (VAR_5 == 0x33D);
    bool VAR_7 = (VAR_5 == 0x30C) || (VAR_5 == 0x39F);
    bool VAR_8 = VAR_5 == 0x1FA;
    bool VAR_9 = VAR_6 ||
                     (VAR_7 && VAR_1) ||
                     (VAR_8 && VAR_1 && !VAR_0);
    if (!VAR_9) {
      VAR_4 = 0;
    }
  }
  return VAR_4;
}

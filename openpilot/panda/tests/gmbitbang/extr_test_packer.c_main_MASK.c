
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int RIR; int RDTR; int RDLR; int member_0; } ;
typedef TYPE_1__ CAN_FIFOMailBox_TypeDef ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (char*,...) ;

int FUNC_2() {
  char VAR_0[300];
  CAN_FIFOMailBox_TypeDef VAR_1 = {0};
  VAR_1.RIR = 20 << 21;
  VAR_1.RDTR = 1;
  VAR_1.RDLR = 1;

  int VAR_2 = FUNC_0(VAR_0, &VAR_1);
  FUNC_1("T:");
  for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    FUNC_1("%d", VAR_0[VAR_3]);
  }
  FUNC_1("\n");
  FUNC_1("R:0000010010100000100010000010011110111010100111111111111111");
  FUNC_1("\n");
  return 0;
}

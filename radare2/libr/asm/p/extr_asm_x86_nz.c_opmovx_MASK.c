
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {char* mnemonic; TYPE_1__* operands; } ;
struct TYPE_5__ {int type; int reg; int* regs; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(RAsm *VAR_4, ut8 *VAR_5, const Opcode *VAR_6) {
 FUNC_0 (VAR_6);
 int VAR_7 = 0;
 int VAR_8 = 0;
 char *VAR_9 = VAR_6->mnemonic + 3;

 if (!(VAR_6->operands[0].type & VAR_1 && VAR_6->operands[1].type & VAR_0)) {
  return -1;
 }
 if (VAR_6->operands[1].type & VAR_2) {
  VAR_8 = 1;
 }

 VAR_5[VAR_7++] = 0x0f;
 if (!FUNC_1 (VAR_9, "zx")) {
  VAR_5[VAR_7++] = 0xb6 + VAR_8;
 } else if (!FUNC_1 (VAR_9, "sx")) {
  VAR_5[VAR_7++] = 0xbe + VAR_8;
 }
 VAR_5[VAR_7++] = VAR_6->operands[0].reg << 3 | VAR_6->operands[1].regs[0];
 if (VAR_6->operands[1].regs[0] == VAR_3) {
  VAR_5[VAR_7++] = 0x24;
 }

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {int operands_count; TYPE_1__* operands; } ;
struct TYPE_5__ {int type; int* regs; int reg; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_4, ut8 *VAR_5, const Opcode *VAR_6) {
 FUNC_0 (VAR_6);
 int VAR_7 = 0;

 if ( VAR_6->operands[0].type & VAR_2 ) {
  VAR_5[VAR_7++] = 0x48;
 }
 switch (VAR_6->operands_count) {
 case 1:
  if ( VAR_6->operands[0].type & VAR_3 ) {
   VAR_5[VAR_7++] = 0x66;
  }
  if (VAR_6->operands[0].type & VAR_0) {
   VAR_5[VAR_7++] = 0xf6;
  } else {
   VAR_5[VAR_7++] = 0xf7;
  }
  if (VAR_6->operands[0].type & VAR_1) {
   VAR_5[VAR_7++] = 0x20 | VAR_6->operands[0].regs[0];
  } else {
   VAR_5[VAR_7++] = 0xe0 | VAR_6->operands[0].reg;
  }
  break;
 default:
  return -1;
 }
 return VAR_7;
}

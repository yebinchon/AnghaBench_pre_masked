
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {int operands_count; TYPE_1__* operands; } ;
struct TYPE_4__ {int type; int* regs; int reg; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(RAsm *VAR_4, ut8 *VAR_5, const Opcode *VAR_6) {
 int VAR_7 = 0;
 switch (VAR_6->operands_count) {
 case 1:
  if ( VAR_6->operands[0].type & VAR_1 &&
       VAR_6->operands[0].type & VAR_2 ) {
   VAR_5[VAR_7++] = 0xdd;
   VAR_5[VAR_7++] = 0x38 | VAR_6->operands[0].regs[0];
  } else if ( VAR_6->operands[0].type & VAR_0 &&
       VAR_6->operands[0].type & VAR_2 &&
       VAR_6->operands[0].reg == VAR_3 ) {
   VAR_5[VAR_7++] = 0xdf;
   VAR_5[VAR_7++] = 0xe0;
  } else {
   return -1;
  }
  break;
 default:
  return -1;
 }
 return VAR_7;
}

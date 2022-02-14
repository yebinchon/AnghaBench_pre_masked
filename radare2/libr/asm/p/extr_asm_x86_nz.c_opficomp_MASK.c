
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {int operands_count; TYPE_1__* operands; } ;
struct TYPE_4__ {int type; int* regs; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(RAsm *VAR_3, ut8 *VAR_4, const Opcode *VAR_5) {
 int VAR_6 = 0;
 switch (VAR_5->operands_count) {
 case 1:
  if ( VAR_5->operands[0].type & VAR_1 ) {
   if ( VAR_5->operands[0].type & VAR_2 ) {
    VAR_4[VAR_6++] = 0xde;
    VAR_4[VAR_6++] = 0x18 | VAR_5->operands[0].regs[0];
   } else if ( VAR_5->operands[0].type & VAR_0 ) {
    VAR_4[VAR_6++] = 0xda;
    VAR_4[VAR_6++] = 0x18 | VAR_5->operands[0].regs[0];
   } else {
    return -1;
   }
  } else {
   return -1;
  }
  break;
 default:
  return -1;
 }
 return VAR_6;
}

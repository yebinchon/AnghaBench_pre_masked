
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
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(RAsm *VAR_5, ut8 *VAR_6, const Opcode *VAR_7) {
 int VAR_8 = 0;
 switch (VAR_7->operands_count) {
 case 1:
  if ( VAR_7->operands[0].type & VAR_2 ) {
   if ( VAR_7->operands[0].type & VAR_0 ) {
    VAR_6[VAR_8++] = 0xd8;
    VAR_6[VAR_8++] = 0x20 | VAR_7->operands[0].regs[0];
   } else if ( VAR_7->operands[0].type & VAR_3 ) {
    VAR_6[VAR_8++] = 0xdc;
    VAR_6[VAR_8++] = 0x20 | VAR_7->operands[0].regs[0];
   } else {
    return -1;
   }
  } else {
   return -1;
  }
  break;
 case 2:
  if ( VAR_7->operands[0].type & VAR_1 & ~VAR_4 && VAR_7->operands[0].reg == 0 &&
       VAR_7->operands[1].type & VAR_1 & ~VAR_4 ) {
   VAR_6[VAR_8++] = 0xd8;
   VAR_6[VAR_8++] = 0xe0 | VAR_7->operands[1].reg;
  } else if ( VAR_7->operands[0].type & VAR_1 & ~VAR_4 &&
       VAR_7->operands[1].type & VAR_1 & ~VAR_4 && VAR_7->operands[1].reg == 0 ) {
   VAR_6[VAR_8++] = 0xdc;
   VAR_6[VAR_8++] = 0xe8 | VAR_7->operands[0].reg;
  } else {
   return -1;
  }
  break;
 default:
  return -1;
 }
 return VAR_8;
}

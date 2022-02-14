
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {TYPE_1__* operands; } ;
struct TYPE_5__ {int type; int reg; int offset; int offset_sign; int* regs; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_7, ut8 *VAR_8, const Opcode *VAR_9) {
 FUNC_0 (VAR_9);
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;
 if (VAR_9->operands[0].type & VAR_0) {
  if (VAR_9->operands[0].type & VAR_1) {
   return -1;
  }
  if (VAR_9->operands[0].type & VAR_2 & VAR_3) {
   ut8 VAR_13;
   if (VAR_9->operands[0].reg & VAR_6) {
    VAR_8[VAR_10++] = 0x0f;
    VAR_13 = 0x81;
   } else {
    VAR_13 = 0x7;
   }
   VAR_8[VAR_10++] = VAR_13 + (8 * VAR_9->operands[0].reg);
  } else {
   ut8 VAR_14 = 0x58;
   VAR_8[VAR_10++] = VAR_14 + VAR_9->operands[0].reg;
  }
 } else if (VAR_9->operands[0].type & VAR_1) {
  VAR_8[VAR_10++] = 0x8f;
  VAR_11 = VAR_9->operands[0].offset * VAR_9->operands[0].offset_sign;
  if (VAR_11 != 0 || VAR_9->operands[0].regs[0] == VAR_4) {
   VAR_12 = 1;
   if (VAR_11 >= 128 || VAR_11 < -128) {
    VAR_12 = 2;
   }
   VAR_8[VAR_10++] = VAR_12 << 6 | VAR_9->operands[0].regs[0];
   if (VAR_9->operands[0].regs[0] == VAR_5) {
    VAR_8[VAR_10++] = 0x24;
   }
   VAR_8[VAR_10++] = VAR_11;
   if (VAR_12 == 2) {
    VAR_8[VAR_10++] = VAR_11 >> 8;
    VAR_8[VAR_10++] = VAR_11 >> 16;
    VAR_8[VAR_10++] = VAR_11 >> 24;
   }
  } else {
   VAR_8[VAR_10++] = VAR_9->operands[0].regs[0];
   if (VAR_9->operands[0].regs[0] == VAR_5) {
    VAR_8[VAR_10++] = 0x24;
   }
  }

 }
 return VAR_10;
}

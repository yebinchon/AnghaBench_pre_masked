
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
typedef int st32 ;
struct TYPE_8__ {TYPE_1__* operands; } ;
struct TYPE_7__ {int bits; int pc; } ;
struct TYPE_6__ {int type; int* regs; int offset; int reg; int offset_sign; } ;
typedef TYPE_2__ RAsm ;
typedef TYPE_3__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(RAsm *VAR_7, ut8 *VAR_8, const Opcode *VAR_9){
 int VAR_10 = 0;
 int VAR_11 = 0;
 st32 VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;
 if (VAR_9->operands[0].type & VAR_2 &&
     VAR_9->operands[1].type & (VAR_1 | VAR_0)) {
  if (VAR_7->bits == 64) {
   VAR_8[VAR_10++] = 0x48;
  }
  VAR_8[VAR_10++] = 0x8d;
  if (VAR_9->operands[1].regs[0] == VAR_6) {

   ut64 VAR_15 = VAR_9->operands[1].offset - VAR_7->pc;
   if (VAR_8[0] == 0x48) {
    VAR_15 -= 7;
   }
   ut32 VAR_16 = 0xff00 & VAR_15;
   VAR_8[VAR_10++] = VAR_9->operands[0].reg << 3 | 5;
   VAR_8[VAR_10++] = VAR_15;
   VAR_8[VAR_10++] = VAR_16 >> 8;
   VAR_8[VAR_10++] = VAR_15 >> 16;
   VAR_8[VAR_10++] = VAR_15 >> 24;
   return VAR_10;
  } else {
   VAR_13 = VAR_9->operands[0].reg;
   VAR_14 = VAR_9->operands[1].regs[0];

   VAR_12 = VAR_9->operands[1].offset * VAR_9->operands[1].offset_sign;
   if (VAR_9->operands[1].regs[0] == VAR_5) {

    VAR_8[VAR_10++] = VAR_13 << 3 | 5;
    VAR_8[VAR_10++] = VAR_12;
    VAR_8[VAR_10++] = VAR_12 >> 8;
    VAR_8[VAR_10++] = VAR_12 >> 16;
    VAR_8[VAR_10++] = VAR_12 >> 24;
    return VAR_10;
   }
   if (VAR_12 != 0 || VAR_9->operands[1].regs[0] == VAR_3) {
    VAR_11 = 1;
    if (VAR_12 >= 128 || VAR_12 < -128) {
     VAR_11 = 2;
    }
    VAR_8[VAR_10++] = VAR_11 << 6 | VAR_13 << 3 | VAR_14;
    if (VAR_9->operands[1].regs[0] == VAR_4) {
     VAR_8[VAR_10++] = 0x24;
    }
    VAR_8[VAR_10++] = VAR_12;
    if (VAR_11 == 2) {
     VAR_8[VAR_10++] = VAR_12 >> 8;
     VAR_8[VAR_10++] = VAR_12 >> 16;
     VAR_8[VAR_10++] = VAR_12 >> 24;
    }
   } else {
    VAR_8[VAR_10++] = VAR_9->operands[0].reg << 3 | VAR_9->operands[1].regs[0];
    if (VAR_9->operands[1].regs[0] == VAR_4) {
     VAR_8[VAR_10++] = 0x24;
    }
   }

  }
 }
 return VAR_10;
}

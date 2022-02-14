
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
typedef int st32 ;
struct TYPE_9__ {TYPE_1__* operands; } ;
struct TYPE_8__ {int bits; } ;
struct TYPE_7__ {int type; int reg; int offset; int offset_sign; int* regs; int immediate; int sign; scalar_t__ extended; } ;
typedef TYPE_2__ RAsm ;
typedef TYPE_3__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__ const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_7, ut8 *VAR_8, const Opcode *VAR_9) {
 FUNC_0 (VAR_9);
 int VAR_10 = 0;
 int VAR_11 = 0;
 st32 VAR_12 = 0;;
 st32 VAR_13 = 0;
 if (VAR_9->operands[0].type & VAR_0 &&
     !(VAR_9->operands[0].type & VAR_1)) {
  if (VAR_9->operands[0].type & VAR_2 & VAR_3) {
   ut8 VAR_14;
   if (VAR_9->operands[0].reg & VAR_6) {
    VAR_8[VAR_10++] = 0x0f;
    VAR_14 = 0x80;
   } else {
    VAR_14 = 0x6;
   }
   VAR_8[VAR_10++] = VAR_14 + (8 * VAR_9->operands[0].reg);
  } else {
   if (VAR_9->operands[0].extended && VAR_7->bits == 64) {
    VAR_8[VAR_10++] = 0x41;
   }
   ut8 VAR_15 = 0x50;
   VAR_8[VAR_10++] = VAR_15 + VAR_9->operands[0].reg;
  }
 } else if (VAR_9->operands[0].type & VAR_1) {
  VAR_8[VAR_10++] = 0xff;
  VAR_13 = VAR_9->operands[0].offset * VAR_9->operands[0].offset_sign;
  if (VAR_13 != 0 || VAR_9->operands[0].regs[0] == VAR_4) {
   VAR_11 = 1;
   if (VAR_13 >= 128 || VAR_13 < -128) {
    VAR_11 = 2;
   }
   VAR_8[VAR_10++] = VAR_11 << 6 | 6 << 3 | VAR_9->operands[0].regs[0];
   if (VAR_9->operands[0].regs[0] == VAR_5) {
    VAR_8[VAR_10++] = 0x24;
   }
   VAR_8[VAR_10++] = VAR_13;
   if (VAR_11 == 2) {
    VAR_8[VAR_10++] = VAR_13 >> 8;
    VAR_8[VAR_10++] = VAR_13 >> 16;
    VAR_8[VAR_10++] = VAR_13 >> 24;
   }
  } else {
   VAR_11 = 3;
   VAR_8[VAR_10++] = VAR_11 << 4 | VAR_9->operands[0].regs[0];
   if (VAR_9->operands[0].regs[0] == VAR_5) {
    VAR_8[VAR_10++] = 0x24;
   }
  }
 } else {
  VAR_12 = VAR_9->operands[0].immediate * VAR_9->operands[0].sign;
  if (VAR_12 >= 128 || VAR_12 < -128) {
   VAR_8[VAR_10++] = 0x68;
   VAR_8[VAR_10++] = VAR_12;
   VAR_8[VAR_10++] = VAR_12 >> 8;
   VAR_8[VAR_10++] = VAR_12 >> 16;
   VAR_8[VAR_10++] = VAR_12 >> 24;
  } else {
   VAR_8[VAR_10++] = 0x6a;
   VAR_8[VAR_10++] = VAR_12;
  }
 }
 return VAR_10;
}

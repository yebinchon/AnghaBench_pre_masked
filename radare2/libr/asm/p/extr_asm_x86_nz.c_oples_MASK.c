
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {TYPE_1__* operands; } ;
struct TYPE_4__ {int type; int offset; int offset_sign; int reg; int* regs; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(RAsm *VAR_2, ut8* VAR_3, const Opcode *VAR_4) {
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;

 if (VAR_4->operands[1].type & VAR_1) {
  VAR_3[VAR_5++] = 0xc4;
  if (VAR_4->operands[1].type & VAR_0) {
   VAR_6 = VAR_4->operands[1].offset * VAR_4->operands[1].offset_sign;
   if (VAR_6) {
    VAR_7 = 1;
    if (VAR_6 > 128 || VAR_6 < -128) {
     VAR_7 = 2;
    }
   }
   VAR_3[VAR_5++] = VAR_7 << 6 | VAR_4->operands[0].reg << 3 | VAR_4->operands[1].regs[0];
   if (VAR_7) {
    VAR_3[VAR_5++] = VAR_6;
    if (VAR_7 > 1) {
     VAR_3[VAR_5++] = VAR_6 >> 8;
     VAR_3[VAR_5++] = VAR_6 >> 16;
     VAR_3[VAR_5++] = VAR_6 >> 24;
    }
   }
  } else {
   VAR_6 = VAR_4->operands[1].offset * VAR_4->operands[1].offset_sign;
   VAR_3[VAR_5++] = 0x05;
   VAR_3[VAR_5++] = VAR_6;
   VAR_3[VAR_5++] = VAR_6 >> 8;
   VAR_3[VAR_5++] = VAR_6 >> 16;
   VAR_3[VAR_5++] = VAR_6 >> 24;
  }
 }
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int st32 ;
struct TYPE_6__ {TYPE_1__* operands; } ;
struct TYPE_5__ {int type; int* regs; int offset; int offset_sign; int reg; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_5, ut8 *VAR_6, const Opcode *VAR_7) {
 FUNC_0 (VAR_7);
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;
 st32 VAR_12 = 0;

 if (VAR_7->operands[0].type & VAR_1 || VAR_7->operands[1].type & VAR_1) {
  VAR_6[VAR_8++] = 0x87;
  if (VAR_7->operands[0].type & VAR_1) {
   VAR_11 = VAR_7->operands[0].regs[0];
   VAR_12 = VAR_7->operands[0].offset * VAR_7->operands[0].offset_sign;
   VAR_10 = VAR_7->operands[1].reg;
  } else if (VAR_7->operands[1].type & VAR_1) {
   VAR_11 = VAR_7->operands[1].regs[0];
   VAR_12 = VAR_7->operands[1].offset * VAR_7->operands[1].offset_sign;
   VAR_10 = VAR_7->operands[0].reg;
  }
  if (VAR_12) {
   VAR_9 = 1;
   if (VAR_12 < VAR_3 || VAR_12 > VAR_2) {
    VAR_9 = 2;
   }
  }
 } else {
  if (VAR_7->operands[0].reg == VAR_4 &&
   VAR_7->operands[1].type & VAR_0) {
   VAR_6[VAR_8++] = 0x90 + VAR_7->operands[1].reg;
   return VAR_8;
  } else if (VAR_7->operands[1].reg == VAR_4 &&
       VAR_7->operands[0].type & VAR_0) {
   VAR_6[VAR_8++] = 0x90 + VAR_7->operands[0].reg;
   return VAR_8;
  } else if (VAR_7->operands[0].type & VAR_0 &&
       VAR_7->operands[1].type & VAR_0) {
   VAR_9 = 3;
   VAR_6[VAR_8++] = 0x87;
   VAR_10 = VAR_7->operands[1].reg;
   VAR_11 = VAR_7->operands[0].reg;
  }
 }
 VAR_6[VAR_8++] = VAR_9 << 6 | VAR_10 << 3 | VAR_11;
 if (VAR_9 > 0 && VAR_9 < 3) {
  VAR_6[VAR_8++] = VAR_12;
  if (VAR_9 == 2) {
   VAR_6[VAR_8++] = VAR_12 >> 8;
   VAR_6[VAR_8++] = VAR_12 >> 16;
   VAR_6[VAR_8++] = VAR_12 >> 24;
  }
 }
 return VAR_8;
}

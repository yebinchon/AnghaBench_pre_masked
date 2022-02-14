
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
struct TYPE_7__ {int reg; int type; int immediate; int sign; int* regs; int offset; int offset_sign; int* scale; scalar_t__ extended; int is_good_flag; } ;
typedef TYPE_2__ RAsm ;
typedef TYPE_3__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__ const*) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_12, ut8 *VAR_13, const Opcode *VAR_14, int VAR_15) {
 FUNC_2 (VAR_14);
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21 = 0;
 st32 VAR_22 = 0;
 int VAR_23 = 0;

 if (!VAR_14->operands[1].is_good_flag) {
  return -1;
 }

 if (VAR_14->operands[0].reg == VAR_8 && VAR_14->operands[1].type & VAR_1) {
  VAR_13[VAR_16++] = VAR_15 + 4;
  VAR_13[VAR_16++] = VAR_14->operands[1].immediate * VAR_14->operands[1].sign;
  return VAR_16;
 }

 if (VAR_12->bits == 64) {
  if (!(VAR_14->operands[0].type & VAR_14->operands[1].type)) {
   return -1;
  }
 }

 if (VAR_12->bits == 64 && ((VAR_14->operands[0].type & VAR_4) | (VAR_14->operands[1].type & VAR_4))) {
  if (VAR_14->operands[0].extended) {
    VAR_20 = 1;
  }
  if (VAR_14->operands[1].extended) {
   VAR_20 += 4;
  }
  VAR_13[VAR_16++] = 0x48 | VAR_20;
 }

 if (VAR_14->operands[0].type & VAR_3 && VAR_14->operands[1].type & VAR_5) {
  if (VAR_12->bits == 64 && (VAR_14->operands[0].type & VAR_2) &&
      (VAR_14->operands[1].type & VAR_2)) {
   VAR_13[VAR_16++] = 0x67;
  }
  if (VAR_14->operands[0].type & VAR_0 && VAR_14->operands[1].type & VAR_0) {
   VAR_13[VAR_16++] = VAR_15;
  } else if (VAR_14->operands[0].type & (VAR_2 | VAR_4) &&
      VAR_14->operands[1].type & (VAR_2 | VAR_4)) {
   VAR_13[VAR_16++] = VAR_15 + 0x1;
  } else {
   FUNC_0 ("Error: mismatched operand sizes\n");
   return -1;
  }
  VAR_18 = VAR_14->operands[1].reg;
  VAR_19 = VAR_14->operands[0].regs[0];
  VAR_22 = VAR_14->operands[0].offset * VAR_14->operands[0].offset_sign;
  if (VAR_19 == -1) {
   VAR_19 = 5;
   VAR_21 = 1;
  } else {
   if (VAR_22) {
    VAR_17 = 1;
    if (VAR_22 < VAR_7 || VAR_22 > VAR_6) {
     VAR_17 = 2;
    }
   } else if (VAR_14->operands[0].regs[1] != VAR_11) {
    VAR_19 = 4;
    VAR_22 = VAR_14->operands[0].regs[1] << 3;
   }
  }
 } else if (VAR_14->operands[0].type & VAR_5) {
  if (VAR_14->operands[1].type & VAR_3) {
   if (VAR_14->operands[0].type & VAR_0 && VAR_14->operands[1].type & VAR_0) {
    VAR_13[VAR_16++] = VAR_15 + 0x2;
   } else if (VAR_14->operands[0].type & (VAR_2 | VAR_4) &&
        VAR_14->operands[1].type & (VAR_2 | VAR_4)) {
    VAR_13[VAR_16++] = VAR_15 + 0x3;
   } else {
    FUNC_0 ("Error: mismatched operand sizes\n");
    return -1;
   }
   VAR_18 = VAR_14->operands[0].reg;
   VAR_19 = VAR_14->operands[1].regs[0];

   if (VAR_14->operands[1].scale[0] > 1) {
    if (VAR_14->operands[1].regs[1] != VAR_11) {
     VAR_13[VAR_16++] = VAR_14->operands[0].reg << 3 | 4;
     VAR_13[VAR_16++] = FUNC_1 (VAR_14->operands[1].scale[0]) << 6 |
          VAR_14->operands[1].regs[0] << 3 |
          VAR_14->operands[1].regs[1];
     return VAR_16;
    }
    VAR_13[VAR_16++] = VAR_14->operands[0].reg << 3 | 4;
    VAR_13[VAR_16++] = FUNC_1 (VAR_14->operands[1].scale[0]) << 6 | VAR_14->operands[1].regs[0] << 3 | 5;
    VAR_13[VAR_16++] = VAR_14->operands[1].offset * VAR_14->operands[1].offset_sign;
    VAR_13[VAR_16++] = 0;
    VAR_13[VAR_16++] = 0;
    VAR_13[VAR_16++] = 0;
    return VAR_16;
   }
   VAR_22 = VAR_14->operands[1].offset * VAR_14->operands[1].offset_sign;
   if (VAR_22) {
    VAR_17 = 1;
    if (VAR_22 < VAR_7 || VAR_22 > VAR_6) {
     VAR_17 = 2;
    }
   }

  } else if (VAR_14->operands[1].type & VAR_5) {
   if (VAR_14->operands[0].type & VAR_0 && VAR_14->operands[1].type & VAR_0) {
    VAR_13[VAR_16++] = VAR_15;
   } else if (VAR_14->operands[0].type & VAR_2 && VAR_14->operands[1].type & VAR_2) {
    VAR_13[VAR_16++] = VAR_15 + 0x1;
   }
   if (VAR_12->bits == 64) {
    if (VAR_14->operands[0].type & VAR_4 &&
     VAR_14->operands[1].type & VAR_4) {
     VAR_13[VAR_16++] = VAR_15 + 0x1;
    }
   }

   VAR_17 = 3;
   VAR_18 = VAR_14->operands[1].reg;
   VAR_19 = VAR_14->operands[0].reg;
  }
 }
 if (VAR_14->operands[0].regs[0] == VAR_9 ||
     VAR_14->operands[1].regs[0] == VAR_9) {

   VAR_23 = 1;
 }
 VAR_13[VAR_16++] = VAR_17 << 6 | VAR_18 << 3 | VAR_19;

 if (VAR_14->operands[0].regs[0] == VAR_10 ||
     VAR_14->operands[1].regs[0] == VAR_10) {
   VAR_13[VAR_16++] = 0x24;
 }
 if (VAR_22 || VAR_21 || VAR_23) {

  VAR_13[VAR_16++] = VAR_22;
  if (VAR_17 == 2 || VAR_21) {
   VAR_13[VAR_16++] = VAR_22 >> 8;
   VAR_13[VAR_16++] = VAR_22 >> 16;
   VAR_13[VAR_16++] = VAR_22 >> 24;
  }
 }
 return VAR_16;
}

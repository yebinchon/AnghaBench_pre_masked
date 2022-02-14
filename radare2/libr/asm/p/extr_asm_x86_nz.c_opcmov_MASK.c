
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {char* mnemonic; TYPE_1__* operands; } ;
struct TYPE_5__ {int type; int* scale; int* regs; int reg; int offset; int offset_sign; } ;
typedef int RAsm ;
typedef TYPE_2__ Opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_7, ut8 *VAR_8, const Opcode *VAR_9) {
 FUNC_1 (VAR_9);
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_9->operands[0].type & VAR_1 ||
     VAR_9->operands[1].type & VAR_0) {
  return -1;
 }

 VAR_8[VAR_10++] = 0x0f;
 char *VAR_13 = VAR_9->mnemonic + 4;
 if (!FUNC_2 (VAR_13, "o")) {
  VAR_8[VAR_10++] = 0x40;
 } else if (!FUNC_2 (VAR_13, "no")) {
  VAR_8 [VAR_10++] = 0x41;
 } else if (!FUNC_2 (VAR_13, "b") ||
            !FUNC_2 (VAR_13, "c") ||
            !FUNC_2 (VAR_13, "nae")) {
  VAR_8 [VAR_10++] = 0x42;
 } else if (!FUNC_2 (VAR_13, "ae") ||
            !FUNC_2 (VAR_13, "nb") ||
     !FUNC_2 (VAR_13, "nc")) {
  VAR_8 [VAR_10++] = 0x43;
 } else if (!FUNC_2 (VAR_13, "e") ||
                   !FUNC_2 (VAR_13, "z")) {
  VAR_8 [VAR_10++] = 0x44;
 } else if (!FUNC_2 (VAR_13, "ne") ||
            !FUNC_2 (VAR_13, "nz")) {
  VAR_8 [VAR_10++] = 0x45;
        } else if (!FUNC_2 (VAR_13, "be") ||
            !FUNC_2 (VAR_13, "na")) {
  VAR_8 [VAR_10++] = 0x46;
        } else if (!FUNC_2 (VAR_13, "a") ||
            !FUNC_2 (VAR_13, "nbe")) {
  VAR_8 [VAR_10++] = 0x47;
 } else if (!FUNC_2 (VAR_13, "s")) {
  VAR_8 [VAR_10++] = 0x48;
        } else if (!FUNC_2 (VAR_13, "ns")) {
  VAR_8 [VAR_10++] = 0x49;
        } else if (!FUNC_2 (VAR_13, "p") ||
            !FUNC_2 (VAR_13, "pe")) {
  VAR_8 [VAR_10++] = 0x4a;
        } else if (!FUNC_2 (VAR_13, "np") ||
            !FUNC_2 (VAR_13, "po")) {
  VAR_8 [VAR_10++] = 0x4b;
        } else if (!FUNC_2 (VAR_13, "l") ||
            !FUNC_2 (VAR_13, "nge")) {
  VAR_8 [VAR_10++] = 0x4c;
        } else if (!FUNC_2 (VAR_13, "ge") ||
            !FUNC_2 (VAR_13, "nl")) {
  VAR_8 [VAR_10++] = 0x4d;
        } else if (!FUNC_2 (VAR_13, "le") ||
            !FUNC_2 (VAR_13, "ng")) {
  VAR_8 [VAR_10++] = 0x4e;
        } else if (!FUNC_2 (VAR_13, "g") ||
            !FUNC_2 (VAR_13, "nle")) {
  VAR_8 [VAR_10++] = 0x4f;
        }

 if (VAR_9->operands[0].type & VAR_2) {
  if (VAR_9->operands[1].type & VAR_1) {
   if (VAR_9->operands[1].scale[0] > 1) {
    if (VAR_9->operands[1].regs[1] != VAR_6) {
     VAR_8[VAR_10++] = VAR_9->operands[0].reg << 3 | 4;
     VAR_8[VAR_10++] = FUNC_0 (VAR_9->operands[1].scale[0]) << 6 |
                                                            VAR_9->operands[1].regs[0] << 3 |
                                                            VAR_9->operands[1].regs[1];
     return VAR_10;
    }
    VAR_12 = VAR_9->operands[1].offset * VAR_9->operands[1].offset_sign;

    if (VAR_9->operands[1].scale[0] == 2 && VAR_12) {
     VAR_8[VAR_10++] = 0x40 | VAR_9->operands[0].reg << 3 | 4;
    } else {
     VAR_8[VAR_10++] = VAR_9->operands[0].reg << 3 | 4;
    }


    if (VAR_9->operands[1].scale[0] == 2) {
     VAR_8[VAR_10++] = VAR_9->operands[1].regs[0] << 3 | VAR_9->operands[1].regs[0];

    } else {
     VAR_8[VAR_10++] = FUNC_0 (VAR_9->operands[1].scale[0]) << 6 |
                                                            VAR_9->operands[1].regs[0] << 3 | 5;
    }

    if (VAR_12) {
     VAR_8[VAR_10++] = VAR_12;
     if (VAR_12 < VAR_4 || VAR_12 > VAR_3) {
      VAR_8[VAR_10++] = VAR_12 >> 8;
      VAR_8[VAR_10++] = VAR_12 >> 16;
      VAR_8[VAR_10++] = VAR_12 >> 24;
     }
    }
    return VAR_10;
   }
   if (VAR_9->operands[1].regs[1] != VAR_6) {
    VAR_8[VAR_10++] = VAR_9->operands[0].reg << 3 | 4;
    VAR_8[VAR_10++] = VAR_9->operands[1].regs[1] << 3 | VAR_9->operands[1].regs[0];
    return VAR_10;
   }

   VAR_12 = VAR_9->operands[1].offset * VAR_9->operands[1].offset_sign;
   if (VAR_9->operands[1].offset || VAR_9->operands[1].regs[0] == VAR_5) {
    VAR_11 = 1;
   }
   if (VAR_12 < VAR_4 || VAR_12 > VAR_3) {
    VAR_11 = 2;
   }

   VAR_8[VAR_10++] = VAR_11 << 6 | VAR_9->operands[0].reg << 3 | VAR_9->operands[1].regs[0];

   if (VAR_11) {
    VAR_8[VAR_10++] = VAR_12;
    if (VAR_11 == 2) {
     VAR_8[VAR_10++] = VAR_12 >> 8;
     VAR_8[VAR_10++] = VAR_12 >> 16;
     VAR_8[VAR_10++] = VAR_12 >> 24;
    }
   }
  } else {
   VAR_8[VAR_10++] = 0xc0 | VAR_9->operands[0].reg << 3 | VAR_9->operands[1].reg;
  }
 }

 return VAR_10;
}

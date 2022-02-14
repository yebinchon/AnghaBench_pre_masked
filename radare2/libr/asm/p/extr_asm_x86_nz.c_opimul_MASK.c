
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
typedef int st64 ;
struct TYPE_9__ {int operands_count; TYPE_1__* operands; } ;
struct TYPE_8__ {int bits; } ;
struct TYPE_7__ {int type; int* regs; int reg; int immediate; int sign; int offset; int offset_sign; } ;
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
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__ const*) ;

__attribute__((used)) static int FUNC_2(RAsm *VAR_8, ut8 *VAR_9, const Opcode *VAR_10) {
 FUNC_1 (VAR_10);
 int VAR_11 = 0;
 int VAR_12 = 0;
 st64 VAR_13 = 0;

 if ( VAR_10->operands[0].type & VAR_4 ) {
  VAR_9[VAR_11++] = 0x48;
 }
 switch (VAR_10->operands_count) {
 case 1:
  if ( VAR_10->operands[0].type & VAR_5 ) {
   VAR_9[VAR_11++] = 0x66;
  }
  if (VAR_10->operands[0].type & VAR_0) {
   VAR_9[VAR_11++] = 0xf6;
  } else {
   VAR_9[VAR_11++] = 0xf7;
  }
  if (VAR_10->operands[0].type & VAR_3) {
   VAR_9[VAR_11++] = 0x28 | VAR_10->operands[0].regs[0];
  } else {
   VAR_9[VAR_11++] = 0xe8 | VAR_10->operands[0].reg;
  }
  break;
 case 2:
  if (VAR_10->operands[0].type & VAR_2) {
   if (VAR_10->operands[1].type & VAR_1) {
    if (VAR_10->operands[1].immediate == -1) {
     FUNC_0 ("Error: Immediate exceeds max\n");
     return -1;
    }
    VAR_13 = VAR_10->operands[1].immediate * VAR_10->operands[1].sign;
    if (VAR_10->operands[0].type & VAR_2) {
     if (VAR_13 >= 128) {
      VAR_9[VAR_11++] = 0x69;
     } else {
      VAR_9[VAR_11++] = 0x6b;
     }
     VAR_9[VAR_11++] = 0xc0 | VAR_10->operands[0].reg << 3 | VAR_10->operands[0].reg;
     VAR_9[VAR_11++] = VAR_13;
     if (VAR_13 >= 128) {
      VAR_9[VAR_11++] = VAR_13 >> 8;
      VAR_9[VAR_11++] = VAR_13 >> 16;
      VAR_9[VAR_11++] = VAR_13 >> 24;
     }
     if (VAR_8->bits == 64 && VAR_13 > VAR_6) {
      VAR_9[VAR_11++] = VAR_13 >> 32;
      VAR_9[VAR_11++] = VAR_13 >> 40;
      VAR_9[VAR_11++] = VAR_13 >> 48;
      VAR_9[VAR_11++] = VAR_13 >> 56;
     }
    }
   } else if (VAR_10->operands[1].type & VAR_3) {
    VAR_9[VAR_11++] = 0x0f;
    VAR_9[VAR_11++] = 0xaf;
    if (VAR_10->operands[1].regs[0] != VAR_7) {
     VAR_12 = VAR_10->operands[1].offset * VAR_10->operands[1].offset_sign;
     if (VAR_12 != 0) {
      if (VAR_12 >= 128 || VAR_12 <= -128) {
       VAR_9[VAR_11] = 0x80;
      } else {
       VAR_9[VAR_11] = 0x40;
      }
      VAR_9[VAR_11++] |= VAR_10->operands[0].reg << 3 | VAR_10->operands[1].regs[0];
      VAR_9[VAR_11++] = VAR_12;
      if (VAR_12 >= 128 || VAR_12 <= -128) {
       VAR_9[VAR_11++] = VAR_12 >> 8;
       VAR_9[VAR_11++] = VAR_12 >> 16;
       VAR_9[VAR_11++] = VAR_12 >> 24;
      }
     } else {
      if (VAR_10->operands[1].regs[1] != VAR_7) {
       VAR_9[VAR_11++] = 0x04 | VAR_10->operands[0].reg << 3;
       VAR_9[VAR_11++] = VAR_10->operands[1].regs[1] << 3 | VAR_10->operands[1].regs[0];
      } else {
       VAR_9[VAR_11++] = VAR_10->operands[0].reg << 3 | VAR_10->operands[1].regs[0];
      }
     }
    } else {
     VAR_13 = VAR_10->operands[1].immediate * VAR_10->operands[1].sign;
     VAR_9[VAR_11++] = VAR_10->operands[0].reg << 3 | 0x5;
     VAR_9[VAR_11++] = VAR_13;
     VAR_9[VAR_11++] = VAR_13 >> 8;
     VAR_9[VAR_11++] = VAR_13 >> 16;
     VAR_9[VAR_11++] = VAR_13 >> 24;
    }
   } else if (VAR_10->operands[1].type & VAR_2) {
    VAR_9[VAR_11++] = 0x0f;
    VAR_9[VAR_11++] = 0xaf;
    VAR_9[VAR_11++] = 0xc0 | VAR_10->operands[0].reg << 3 | VAR_10->operands[1].reg;
   }
  }
  break;
 case 3:
  if (VAR_10->operands[0].type & VAR_2 &&
      (VAR_10->operands[1].type & VAR_2 || VAR_10->operands[1].type & VAR_3) &&
      VAR_10->operands[2].type & VAR_1) {
    VAR_9[VAR_11++] = 0x6b;
    if (VAR_10->operands[1].type & VAR_3) {
     if (VAR_10->operands[1].regs[1] != VAR_7) {
      VAR_9[VAR_11++] = 0x04 | VAR_10->operands[0].reg << 3;
      VAR_9[VAR_11++] = VAR_10->operands[1].regs[0] | VAR_10->operands[1].regs[1] << 3;
     } else {
      VAR_12 = VAR_10->operands[1].offset * VAR_10->operands[1].offset_sign;
      if (VAR_12 != 0) {
       if (VAR_12 >= 128 || VAR_12 <= -128) {
        VAR_9[VAR_11] = 0x80;
       } else {
        VAR_9[VAR_11] = 0x40;
       }
       VAR_9[VAR_11++] |= VAR_10->operands[0].reg << 3;
       VAR_9[VAR_11++] = VAR_12;
       if (VAR_12 >= 128 || VAR_12 <= -128) {
        VAR_9[VAR_11++] = VAR_12 >> 8;
        VAR_9[VAR_11++] = VAR_12 >> 16;
        VAR_9[VAR_11++] = VAR_12 >> 24;
       }
      } else {
       VAR_9[VAR_11++] = 0x00 | VAR_10->operands[0].reg << 3 | VAR_10->operands[1].regs[0];
      }
     }
    } else {
     VAR_9[VAR_11++] = 0xc0 | VAR_10->operands[0].reg << 3 | VAR_10->operands[1].reg;
    }
    VAR_13 = VAR_10->operands[2].immediate * VAR_10->operands[2].sign;
    VAR_9[VAR_11++] = VAR_13;
    if (VAR_13 >= 128 || VAR_13 <= -128) {
     VAR_9[VAR_11++] = VAR_13 >> 8;
     VAR_9[VAR_11++] = VAR_13 >> 16;
     VAR_9[VAR_11++] = VAR_13 >> 24;
    }
  }
  break;
 default:
  return -1;
 }
 return VAR_11;
}

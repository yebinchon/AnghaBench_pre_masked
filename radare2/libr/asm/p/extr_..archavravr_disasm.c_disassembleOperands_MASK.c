
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* operands; TYPE_1__* instruction; } ;
typedef TYPE_2__ disassembledInstruction ;
struct TYPE_4__ {int numOperands; int* operandTypes; } ;


 int VAR_0 ;







__attribute__((used)) static int FUNC_0(disassembledInstruction *VAR_1) {
 int VAR_2;


 if (!VAR_1)
  return VAR_0;
 if (!VAR_1->instruction)
  return VAR_0;


 for (VAR_2 = 0; VAR_2 < VAR_1->instruction->numOperands; VAR_2++) {
  switch (VAR_1->instruction->operandTypes[VAR_2]) {
  case 133:
   VAR_1->operands[VAR_2] <<= 1;
   if (VAR_1->operands[VAR_2] & 0x80) {




    VAR_1->operands[VAR_2] = (~VAR_1->operands[VAR_2]+1)&0x7F;
    VAR_1->operands[VAR_2] = -VAR_1->operands[VAR_2]+2;
   } else {
    VAR_1->operands[VAR_2] += 2;
   }
   break;
  case 128:
   VAR_1->operands[VAR_2] <<= 1;
   if (VAR_1->operands[VAR_2] & 0x1000) {




    short VAR_3 = ((~VAR_1->operands[VAR_2]) ) & 0xFFF;

    VAR_1->operands[VAR_2] = -VAR_3 + 1;

   } else {
    VAR_1->operands[VAR_2] += 2;
   }
   break;
  case 129:
   VAR_1->operands[VAR_2] = 16 + VAR_1->operands[VAR_2] ;
   break;
  case 131:
   VAR_1->operands[VAR_2] = VAR_1->operands[VAR_2] * 2;
   break;
  case 130:
   VAR_1->operands[VAR_2] = 24 + (VAR_1->operands[VAR_2] * 2);
   break;
  case 132:
   VAR_1->operands[VAR_2] = ~VAR_1->operands[VAR_2] & 0xFF;
   break;
  default:
   break;
  }
 }
 return 0;
}

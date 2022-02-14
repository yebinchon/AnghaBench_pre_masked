
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* regs; int opcode; int* cexp; TYPE_1__* code; } ;
struct TYPE_3__ {int nr_operands; int* fields; } ;







 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 ()
{
  int VAR_1;

  for (VAR_1 = 0; VAR_1 < VAR_0.code->nr_operands; ++VAR_1) {
   switch (VAR_0.code->fields[VAR_1]) {
   case 132:
    VAR_0.regs[VAR_1] = (VAR_0.opcode & 0xf0000000) >> 28;
    break;

   case 130:
    VAR_0.cexp[VAR_1] = (VAR_0.opcode & 0x0f800000) >> 23;
    break;

   case 131:
    VAR_0.cexp[VAR_1] = (VAR_0.opcode & 0x001f0000) >> 16;
    break;

   case 128:
    VAR_0.regs[VAR_1] = (VAR_0.opcode & 0x0000f000) >> 12;
    break;

   case 129:
    VAR_0.regs[VAR_1] = (VAR_0.opcode & 0x00000f00) >> 8;
    break;
   }
  }
}

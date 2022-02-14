
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int opcode; unsigned long* cexp; TYPE_1__* code; } ;
struct TYPE_3__ {int nr_operands; int* fields; } ;



 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 ()
{
  int VAR_1;
  unsigned long VAR_2, VAR_3;

  for (VAR_1 = 0; VAR_1 < VAR_0.code->nr_operands; ++VAR_1) {
   switch (VAR_0.code->fields[VAR_1]) {
   case 128:
    VAR_2 = (VAR_0.opcode & 0xffff0000) >> 16;
    VAR_3 = (VAR_0.opcode & 0x0000ff00) << 8;
    VAR_0.cexp[VAR_1] = VAR_2 | VAR_3;
    break;
   }
  }
}

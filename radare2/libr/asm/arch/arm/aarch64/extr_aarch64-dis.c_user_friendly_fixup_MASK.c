
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* operands; TYPE_1__* opcode; } ;
typedef TYPE_4__ aarch64_inst ;
struct TYPE_7__ {int value; } ;
struct TYPE_8__ {int qualifier; TYPE_2__ imm; } ;
struct TYPE_6__ {int iclass; } ;


 int VAR_0 ;


__attribute__((used)) static void
FUNC_0 (aarch64_inst *VAR_1)
{
  switch (VAR_1->opcode->iclass)
    {
    case 128:






      if (VAR_1->operands[1].imm.value < 32)
 VAR_1->operands[0].qualifier = VAR_0;
      break;
    default: break;
    }
}

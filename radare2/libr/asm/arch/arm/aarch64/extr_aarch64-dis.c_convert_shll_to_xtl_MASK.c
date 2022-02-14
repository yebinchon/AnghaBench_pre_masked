
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* operands; } ;
typedef TYPE_3__ aarch64_inst ;
struct TYPE_5__ {scalar_t__ value; } ;
struct TYPE_6__ {int type; TYPE_1__ imm; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (aarch64_inst *VAR_1)
{
  if (VAR_1->operands[2].imm.value == 0)
    {
      VAR_1->operands[2].type = VAR_0;
      return 1;
    }
  return 0;
}

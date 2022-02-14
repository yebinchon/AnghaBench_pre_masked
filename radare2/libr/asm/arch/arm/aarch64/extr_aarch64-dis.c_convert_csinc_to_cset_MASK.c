
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* operands; } ;
typedef TYPE_3__ aarch64_inst ;
struct TYPE_11__ {int value; } ;
struct TYPE_8__ {int regno; } ;
struct TYPE_9__ {void* type; TYPE_4__* cond; TYPE_1__ reg; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int) ;
 TYPE_4__* FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_2 (aarch64_inst *VAR_1)
{
  if (VAR_1->operands[1].reg.regno == 0x1f
      && VAR_1->operands[2].reg.regno == 0x1f
      && (VAR_1->operands[3].cond->value & 0xe) != 0xe)
    {
      FUNC_0 (VAR_1, 1, 3);
      VAR_1->operands[1].cond = FUNC_1 (VAR_1->operands[3].cond);
      VAR_1->operands[3].type = VAR_0;
      VAR_1->operands[2].type = VAR_0;
      return 1;
    }
  return 0;
}

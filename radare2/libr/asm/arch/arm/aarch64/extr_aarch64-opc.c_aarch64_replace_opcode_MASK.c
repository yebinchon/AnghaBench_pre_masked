
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* operands; int name; } ;
typedef TYPE_2__ const aarch64_opcode ;
struct TYPE_9__ {TYPE_1__* operands; TYPE_2__ const* opcode; } ;
typedef TYPE_3__ aarch64_inst ;
struct TYPE_7__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;

const aarch64_opcode*
FUNC_1 (aarch64_inst *VAR_2, const aarch64_opcode *VAR_3)
{
  int VAR_4;
  const aarch64_opcode *VAR_5 = VAR_2->opcode;

  VAR_2->opcode = VAR_3;


  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
    {
      VAR_2->operands[VAR_4].type = VAR_3->operands[VAR_4];
      if (VAR_3->operands[VAR_4] == VAR_1)
 break;
    }

  FUNC_0 ("replace %s with %s", VAR_5->name, VAR_3->name);

  return VAR_5;
}

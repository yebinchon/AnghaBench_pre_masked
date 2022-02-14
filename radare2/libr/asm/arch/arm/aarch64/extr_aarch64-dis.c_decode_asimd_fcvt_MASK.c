
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum aarch64_opnd_qualifier { ____Placeholder_aarch64_opnd_qualifier } aarch64_opnd_qualifier ;
struct TYPE_10__ {TYPE_2__* operands; TYPE_1__* opcode; int value; } ;
typedef TYPE_3__ aarch64_inst ;
typedef scalar_t__ aarch64_insn ;
struct TYPE_11__ {int member_1; int member_0; } ;
typedef TYPE_4__ aarch64_field ;
struct TYPE_9__ {int qualifier; } ;
struct TYPE_8__ {int op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (int ,int ,int,TYPE_4__*) ;

__attribute__((used)) static int
FUNC_3 (aarch64_inst *VAR_3)
{
  aarch64_field VAR_4 = {0, 0};
  aarch64_insn VAR_5;
  enum aarch64_opnd_qualifier VAR_6;

  FUNC_2 (VAR_2, 0, 1, &VAR_4);
  VAR_5 = FUNC_1 (&VAR_4, VAR_3->value, 0);
  VAR_6 = VAR_5 == 0 ? VAR_1
    : VAR_0;
  switch (VAR_3->opcode->op)
    {
    case 129:
    case 128:

      VAR_3->operands[1].qualifier = VAR_6;
      break;
    case 131:
    case 130:

      VAR_3->operands[0].qualifier = VAR_6;
      break;
    default:
      FUNC_0 (0);
      return 0;
    }

  return 1;
}

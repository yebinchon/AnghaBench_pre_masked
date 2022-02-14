
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_10__ {int value; } ;
struct TYPE_11__ {TYPE_2__ imm; } ;
typedef TYPE_3__ aarch64_opnd_info ;
typedef int aarch64_operand_error ;
typedef int aarch64_operand ;
struct TYPE_12__ {TYPE_1__* operands; } ;
typedef TYPE_4__ aarch64_inst ;
typedef int aarch64_insn ;
struct TYPE_9__ {int qualifier; } ;


 scalar_t__ FUNC_0 (int const*,TYPE_3__*,int const,TYPE_4__ const*,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;

bfd_boolean
FUNC_3 (const aarch64_operand *VAR_0,
     aarch64_opnd_info *VAR_1, const aarch64_insn VAR_2,
     const aarch64_inst *VAR_3,
     aarch64_operand_error *VAR_4)
{
  int VAR_5 = FUNC_1 (VAR_3->operands[0].qualifier);
  return (FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4)
   && FUNC_2 (VAR_1->imm.value, VAR_5));
}

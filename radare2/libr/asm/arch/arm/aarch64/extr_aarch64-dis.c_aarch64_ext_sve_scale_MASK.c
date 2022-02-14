
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_5__ {int amount; int operator_present; int amount_present; int kind; } ;
struct TYPE_6__ {TYPE_1__ shifter; } ;
typedef TYPE_2__ aarch64_opnd_info ;
typedef int aarch64_operand_error ;
typedef int aarch64_operand ;
typedef int aarch64_inst ;
typedef int aarch64_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,TYPE_2__*,int ,int const*,int *) ;
 int FUNC_1 (int ,int ,int ) ;

bfd_boolean
FUNC_2 (const aarch64_operand *VAR_4,
         aarch64_opnd_info *VAR_5, aarch64_insn VAR_6,
         const aarch64_inst *VAR_7, aarch64_operand_error *VAR_8)
{
  int VAR_9;

  if (!FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8))
    return VAR_1;
  VAR_9 = FUNC_1 (VAR_2, VAR_6, 0);
  VAR_5->shifter.kind = VAR_0;
  VAR_5->shifter.amount = VAR_9 + 1;
  VAR_5->shifter.operator_present = (VAR_9 != 0);
  VAR_5->shifter.amount_present = (VAR_9 != 0);
  return VAR_3;
}

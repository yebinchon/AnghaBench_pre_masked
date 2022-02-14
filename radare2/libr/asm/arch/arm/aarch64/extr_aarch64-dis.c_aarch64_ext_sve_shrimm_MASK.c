
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_5__ {scalar_t__ value; } ;
struct TYPE_6__ {TYPE_1__ imm; } ;
typedef TYPE_2__ aarch64_opnd_info ;
typedef int aarch64_operand_error ;
typedef int aarch64_operand ;
typedef int aarch64_inst ;
typedef int aarch64_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,TYPE_2__*,int const,int const*,int *) ;
 int FUNC_1 (scalar_t__) ;

bfd_boolean
FUNC_2 (const aarch64_operand *VAR_2,
   aarch64_opnd_info *VAR_3, const aarch64_insn VAR_4,
   const aarch64_inst *VAR_5, aarch64_operand_error *VAR_6)
{
  if (!FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6)
      || VAR_3->imm.value == 0)
    return VAR_0;

  VAR_3->imm.value = FUNC_1 (VAR_3->imm.value) * 2 - VAR_3->imm.value;
  return VAR_1;
}

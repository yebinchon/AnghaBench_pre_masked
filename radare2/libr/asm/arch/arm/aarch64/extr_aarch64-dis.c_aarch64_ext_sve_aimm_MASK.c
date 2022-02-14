
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int bfd_boolean ;
struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_7__ {TYPE_1__ imm; } ;
typedef TYPE_2__ aarch64_opnd_info ;
typedef int aarch64_operand_error ;
typedef int aarch64_operand ;
typedef int aarch64_inst ;
typedef int aarch64_insn ;


 scalar_t__ FUNC_0 (int const*,TYPE_2__*,int const,int const*,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;

bfd_boolean
FUNC_2 (const aarch64_operand *VAR_0,
        aarch64_opnd_info *VAR_1, const aarch64_insn VAR_2,
        const aarch64_inst *VAR_3,
        aarch64_operand_error *VAR_4)
{
  return (FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4)
   && FUNC_1 (VAR_1, (uint8_t) VAR_1->imm.value));
}

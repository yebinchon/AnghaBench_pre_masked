
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
typedef int bfd_boolean ;
struct TYPE_10__ {void* amount_present; void* operator_present; } ;
struct TYPE_9__ {int imm; void* is_reg; } ;
struct TYPE_11__ {int preind; void* writeback; TYPE_1__ offset; int base_regno; } ;
struct TYPE_12__ {TYPE_2__ shifter; TYPE_3__ addr; } ;
typedef TYPE_4__ aarch64_opnd_info ;
struct TYPE_13__ {int * fields; } ;
typedef TYPE_5__ aarch64_operand ;
typedef int aarch64_insn ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_5__ const*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (const aarch64_operand *VAR_2,
         aarch64_opnd_info *VAR_3, aarch64_insn VAR_4,
         int64_t VAR_5)
{
  VAR_3->addr.base_regno = FUNC_0 (VAR_2->fields[0], VAR_4, 0);
  VAR_3->addr.offset.imm = VAR_5 * (1 << FUNC_1 (VAR_2));
  VAR_3->addr.offset.is_reg = VAR_0;
  VAR_3->addr.writeback = VAR_0;
  VAR_3->addr.preind = VAR_1;
  VAR_3->shifter.operator_present = VAR_0;
  VAR_3->shifter.amount_present = VAR_0;
  return VAR_1;
}

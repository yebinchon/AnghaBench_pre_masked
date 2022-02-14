
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
struct TYPE_11__ {int amount; int operator_present; void* amount_present; int kind; } ;
struct TYPE_9__ {int imm; void* is_reg; } ;
struct TYPE_10__ {TYPE_1__ offset; int preind; void* writeback; int base_regno; } ;
struct TYPE_12__ {TYPE_3__ shifter; TYPE_2__ addr; } ;
typedef TYPE_4__ aarch64_opnd_info ;
struct TYPE_13__ {int * fields; } ;
typedef TYPE_5__ aarch64_operand ;
typedef int aarch64_insn ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_5__ const*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (const aarch64_operand *VAR_3,
     aarch64_opnd_info *VAR_4, aarch64_insn VAR_5,
     int64_t VAR_6)
{
  VAR_4->addr.base_regno = FUNC_0 (VAR_3->fields[0], VAR_5, 0);
  VAR_4->addr.offset.imm = VAR_6 * (1 + FUNC_1 (VAR_3));
  VAR_4->addr.offset.is_reg = VAR_1;
  VAR_4->addr.writeback = VAR_1;
  VAR_4->addr.preind = VAR_2;
  if (VAR_6 != 0)
    VAR_4->shifter.kind = VAR_0;
  VAR_4->shifter.amount = 1;
  VAR_4->shifter.operator_present = (VAR_4->addr.offset.imm != 0);
  VAR_4->shifter.amount_present = VAR_1;
  return VAR_2;
}

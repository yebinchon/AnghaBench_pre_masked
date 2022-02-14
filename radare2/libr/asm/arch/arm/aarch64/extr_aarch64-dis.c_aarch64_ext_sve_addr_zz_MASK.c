
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum aarch64_modifier_kind { ____Placeholder_aarch64_modifier_kind } aarch64_modifier_kind ;
typedef void* bfd_boolean ;
struct TYPE_10__ {int kind; scalar_t__ amount; int operator_present; int amount_present; } ;
struct TYPE_8__ {void* is_reg; void* regno; } ;
struct TYPE_9__ {void* preind; int writeback; TYPE_1__ offset; void* base_regno; } ;
struct TYPE_11__ {TYPE_3__ shifter; TYPE_2__ addr; } ;
typedef TYPE_4__ aarch64_opnd_info ;
struct TYPE_12__ {int * fields; } ;
typedef TYPE_5__ aarch64_operand ;
typedef int aarch64_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (const aarch64_operand *VAR_4, aarch64_opnd_info *VAR_5,
    aarch64_insn VAR_6, enum aarch64_modifier_kind VAR_7)
{
  VAR_5->addr.base_regno = FUNC_0 (VAR_4->fields[0], VAR_6, 0);
  VAR_5->addr.offset.regno = FUNC_0 (VAR_4->fields[1], VAR_6, 0);
  VAR_5->addr.offset.is_reg = VAR_3;
  VAR_5->addr.writeback = VAR_1;
  VAR_5->addr.preind = VAR_3;
  VAR_5->shifter.kind = VAR_7;
  VAR_5->shifter.amount = FUNC_0 (VAR_2, VAR_6, 0);
  VAR_5->shifter.operator_present = (VAR_7 != VAR_0
        || VAR_5->shifter.amount != 0);
  VAR_5->shifter.amount_present = (VAR_5->shifter.amount != 0);
  return VAR_3;
}

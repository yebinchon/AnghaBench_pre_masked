
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
typedef int bfd_boolean ;
struct TYPE_5__ {int value; } ;
struct TYPE_6__ {int amount; int operator_present; int amount_present; int kind; } ;
struct TYPE_7__ {TYPE_1__ imm; TYPE_2__ shifter; } ;
typedef TYPE_3__ aarch64_opnd_info ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (aarch64_opnd_info *VAR_2, int64_t VAR_3)
{
  VAR_2->shifter.kind = VAR_0;
  VAR_2->shifter.amount = 0;
  if (VAR_2->imm.value & 0x100)
    {
      if (VAR_3 == 0)

 VAR_2->shifter.amount = 8;
      else
 VAR_3 *= 256;
    }
  VAR_2->shifter.operator_present = (VAR_2->shifter.amount != 0);
  VAR_2->shifter.amount_present = (VAR_2->shifter.amount != 0);
  VAR_2->imm.value = VAR_3;
  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {TYPE_2__* operands; } ;
typedef TYPE_3__ aarch64_inst ;
struct TYPE_5__ {scalar_t__ value; } ;
struct TYPE_6__ {scalar_t__ qualifier; TYPE_1__ imm; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0 (aarch64_inst *VAR_2)
{
  int64_t VAR_3 = VAR_2->operands[2].imm.value;
  int64_t VAR_4 = VAR_2->operands[3].imm.value;
  int64_t VAR_5
    = VAR_2->operands[2].qualifier == VAR_1 ? 31 : 63;

  if ((VAR_3 == 0 && VAR_4 == VAR_5) || VAR_3 == VAR_4 + 1)
    {
      VAR_2->operands[3].type = VAR_0;
      VAR_2->operands[2].imm.value = VAR_5 - VAR_4;
      return 1;
    }

  return 0;
}

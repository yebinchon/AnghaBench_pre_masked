
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {TYPE_2__* operands; } ;
typedef TYPE_3__ aarch64_inst ;
struct TYPE_6__ {int value; } ;
struct TYPE_7__ {scalar_t__ qualifier; TYPE_1__ imm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_1 (aarch64_inst *VAR_1)
{
  int64_t VAR_2, VAR_3, VAR_4;

  VAR_2 = VAR_1->operands[2].imm.value;
  VAR_3 = VAR_1->operands[3].imm.value;
  VAR_4 = VAR_1->operands[2].qualifier == VAR_0 ? 32 : 64;
  if (VAR_3 < VAR_2)
    {
      VAR_1->operands[2].imm.value = (VAR_4 - VAR_2) & (VAR_4 - 1);
      VAR_1->operands[3].imm.value = VAR_3 + 1;


      FUNC_0 (VAR_1, 2);
      FUNC_0 (VAR_1, 3);
      return 1;
    }

  return 0;
}

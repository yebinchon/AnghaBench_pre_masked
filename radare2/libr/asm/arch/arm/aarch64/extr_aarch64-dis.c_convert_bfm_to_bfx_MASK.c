
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {TYPE_2__* operands; } ;
typedef TYPE_3__ aarch64_inst ;
struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_7__ {TYPE_1__ imm; } ;


 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_1 (aarch64_inst *VAR_0)
{
  int64_t VAR_1, VAR_2;

  VAR_1 = VAR_0->operands[2].imm.value;
  VAR_2 = VAR_0->operands[3].imm.value;
  if (VAR_2 >= VAR_1)
    {
      int64_t VAR_3 = VAR_1;
      VAR_0->operands[2].imm.value = VAR_3;
      VAR_0->operands[3].imm.value = VAR_2 + 1 - VAR_3;


      FUNC_0 (VAR_0, 2);
      FUNC_0 (VAR_0, 3);
      return 1;
    }

  return 0;
}

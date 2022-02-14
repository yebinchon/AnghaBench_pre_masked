
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {TYPE_3__* operands; } ;
typedef TYPE_4__ aarch64_inst ;
struct TYPE_9__ {int value; } ;
struct TYPE_8__ {int regno; } ;
struct TYPE_10__ {scalar_t__ qualifier; TYPE_2__ imm; int type; TYPE_1__ reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int,int) ;
 int FUNC_2 (TYPE_4__*,int) ;

__attribute__((used)) static int
FUNC_3 (aarch64_inst *VAR_2)
{
  int64_t VAR_3, VAR_4, VAR_5;


  FUNC_0 (VAR_2->operands[1].reg.regno == 0x1f);

  VAR_3 = VAR_2->operands[2].imm.value;
  VAR_4 = VAR_2->operands[3].imm.value;
  VAR_5 = VAR_2->operands[2].qualifier == VAR_1 ? 32 : 64;
  if (VAR_4 < VAR_3)
    {

      FUNC_1 (VAR_2, 1, 2);
      FUNC_1 (VAR_2, 2, 3);
      VAR_2->operands[3].type = VAR_0;


      VAR_2->operands[1].imm.value = (VAR_5 - VAR_3) & (VAR_5 - 1);
      VAR_2->operands[2].imm.value = VAR_4 + 1;



      FUNC_2 (VAR_2, 1);
      FUNC_2 (VAR_2, 2);
      FUNC_2 (VAR_2, 3);

      return 1;
    }

  return 0;
}

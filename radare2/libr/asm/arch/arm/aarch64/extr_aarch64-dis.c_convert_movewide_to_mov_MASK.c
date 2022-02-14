
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {TYPE_4__* operands; TYPE_1__* opcode; } ;
typedef TYPE_5__ aarch64_inst ;
struct TYPE_9__ {int amount; int kind; } ;
struct TYPE_8__ {int value; } ;
struct TYPE_10__ {scalar_t__ qualifier; TYPE_3__ shifter; TYPE_2__ imm; int type; } ;
struct TYPE_7__ {scalar_t__ op; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int *) ;

__attribute__((used)) static int
FUNC_1 (aarch64_inst *VAR_4)
{
  uint64_t VAR_5 = VAR_4->operands[1].imm.value;

  if (VAR_5 == 0 && VAR_4->operands[1].shifter.amount != 0)
    return 0;
  VAR_4->operands[1].type = VAR_1;
  VAR_4->operands[1].shifter.kind = VAR_0;
  VAR_5 <<= VAR_4->operands[1].shifter.amount;


  if (VAR_4->opcode->op == VAR_3)
    {
      int VAR_6 = VAR_4->operands[0].qualifier == VAR_2;
      VAR_5 = ~VAR_5;

      if (FUNC_0 (VAR_5, VAR_6, ((void*)0)))
 return 0;
    }
  VAR_4->operands[1].imm.value = VAR_5;
  VAR_4->operands[1].shifter.amount = 0;
  return 1;
}

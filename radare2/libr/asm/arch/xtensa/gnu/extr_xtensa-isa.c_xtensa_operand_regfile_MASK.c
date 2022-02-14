
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xtensa_regfile ;
struct TYPE_3__ {int regfile; } ;
typedef TYPE_1__ xtensa_operand_internal ;
typedef int xtensa_opcode ;
typedef int xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

xtensa_regfile
FUNC_1 (xtensa_isa VAR_1, xtensa_opcode VAR_2, int VAR_3)
{
  xtensa_isa_internal *VAR_4 = (xtensa_isa_internal *) VAR_1;
  xtensa_operand_internal *VAR_5;

  VAR_5 = FUNC_0 (VAR_4, VAR_2, VAR_3);
  if (!VAR_5) {
   return VAR_0;
  }

  return VAR_5->regfile;
}

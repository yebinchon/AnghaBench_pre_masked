
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; } ;
typedef TYPE_1__ xtensa_operand_internal ;
typedef int xtensa_opcode ;
typedef int xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;


 TYPE_1__* FUNC_0 (int *,int ,int) ;

const char *
FUNC_1 (xtensa_isa VAR_0, xtensa_opcode VAR_1, int VAR_2)
{
  xtensa_isa_internal *VAR_3 = (xtensa_isa_internal *) VAR_0;
  xtensa_operand_internal *VAR_4;

  VAR_4 = FUNC_0 (VAR_3, VAR_1, VAR_2);
  if (!VAR_4) {
   return ((void*)0);
  }
  return VAR_4->name;
}

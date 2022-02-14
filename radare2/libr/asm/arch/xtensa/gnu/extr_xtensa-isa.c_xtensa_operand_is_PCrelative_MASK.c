
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ xtensa_operand_internal ;
typedef int xtensa_opcode ;
typedef int xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;

int
FUNC_1 (xtensa_isa VAR_2, xtensa_opcode VAR_3, int VAR_4)
{
  xtensa_isa_internal *VAR_5 = (xtensa_isa_internal *) VAR_2;
  xtensa_operand_internal *VAR_6;

  VAR_6 = FUNC_0 (VAR_5, VAR_3, VAR_4);
  if (!VAR_6) {
   return VAR_1;
  }

  if ((VAR_6->flags & VAR_0) != 0) {
   return 1;
  }
  return 0;
}

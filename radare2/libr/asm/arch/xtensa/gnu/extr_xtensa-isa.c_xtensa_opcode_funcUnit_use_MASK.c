
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t xtensa_opcode ;
struct TYPE_5__ {TYPE_1__* opcodes; } ;
typedef TYPE_2__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
typedef int xtensa_funcUnit_use ;
struct TYPE_4__ {int num_funcUnit_uses; char* name; int * funcUnit_uses; } ;


 int FUNC_0 (TYPE_2__*,size_t,int *) ;
 int FUNC_1 (int ,char*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

xtensa_funcUnit_use *
FUNC_2 (xtensa_isa VAR_3, xtensa_opcode VAR_4, int VAR_5)
{
  xtensa_isa_internal *VAR_6 = (xtensa_isa_internal *) VAR_3;
  FUNC_0 (VAR_6, VAR_4, ((void*)0));
  if (VAR_5 < 0 || VAR_5 >= VAR_6->opcodes[VAR_4].num_funcUnit_uses)
    {
      VAR_1 = VAR_0;
      FUNC_1 (VAR_2, "invalid functional unit use number (%d); "
        "opcode \"%s\" has %d", VAR_5, VAR_6->opcodes[VAR_4].name,
        VAR_6->opcodes[VAR_4].num_funcUnit_uses);
      return ((void*)0);
    }
  return &VAR_6->opcodes[VAR_4].funcUnit_uses[VAR_5];
}

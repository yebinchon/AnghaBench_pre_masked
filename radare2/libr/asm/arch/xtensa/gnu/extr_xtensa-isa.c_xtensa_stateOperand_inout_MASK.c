
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t xtensa_opcode ;
struct TYPE_10__ {TYPE_4__* iclasses; TYPE_2__* opcodes; } ;
typedef TYPE_3__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
struct TYPE_11__ {TYPE_1__* stateOperands; } ;
typedef TYPE_4__ xtensa_iclass_internal ;
struct TYPE_9__ {int iclass_id; } ;
struct TYPE_8__ {char inout; } ;


 int FUNC_0 (TYPE_3__*,size_t,int ) ;
 int FUNC_1 (TYPE_3__*,size_t,TYPE_4__*,int,int ) ;

char
FUNC_2 (xtensa_isa VAR_0, xtensa_opcode VAR_1, int VAR_2)
{
  xtensa_isa_internal *VAR_3 = (xtensa_isa_internal *) VAR_0;
  xtensa_iclass_internal *VAR_4;
  int VAR_5;

  FUNC_0 (VAR_3, VAR_1, 0);
  VAR_5 = VAR_3->opcodes[VAR_1].iclass_id;
  VAR_4 = &VAR_3->iclasses[VAR_5];
  FUNC_1 (VAR_3, VAR_1, VAR_4, VAR_2, 0);
  return VAR_4->stateOperands[VAR_2].inout;
}

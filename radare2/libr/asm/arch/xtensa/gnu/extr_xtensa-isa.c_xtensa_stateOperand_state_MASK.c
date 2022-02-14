
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xtensa_state ;
typedef size_t xtensa_opcode ;
struct TYPE_12__ {TYPE_5__* iclasses; TYPE_3__* opcodes; } ;
typedef TYPE_4__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
struct TYPE_13__ {TYPE_2__* stateOperands; } ;
typedef TYPE_5__ xtensa_iclass_internal ;
struct TYPE_11__ {int iclass_id; } ;
struct TYPE_9__ {int state; } ;
struct TYPE_10__ {TYPE_1__ u; } ;


 int FUNC_0 (TYPE_4__*,size_t,int ) ;
 int FUNC_1 (TYPE_4__*,size_t,TYPE_5__*,int,int ) ;
 int VAR_0 ;

xtensa_state
FUNC_2 (xtensa_isa VAR_1, xtensa_opcode VAR_2, int VAR_3)
{
  xtensa_isa_internal *VAR_4 = (xtensa_isa_internal *) VAR_1;
  xtensa_iclass_internal *VAR_5;
  int VAR_6;

  FUNC_0 (VAR_4, VAR_2, VAR_0);
  VAR_6 = VAR_4->opcodes[VAR_2].iclass_id;
  VAR_5 = &VAR_4->iclasses[VAR_6];
  FUNC_1 (VAR_4, VAR_2, VAR_5, VAR_3, VAR_0);
  return VAR_5->stateOperands[VAR_3].u.state;
}

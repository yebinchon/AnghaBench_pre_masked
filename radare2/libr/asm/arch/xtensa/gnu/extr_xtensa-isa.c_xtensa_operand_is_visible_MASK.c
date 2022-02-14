
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int flags; } ;
typedef TYPE_4__ xtensa_operand_internal ;
typedef size_t xtensa_opcode ;
struct TYPE_14__ {TYPE_4__* operands; TYPE_6__* iclasses; TYPE_1__* opcodes; } ;
typedef TYPE_5__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
struct TYPE_15__ {TYPE_3__* operands; } ;
typedef TYPE_6__ xtensa_iclass_internal ;
struct TYPE_11__ {int operand_id; } ;
struct TYPE_12__ {char inout; TYPE_2__ u; } ;
struct TYPE_10__ {int iclass_id; } ;


 int FUNC_0 (TYPE_5__*,size_t,int ) ;
 int FUNC_1 (TYPE_5__*,size_t,TYPE_6__*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_2 (xtensa_isa VAR_2, xtensa_opcode VAR_3, int VAR_4)
{
  xtensa_isa_internal *VAR_5 = (xtensa_isa_internal *) VAR_2;
  xtensa_iclass_internal *VAR_6;
  int VAR_7, VAR_8;
  xtensa_operand_internal *VAR_9;

  FUNC_0 (VAR_5, VAR_3, VAR_1);
  VAR_7 = VAR_5->opcodes[VAR_3].iclass_id;
  VAR_6 = &VAR_5->iclasses[VAR_7];
  FUNC_1 (VAR_5, VAR_3, VAR_6, VAR_4, VAR_1);


  if (VAR_6->operands[VAR_4].inout == 's') {
   return 0;
  }

  VAR_8 = VAR_6->operands[VAR_4].u.operand_id;
  VAR_9 = &VAR_5->operands[VAR_8];

  if ((VAR_9->flags & VAR_0) == 0) {
   return 1;
  }
  return 0;
}

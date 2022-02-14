
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xtensa_operand_internal ;
typedef size_t xtensa_opcode ;
struct TYPE_13__ {int * operands; TYPE_5__* iclasses; TYPE_3__* opcodes; } ;
typedef TYPE_4__ xtensa_isa_internal ;
struct TYPE_14__ {TYPE_2__* operands; } ;
typedef TYPE_5__ xtensa_iclass_internal ;
struct TYPE_12__ {int iclass_id; } ;
struct TYPE_10__ {int operand_id; } ;
struct TYPE_11__ {TYPE_1__ u; } ;


 int FUNC_0 (TYPE_4__*,size_t,int *) ;
 int FUNC_1 (TYPE_4__*,size_t,TYPE_5__*,int,int *) ;

__attribute__((used)) static xtensa_operand_internal *
FUNC_2 (xtensa_isa_internal *VAR_0, xtensa_opcode VAR_1, int VAR_2)
{
  xtensa_iclass_internal *VAR_3;
  int VAR_4, VAR_5;

  FUNC_0 (VAR_0, VAR_1, ((void*)0));
  VAR_4 = VAR_0->opcodes[VAR_1].iclass_id;
  VAR_3 = &VAR_0->iclasses[VAR_4];
  FUNC_1 (VAR_0, VAR_1, VAR_3, VAR_2, ((void*)0));
  VAR_5 = VAR_3->operands[VAR_2].u.operand_id;
  return &VAR_0->operands[VAR_5];
}

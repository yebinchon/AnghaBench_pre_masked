
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t xtensa_opcode ;
struct TYPE_7__ {TYPE_2__* iclasses; TYPE_1__* opcodes; } ;
typedef TYPE_3__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
struct TYPE_6__ {int num_interfaceOperands; } ;
struct TYPE_5__ {int iclass_id; } ;


 int FUNC_0 (TYPE_3__*,size_t,int ) ;
 int VAR_0 ;

int
FUNC_1 (xtensa_isa VAR_1, xtensa_opcode VAR_2)
{
  xtensa_isa_internal *VAR_3 = (xtensa_isa_internal *) VAR_1;
  int VAR_4;

  FUNC_0 (VAR_3, VAR_2, VAR_0);
  VAR_4 = VAR_3->opcodes[VAR_2].iclass_id;
  return VAR_3->iclasses[VAR_4].num_interfaceOperands;
}

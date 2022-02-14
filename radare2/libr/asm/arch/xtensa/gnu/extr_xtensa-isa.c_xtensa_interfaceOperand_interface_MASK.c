
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t xtensa_opcode ;
struct TYPE_8__ {TYPE_3__* iclasses; TYPE_1__* opcodes; } ;
typedef TYPE_2__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
typedef int xtensa_interface ;
struct TYPE_9__ {int * interfaceOperands; } ;
typedef TYPE_3__ xtensa_iclass_internal ;
struct TYPE_7__ {int iclass_id; } ;


 int FUNC_0 (TYPE_2__*,size_t,TYPE_3__*,int,int ) ;
 int FUNC_1 (TYPE_2__*,size_t,int ) ;
 int VAR_0 ;

xtensa_interface
FUNC_2 (xtensa_isa VAR_1, xtensa_opcode VAR_2,
       int VAR_3)
{
  xtensa_isa_internal *VAR_4 = (xtensa_isa_internal *) VAR_1;
  xtensa_iclass_internal *VAR_5;
  int VAR_6;

  FUNC_1 (VAR_4, VAR_2, VAR_0);
  VAR_6 = VAR_4->opcodes[VAR_2].iclass_id;
  VAR_5 = &VAR_4->iclasses[VAR_6];
  FUNC_0 (VAR_4, VAR_2, VAR_5, VAR_3, VAR_0);
  return VAR_5->interfaceOperands[VAR_3];
}

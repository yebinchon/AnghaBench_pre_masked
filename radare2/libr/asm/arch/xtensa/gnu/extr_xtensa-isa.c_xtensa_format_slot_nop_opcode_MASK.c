
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xtensa_opcode ;
struct TYPE_8__ {TYPE_2__* slots; TYPE_1__* formats; } ;
typedef TYPE_3__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
typedef size_t xtensa_format ;
struct TYPE_7__ {int nop_name; } ;
struct TYPE_6__ {int* slot_id; } ;


 int FUNC_0 (TYPE_3__*,size_t,int ) ;
 int FUNC_1 (TYPE_3__*,size_t,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,int ) ;

xtensa_opcode
FUNC_3 (xtensa_isa VAR_1, xtensa_format VAR_2, int VAR_3)
{
  xtensa_isa_internal *VAR_4 = (xtensa_isa_internal *) VAR_1;
  int VAR_5;

  FUNC_0 (VAR_4, VAR_2, VAR_0);
  FUNC_1 (VAR_4, VAR_2, VAR_3, VAR_0);

  VAR_5 = VAR_4->formats[VAR_2].slot_id[VAR_3];
  return FUNC_2 (VAR_1, VAR_4->slots[VAR_5].nop_name);
}

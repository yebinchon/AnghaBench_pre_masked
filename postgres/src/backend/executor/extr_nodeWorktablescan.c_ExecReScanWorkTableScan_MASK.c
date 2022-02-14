
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ps_ResultTupleSlot; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;
struct TYPE_8__ {TYPE_2__* rustate; TYPE_4__ ss; } ;
typedef TYPE_3__ WorkTableScanState ;
struct TYPE_7__ {int working_table; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(WorkTableScanState *VAR_0)
{
 if (VAR_0->ss.ps.ps_ResultTupleSlot)
  FUNC_0(VAR_0->ss.ps.ps_ResultTupleSlot);

 FUNC_1(&VAR_0->ss);


 if (VAR_0->rustate)
  FUNC_2(VAR_0->rustate->working_table);
}

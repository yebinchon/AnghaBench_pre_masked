
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ps_ResultTupleSlot; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;
struct TYPE_6__ {int curr_idx; TYPE_3__ ss; } ;
typedef TYPE_2__ ValuesScanState ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2(ValuesScanState *VAR_0)
{
 if (VAR_0->ss.ps.ps_ResultTupleSlot)
  FUNC_0(VAR_0->ss.ps.ps_ResultTupleSlot);

 FUNC_1(&VAR_0->ss);

 VAR_0->curr_idx = -1;
}

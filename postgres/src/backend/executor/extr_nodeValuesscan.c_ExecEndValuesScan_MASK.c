
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ps_ResultTupleSlot; int ps_ExprContext; } ;
struct TYPE_5__ {scalar_t__ ss_ScanTupleSlot; TYPE_3__ ps; } ;
struct TYPE_6__ {TYPE_1__ ss; int rowcontext; } ;
typedef TYPE_2__ ValuesScanState ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2(ValuesScanState *VAR_0)
{



 FUNC_1(&VAR_0->ss.ps);
 VAR_0->ss.ps.ps_ExprContext = VAR_0->rowcontext;
 FUNC_1(&VAR_0->ss.ps);




 if (VAR_0->ss.ps.ps_ResultTupleSlot)
  FUNC_0(VAR_0->ss.ps.ps_ResultTupleSlot);
 FUNC_0(VAR_0->ss.ss_ScanTupleSlot);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ ps_ResultTupleSlot; scalar_t__ plan; } ;
struct TYPE_13__ {scalar_t__ operation; } ;
struct TYPE_11__ {scalar_t__ ss_ScanTupleSlot; TYPE_8__ ps; } ;
struct TYPE_12__ {TYPE_2__ ss; TYPE_1__* fdwroutine; } ;
struct TYPE_10__ {int (* EndForeignScan ) (TYPE_3__*) ;int (* EndDirectModify ) (TYPE_3__*) ;} ;
typedef TYPE_3__ ForeignScanState ;
typedef TYPE_4__ ForeignScan ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_8__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

void
FUNC_6(ForeignScanState *VAR_1)
{
 ForeignScan *VAR_2 = (ForeignScan *) VAR_1->ss.ps.plan;


 if (VAR_2->operation != VAR_0)
  VAR_1->fdwroutine->EndDirectModify(VAR_1);
 else
  VAR_1->fdwroutine->EndForeignScan(VAR_1);


 if (FUNC_3(VAR_1))
  FUNC_1(FUNC_3(VAR_1));


 FUNC_2(&VAR_1->ss.ps);


 if (VAR_1->ss.ps.ps_ResultTupleSlot)
  FUNC_0(VAR_1->ss.ps.ps_ResultTupleSlot);
 FUNC_0(VAR_1->ss.ss_ScanTupleSlot);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int ss; TYPE_1__* fdwroutine; } ;
struct TYPE_10__ {int * chgParam; } ;
struct TYPE_9__ {int (* ReScanForeignScan ) (TYPE_3__*) ;} ;
typedef TYPE_2__ PlanState ;
typedef TYPE_3__ ForeignScanState ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

void
FUNC_4(ForeignScanState *VAR_0)
{
 PlanState *VAR_1 = FUNC_2(VAR_0);

 VAR_0->fdwroutine->ReScanForeignScan(VAR_0);






 if (VAR_1 != ((void*)0) && VAR_1->chgParam == ((void*)0))
  FUNC_0(VAR_1);

 FUNC_1(&VAR_0->ss);
}

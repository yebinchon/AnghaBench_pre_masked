
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_14__ {int * ecxt_scantuple; } ;
struct TYPE_13__ {int (* RecheckForeignScan ) (TYPE_3__*,int *) ;} ;
struct TYPE_10__ {TYPE_5__* ps_ExprContext; } ;
struct TYPE_11__ {TYPE_1__ ps; } ;
struct TYPE_12__ {int fdw_recheck_quals; TYPE_2__ ss; TYPE_4__* fdwroutine; } ;
typedef TYPE_3__ ForeignScanState ;
typedef TYPE_4__ FdwRoutine ;
typedef TYPE_5__ ExprContext ;


 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static bool
FUNC_3(ForeignScanState *VAR_0, TupleTableSlot *VAR_1)
{
 FdwRoutine *VAR_2 = VAR_0->fdwroutine;
 ExprContext *VAR_3;




 VAR_3 = VAR_0->ss.ps.ps_ExprContext;


 VAR_3->ecxt_scantuple = VAR_1;

 FUNC_1(VAR_3);
 if (VAR_2->RecheckForeignScan &&
  !VAR_2->RecheckForeignScan(VAR_0, VAR_1))
  return 0;

 return FUNC_0(VAR_0->fdw_recheck_quals, VAR_3);
}

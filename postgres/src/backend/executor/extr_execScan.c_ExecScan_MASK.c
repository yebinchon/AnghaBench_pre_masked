
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_16__ {int * ecxt_scantuple; } ;
struct TYPE_12__ {int resultslot; } ;
struct TYPE_15__ {TYPE_1__ pi_state; } ;
struct TYPE_13__ {TYPE_5__* ps_ExprContext; TYPE_4__* ps_ProjInfo; int * qual; } ;
struct TYPE_14__ {TYPE_2__ ps; } ;
typedef TYPE_3__ ScanState ;
typedef TYPE_4__ ProjectionInfo ;
typedef int ExprState ;
typedef TYPE_5__ ExprContext ;
typedef int ExecScanRecheckMtd ;
typedef int ExecScanAccessMtd ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_5__*) ;
 int * FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (int *) ;

TupleTableSlot *
FUNC_7(ScanState *VAR_0,
   ExecScanAccessMtd VAR_1,
   ExecScanRecheckMtd VAR_2)
{
 ExprContext *VAR_3;
 ExprState *VAR_4;
 ProjectionInfo *VAR_5;




 VAR_4 = VAR_0->ps.qual;
 VAR_5 = VAR_0->ps.ps_ProjInfo;
 VAR_3 = VAR_0->ps.ps_ExprContext;







 if (!VAR_4 && !VAR_5)
 {
  FUNC_5(VAR_3);
  return FUNC_3(VAR_0, VAR_1, VAR_2);
 }





 FUNC_5(VAR_3);





 for (;;)
 {
  TupleTableSlot *VAR_6;

  VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2);







  if (FUNC_6(VAR_6))
  {
   if (VAR_5)
    return FUNC_0(VAR_5->pi_state.resultslot);
   else
    return VAR_6;
  }




  VAR_3->ecxt_scantuple = VAR_6;
  if (VAR_4 == ((void*)0) || FUNC_2(VAR_4, VAR_3))
  {



   if (VAR_5)
   {




    return FUNC_1(VAR_5);
   }
   else
   {



    return VAR_6;
   }
  }
  else
   FUNC_4(VAR_0, 1);




  FUNC_5(VAR_3);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* WindowObject ;
struct TYPE_9__ {TYPE_5__* ps_ExprContext; } ;
struct TYPE_10__ {int ss_ScanTupleSlot; TYPE_1__ ps; } ;
struct TYPE_12__ {TYPE_2__ ss; } ;
typedef TYPE_4__ WindowAggState ;
struct TYPE_13__ {int ecxt_outertuple; } ;
struct TYPE_11__ {int argstates; TYPE_4__* winstate; } ;
typedef int ExprState ;
typedef TYPE_5__ ExprContext ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_5__*,int*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int) ;

Datum
FUNC_4(WindowObject VAR_0, int VAR_1, bool *VAR_2)
{
 WindowAggState *VAR_3;
 ExprContext *VAR_4;

 FUNC_0(FUNC_2(VAR_0));
 VAR_3 = VAR_0->winstate;

 VAR_4 = VAR_3->ss.ps.ps_ExprContext;

 VAR_4->ecxt_outertuple = VAR_3->ss.ss_ScanTupleSlot;
 return FUNC_1((ExprState *) FUNC_3(VAR_0->argstates, VAR_1),
      VAR_4, VAR_2);
}

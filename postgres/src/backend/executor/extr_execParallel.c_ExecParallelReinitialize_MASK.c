
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int toc; } ;
struct TYPE_17__ {int * es_query_dsa; } ;
struct TYPE_16__ {int param_exec; } ;
struct TYPE_15__ {int finished; TYPE_7__* pcxt; int * area; int param_exec; int * reader; int tqueue; } ;
struct TYPE_14__ {TYPE_4__* state; } ;
typedef TYPE_1__ PlanState ;
typedef TYPE_2__ ParallelExecutorInfo ;
typedef TYPE_3__ FixedParallelExecutorState ;
typedef TYPE_4__ EState ;
typedef int Bitmapset ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_4__*,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 TYPE_3__* FUNC_10 (int ,int ,int) ;

void
FUNC_11(PlanState *VAR_2,
       ParallelExecutorInfo *VAR_3,
       Bitmapset *VAR_4)
{
 EState *VAR_5 = VAR_2->state;
 FixedParallelExecutorState *VAR_6;


 FUNC_0(VAR_3->finished);






 FUNC_4(VAR_4, FUNC_5(VAR_5));

 FUNC_6(VAR_3->pcxt);
 VAR_3->tqueue = FUNC_3(VAR_3->pcxt, 1);
 VAR_3->reader = ((void*)0);
 VAR_3->finished = 0;

 VAR_6 = FUNC_10(VAR_3->pcxt->toc, VAR_1, 0);


 if (FUNC_1(VAR_6->param_exec))
 {
  FUNC_9(VAR_3->area, VAR_6->param_exec);
  VAR_6->param_exec = VAR_0;
 }


 if (!FUNC_8(VAR_4))
 {
  VAR_3->param_exec = FUNC_7(VAR_5, VAR_4,
               VAR_3->area);
  VAR_6->param_exec = VAR_3->param_exec;
 }


 VAR_5->es_query_dsa = VAR_3->area;
 FUNC_2(VAR_2, VAR_3->pcxt);
 VAR_5->es_query_dsa = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_8__ {TYPE_6__* qd; scalar_t__ lazyEval; } ;
typedef TYPE_2__ execution_state ;
struct TYPE_10__ {scalar_t__ operation; TYPE_1__* estate; int dest; int queryEnv; int params; int plannedstmt; } ;
struct TYPE_9__ {int returnsSet; int src; } ;
struct TYPE_7__ {scalar_t__ es_processed; } ;
typedef TYPE_3__* SQLFunctionCachePtr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static bool
FUNC_2(execution_state *VAR_3, SQLFunctionCachePtr VAR_4)
{
 bool VAR_5;

 if (VAR_3->qd->operation == VAR_0)
 {
  FUNC_1(VAR_3->qd->plannedstmt,
        VAR_4->src,
        VAR_2,
        VAR_3->qd->params,
        VAR_3->qd->queryEnv,
        VAR_3->qd->dest,
        ((void*)0));
  VAR_5 = 1;
 }
 else
 {

  uint64 VAR_6 = (VAR_3->lazyEval) ? 1 : 0;

  FUNC_0(VAR_3->qd, VAR_1, VAR_6, !VAR_4->returnsSet || !VAR_3->lazyEval);





  VAR_5 = (VAR_6 == 0 || VAR_3->qd->estate->es_processed == 0);
 }

 return VAR_5;
}

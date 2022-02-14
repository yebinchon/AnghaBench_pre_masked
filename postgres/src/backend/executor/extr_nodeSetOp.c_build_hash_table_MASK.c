
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_12__ {TYPE_1__* state; TYPE_4__* ps_ExprContext; scalar_t__ plan; } ;
struct TYPE_11__ {int ecxt_per_tuple_memory; } ;
struct TYPE_10__ {scalar_t__ strategy; scalar_t__ numGroups; int dupCollations; int dupColIdx; int numCols; } ;
struct TYPE_9__ {int tableContext; TYPE_7__ ps; int hashfunctions; int eqfuncoids; int hashtable; } ;
struct TYPE_8__ {int es_query_cxt; } ;
typedef TYPE_2__ SetOpState ;
typedef TYPE_3__ SetOp ;
typedef TYPE_4__ ExprContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*,int ,int ,int ,int ,int ,int ,scalar_t__,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(SetOpState *VAR_1)
{
 SetOp *VAR_2 = (SetOp *) VAR_1->ps.plan;
 ExprContext *VAR_3 = VAR_1->ps.ps_ExprContext;
 TupleDesc VAR_4 = FUNC_2(FUNC_3(VAR_1));

 FUNC_0(VAR_2->strategy == VAR_0);
 FUNC_0(VAR_2->numGroups > 0);

 VAR_1->hashtable = FUNC_1(&VAR_1->ps,
               VAR_4,
               VAR_2->numCols,
               VAR_2->dupColIdx,
               VAR_1->eqfuncoids,
               VAR_1->hashfunctions,
               VAR_2->dupCollations,
               VAR_2->numGroups,
               0,
               VAR_1->ps.state->es_query_cxt,
               VAR_1->tableContext,
               VAR_3->ecxt_per_tuple_memory,
               0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_10__ {TYPE_1__* state; scalar_t__ plan; } ;
struct TYPE_9__ {scalar_t__ numCols; scalar_t__ numGroups; int dupCollations; int dupColIdx; } ;
struct TYPE_8__ {int tempContext; int tableContext; TYPE_6__ ps; int hashfunctions; int eqfuncoids; int hashtable; } ;
struct TYPE_7__ {int es_query_cxt; } ;
typedef TYPE_2__ RecursiveUnionState ;
typedef TYPE_3__ RecursiveUnion ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,int ,scalar_t__,int ,int ,int ,int ,scalar_t__,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(RecursiveUnionState *VAR_0)
{
 RecursiveUnion *VAR_1 = (RecursiveUnion *) VAR_0->ps.plan;
 TupleDesc VAR_2 = FUNC_2(FUNC_3(VAR_0));

 FUNC_0(VAR_1->numCols > 0);
 FUNC_0(VAR_1->numGroups > 0);

 VAR_0->hashtable = FUNC_1(&VAR_0->ps,
            VAR_2,
            VAR_1->numCols,
            VAR_1->dupColIdx,
            VAR_0->eqfuncoids,
            VAR_0->hashfunctions,
            VAR_1->dupCollations,
            VAR_1->numGroups,
            0,
            VAR_0->ps.state->es_query_cxt,
            VAR_0->tableContext,
            VAR_0->tempContext,
            0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int * chgParam; } ;
struct TYPE_13__ {scalar_t__ numCols; int wtParam; } ;
struct TYPE_11__ {scalar_t__ plan; } ;
struct TYPE_12__ {int recursing; int intermediate_empty; int intermediate_table; int working_table; int hashtable; scalar_t__ tableContext; TYPE_1__ ps; } ;
typedef TYPE_2__ RecursiveUnionState ;
typedef TYPE_3__ RecursiveUnion ;
typedef TYPE_4__ PlanState ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ) ;
 TYPE_4__* FUNC_4 (TYPE_2__*) ;
 TYPE_4__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(RecursiveUnionState *VAR_0)
{
 PlanState *VAR_1 = FUNC_5(VAR_0);
 PlanState *VAR_2 = FUNC_4(VAR_0);
 RecursiveUnion *VAR_3 = (RecursiveUnion *) VAR_0->ps.plan;





 VAR_2->chgParam = FUNC_3(VAR_2->chgParam, VAR_3->wtParam);






 if (VAR_1->chgParam == ((void*)0))
  FUNC_0(VAR_1);


 if (VAR_0->tableContext)
  FUNC_1(VAR_0->tableContext);


 if (VAR_3->numCols > 0)
  FUNC_2(VAR_0->hashtable);


 VAR_0->recursing = 0;
 VAR_0->intermediate_empty = 1;
 FUNC_6(VAR_0->working_table);
 FUNC_6(VAR_0->intermediate_table);
}

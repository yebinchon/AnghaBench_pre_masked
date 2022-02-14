
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * costs; int aggsplit; int * root; } ;
typedef TYPE_1__ get_agg_clause_costs_context ;
typedef int PlannerInfo ;
typedef int Node ;
typedef int AggSplit ;
typedef int AggClauseCosts ;


 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(PlannerInfo *VAR_0, Node *VAR_1, AggSplit VAR_2,
      AggClauseCosts *VAR_3)
{
 get_agg_clause_costs_context VAR_4;

 VAR_4.root = VAR_0;
 VAR_4.aggsplit = VAR_2;
 VAR_4.costs = VAR_3;
 (void) FUNC_0(VAR_1, &VAR_4);
}

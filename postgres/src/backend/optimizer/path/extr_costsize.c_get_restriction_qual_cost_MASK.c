
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int ppi_clauses; } ;
struct TYPE_9__ {scalar_t__ per_tuple; scalar_t__ startup; } ;
struct TYPE_8__ {TYPE_2__ baserestrictcost; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ QualCost ;
typedef int PlannerInfo ;
typedef TYPE_3__ ParamPathInfo ;


 int FUNC_0 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static void
FUNC_1(PlannerInfo *VAR_0, RelOptInfo *VAR_1,
        ParamPathInfo *VAR_2,
        QualCost *VAR_3)
{
 if (VAR_2)
 {

  FUNC_0(VAR_3, VAR_2->ppi_clauses, VAR_0);

  VAR_3->startup += VAR_1->baserestrictcost.startup;
  VAR_3->per_tuple += VAR_1->baserestrictcost.per_tuple;
 }
 else
  *VAR_3 = VAR_1->baserestrictcost;
}

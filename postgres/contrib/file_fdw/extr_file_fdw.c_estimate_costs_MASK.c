
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int pages; double ntuples; } ;
struct TYPE_6__ {double startup; double per_tuple; } ;
struct TYPE_7__ {TYPE_1__ baserestrictcost; } ;
typedef TYPE_2__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_3__ FileFdwPlanState ;
typedef double Cost ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(PlannerInfo *VAR_2, RelOptInfo *VAR_3,
      FileFdwPlanState *VAR_4,
      Cost *VAR_5, Cost *VAR_6)
{
 BlockNumber VAR_7 = VAR_4->pages;
 double VAR_8 = VAR_4->ntuples;
 Cost VAR_9 = 0;
 Cost VAR_10;
 VAR_9 += VAR_1 * VAR_7;

 *VAR_5 = VAR_3->baserestrictcost.startup;
 VAR_10 = VAR_0 * 10 + VAR_3->baserestrictcost.per_tuple;
 VAR_9 += VAR_10 * VAR_8;
 *VAR_6 = *VAR_5 + VAR_9;
}

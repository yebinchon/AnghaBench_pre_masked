
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rtekind; } ;
struct TYPE_5__ {scalar_t__ relid; int tuples; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void
FUNC_3(PlannerInfo *VAR_1, RelOptInfo *VAR_2)
{

 FUNC_0(VAR_2->relid > 0);
 FUNC_0(FUNC_1(VAR_2->relid, VAR_1)->rtekind == VAR_0);

 VAR_2->tuples = 100;


 FUNC_2(VAR_1, VAR_2);
}

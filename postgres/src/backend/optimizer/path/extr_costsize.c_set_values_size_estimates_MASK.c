
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rtekind; int values_lists; } ;
struct TYPE_6__ {scalar_t__ relid; int tuples; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ RangeTblEntry ;
typedef int PlannerInfo ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;

void
FUNC_4(PlannerInfo *VAR_1, RelOptInfo *VAR_2)
{
 RangeTblEntry *VAR_3;


 FUNC_0(VAR_2->relid > 0);
 VAR_3 = FUNC_2(VAR_2->relid, VAR_1);
 FUNC_0(VAR_3->rtekind == VAR_0);







 VAR_2->tuples = FUNC_1(VAR_3->values_lists);


 FUNC_3(VAR_1, VAR_2);
}

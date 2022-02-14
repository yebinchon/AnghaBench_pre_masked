
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rtekind; scalar_t__ self_reference; } ;
struct TYPE_6__ {scalar_t__ relid; int tuples; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ RangeTblEntry ;
typedef int PlannerInfo ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void
FUNC_3(PlannerInfo *VAR_1, RelOptInfo *VAR_2, double VAR_3)
{
 RangeTblEntry *VAR_4;


 FUNC_0(VAR_2->relid > 0);
 VAR_4 = FUNC_1(VAR_2->relid, VAR_1);
 FUNC_0(VAR_4->rtekind == VAR_0);

 if (VAR_4->self_reference)
 {




  VAR_2->tuples = 10 * VAR_3;
 }
 else
 {

  VAR_2->tuples = VAR_3;
 }


 FUNC_2(VAR_1, VAR_2);
}

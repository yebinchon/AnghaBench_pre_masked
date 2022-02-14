
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int random_state; } ;
struct TYPE_4__ {scalar_t__ join_search_private; } ;
typedef TYPE_1__ PlannerInfo ;
typedef TYPE_2__ GeqoPrivateData ;


 double FUNC_0 (int ) ;

double
FUNC_1(PlannerInfo *VAR_0)
{
 GeqoPrivateData *VAR_1 = (GeqoPrivateData *) VAR_0->join_search_private;

 return FUNC_0(VAR_1->random_state);
}

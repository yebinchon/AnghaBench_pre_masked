
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int seed ;
struct TYPE_5__ {int random_state; } ;
struct TYPE_4__ {scalar_t__ join_search_private; } ;
typedef TYPE_1__ PlannerInfo ;
typedef TYPE_2__ GeqoPrivateData ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,double*,int ) ;
 int FUNC_2 (int ,int ,int) ;

void
FUNC_3(PlannerInfo *VAR_0, double VAR_1)
{
 GeqoPrivateData *VAR_2 = (GeqoPrivateData *) VAR_0->join_search_private;





 FUNC_2(VAR_2->random_state, 0, sizeof(VAR_2->random_state));
 FUNC_1(VAR_2->random_state,
     &VAR_1,
     FUNC_0(sizeof(VAR_2->random_state), sizeof(VAR_1)));
}

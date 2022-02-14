
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int targetlist; } ;
struct TYPE_10__ {scalar_t__ plan_params; scalar_t__ curOuterParams; int processed_tlist; int * curOuterRels; } ;
typedef TYPE_1__ PlannerInfo ;
typedef TYPE_2__ Plan ;
typedef int Path ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (int ,char*) ;

Plan *
FUNC_6(PlannerInfo *VAR_4, Path *VAR_5)
{
 Plan *VAR_6;


 FUNC_0(VAR_4->plan_params == VAR_3);


 VAR_4->curOuterRels = ((void*)0);
 VAR_4->curOuterParams = VAR_3;


 VAR_6 = FUNC_4(VAR_4, VAR_5, VAR_0);
 if (!FUNC_1(VAR_6, VAR_2))
  FUNC_3(VAR_6->targetlist, VAR_4->processed_tlist);
 FUNC_2(VAR_4, VAR_6);


 if (VAR_4->curOuterParams != VAR_3)
  FUNC_5(VAR_1, "failed to assign all NestLoopParams to plan nodes");





 VAR_4->plan_params = VAR_3;

 return VAR_6;
}

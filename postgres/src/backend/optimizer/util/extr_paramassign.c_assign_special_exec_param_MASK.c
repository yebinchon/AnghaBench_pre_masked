
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* glob; } ;
struct TYPE_4__ {int paramExecTypes; } ;
typedef TYPE_2__ PlannerInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(PlannerInfo *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->glob->paramExecTypes);

 VAR_1->glob->paramExecTypes = FUNC_0(VAR_1->glob->paramExecTypes,
            VAR_0);
 return VAR_2;
}

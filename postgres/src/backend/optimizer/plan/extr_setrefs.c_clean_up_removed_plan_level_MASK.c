
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int targetlist; int initPlan; } ;
typedef TYPE_1__ Plan ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static Plan *
FUNC_2(Plan *VAR_0, Plan *VAR_1)
{

 VAR_1->initPlan = FUNC_1(VAR_0->initPlan,
          VAR_1->initPlan);






 FUNC_0(VAR_1->targetlist, VAR_0->targetlist);

 return VAR_1;
}

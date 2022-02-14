
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ancestors; int planstate; } ;
typedef TYPE_1__ deparse_namespace ;
typedef int PlanState ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_2(deparse_namespace *VAR_0, PlanState *VAR_1,
    deparse_namespace *VAR_2)
{

 *VAR_2 = *VAR_0;


 VAR_0->ancestors = FUNC_0(VAR_0->planstate, VAR_0->ancestors);


 FUNC_1(VAR_0, VAR_1);
}

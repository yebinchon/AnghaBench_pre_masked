
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int as_nplans; int ** appendplans; } ;
typedef int PlanState ;
typedef TYPE_1__ AppendState ;


 int FUNC_0 (int *) ;

void
FUNC_1(AppendState *VAR_0)
{
 PlanState **VAR_1;
 int VAR_2;
 int VAR_3;




 VAR_1 = VAR_0->appendplans;
 VAR_2 = VAR_0->as_nplans;




 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_1[VAR_3]);
}

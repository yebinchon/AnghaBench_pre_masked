
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int chgParam; TYPE_1__* plan; } ;
struct TYPE_4__ {int allParam; } ;
typedef TYPE_2__ PlanState ;
typedef int Bitmapset ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void
FUNC_4(PlanState *VAR_0, Bitmapset *VAR_1)
{
 Bitmapset *VAR_2;





 VAR_2 = FUNC_1(VAR_0->plan->allParam, VAR_1);





 if (!FUNC_2(VAR_2))
  VAR_0->chgParam = FUNC_3(VAR_0->chgParam, VAR_2);
 else
  FUNC_0(VAR_2);
}

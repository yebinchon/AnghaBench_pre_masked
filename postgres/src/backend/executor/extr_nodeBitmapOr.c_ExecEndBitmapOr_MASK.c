
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nplans; int ** bitmapplans; } ;
typedef int PlanState ;
typedef TYPE_1__ BitmapOrState ;


 int FUNC_0 (int *) ;

void
FUNC_1(BitmapOrState *VAR_0)
{
 PlanState **VAR_1;
 int VAR_2;
 int VAR_3;




 VAR_1 = VAR_0->bitmapplans;
 VAR_2 = VAR_0->nplans;




 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  if (VAR_1[VAR_3])
   FUNC_0(VAR_1[VAR_3]);
 }
}

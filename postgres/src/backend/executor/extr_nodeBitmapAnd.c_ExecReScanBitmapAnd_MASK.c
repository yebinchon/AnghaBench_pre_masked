
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * chgParam; } ;
struct TYPE_9__ {int nplans; TYPE_1__ ps; TYPE_2__** bitmapplans; } ;
struct TYPE_8__ {int * chgParam; } ;
typedef TYPE_2__ PlanState ;
typedef TYPE_3__ BitmapAndState ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;

void
FUNC_2(BitmapAndState *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nplans; VAR_1++)
 {
  PlanState *VAR_2 = VAR_0->bitmapplans[VAR_1];





  if (VAR_0->ps.chgParam != ((void*)0))
   FUNC_1(VAR_2, VAR_0->ps.chgParam);





  if (VAR_2->chgParam == ((void*)0))
   FUNC_0(VAR_2);
 }
}

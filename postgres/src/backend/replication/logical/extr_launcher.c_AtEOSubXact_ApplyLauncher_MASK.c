
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nestDepth; int workers; struct TYPE_4__* parent; } ;
typedef TYPE_1__ StopWorkersData ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(bool VAR_1, int VAR_2)
{
 StopWorkersData *VAR_3;


 if (VAR_0 == ((void*)0) ||
  VAR_0->nestDepth < VAR_2)
  return;

 FUNC_0(VAR_0->nestDepth == VAR_2);

 VAR_3 = VAR_0->parent;

 if (VAR_1)
 {






  if (!VAR_3 || VAR_3->nestDepth < VAR_2 - 1)
  {
   VAR_0->nestDepth--;
   return;
  }

  VAR_3->workers =
   FUNC_1(VAR_3->workers, VAR_0->workers);
 }
 else
 {




  FUNC_2(VAR_0->workers);
 }





 FUNC_3(VAR_0);
 VAR_0 = VAR_3;
}

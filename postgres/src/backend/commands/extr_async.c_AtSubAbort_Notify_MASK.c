
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nestingLevel; struct TYPE_6__* upper; } ;
typedef TYPE_1__ NotificationList ;
typedef TYPE_1__ ActionList ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(void)
{
 int VAR_2 = FUNC_0();
 while (VAR_0 != ((void*)0) &&
     VAR_0->nestingLevel >= VAR_2)
 {
  ActionList *VAR_3 = VAR_0;

  VAR_0 = VAR_0->upper;
  FUNC_1(VAR_3);
 }

 while (VAR_1 != ((void*)0) &&
     VAR_1->nestingLevel >= VAR_2)
 {
  NotificationList *VAR_4 = VAR_1;

  VAR_1 = VAR_1->upper;
  FUNC_1(VAR_4);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ callback; void* arg; struct TYPE_4__* next; } ;
typedef TYPE_1__ XactCallbackItem ;
typedef scalar_t__ XactCallback ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(XactCallback VAR_1, void *VAR_2)
{
 XactCallbackItem *VAR_3;
 XactCallbackItem *VAR_4;

 VAR_4 = ((void*)0);
 for (VAR_3 = VAR_0; VAR_3; VAR_4 = VAR_3, VAR_3 = VAR_3->next)
 {
  if (VAR_3->callback == VAR_1 && VAR_3->arg == VAR_2)
  {
   if (VAR_4)
    VAR_4->next = VAR_3->next;
   else
    VAR_0 = VAR_3->next;
   FUNC_0(VAR_3);
   break;
  }
 }
}

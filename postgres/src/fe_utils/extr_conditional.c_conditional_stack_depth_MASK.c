
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* head; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ IfStackElem ;
typedef TYPE_2__* ConditionalStack ;



int
FUNC_0(ConditionalStack VAR_0)
{
 if (VAR_0 == ((void*)0))
  return -1;
 else
 {
  IfStackElem *VAR_1 = VAR_0->head;
  int VAR_2 = 0;

  while (VAR_1 != ((void*)0))
  {
   VAR_2++;
   VAR_1 = VAR_1->next;
  }
  return VAR_2;
 }
}

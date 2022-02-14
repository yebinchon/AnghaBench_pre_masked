
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* head; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ IfStackElem ;
typedef TYPE_2__* ConditionalStack ;


 int FUNC_0 (TYPE_1__*) ;

bool
FUNC_1(ConditionalStack VAR_0)
{
 IfStackElem *VAR_1 = VAR_0->head;

 if (!VAR_1)
  return 0;
 VAR_0->head = VAR_0->head->next;
 FUNC_0(VAR_1);
 return 1;
}

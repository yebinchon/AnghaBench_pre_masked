
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* head; } ;
struct TYPE_4__ {scalar_t__ val; struct TYPE_4__* next; } ;
typedef TYPE_1__ SimpleOidListCell ;
typedef TYPE_2__ SimpleOidList ;
typedef scalar_t__ Oid ;



bool
FUNC_0(SimpleOidList *VAR_0, Oid VAR_1)
{
 SimpleOidListCell *VAR_2;

 for (VAR_2 = VAR_0->head; VAR_2; VAR_2 = VAR_2->next)
 {
  if (VAR_2->val == VAR_1)
   return 1;
 }
 return 0;
}

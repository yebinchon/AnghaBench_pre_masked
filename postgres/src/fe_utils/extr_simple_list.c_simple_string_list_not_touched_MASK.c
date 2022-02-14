
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* head; } ;
struct TYPE_4__ {char const* val; int touched; struct TYPE_4__* next; } ;
typedef TYPE_1__ SimpleStringListCell ;
typedef TYPE_2__ SimpleStringList ;



const char *
FUNC_0(SimpleStringList *VAR_0)
{
 SimpleStringListCell *VAR_1;

 for (VAR_1 = VAR_0->head; VAR_1; VAR_1 = VAR_1->next)
 {
  if (!VAR_1->touched)
   return VAR_1->val;
 }
 return ((void*)0);
}

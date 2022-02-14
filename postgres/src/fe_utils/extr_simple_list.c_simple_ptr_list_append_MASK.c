
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* tail; TYPE_1__* head; } ;
struct TYPE_4__ {struct TYPE_4__* next; void* ptr; } ;
typedef TYPE_1__ SimplePtrListCell ;
typedef TYPE_2__ SimplePtrList ;


 scalar_t__ FUNC_0 (int) ;

void
FUNC_1(SimplePtrList *VAR_0, void *VAR_1)
{
 SimplePtrListCell *VAR_2;

 VAR_2 = (SimplePtrListCell *) FUNC_0(sizeof(SimplePtrListCell));
 VAR_2->next = ((void*)0);
 VAR_2->ptr = VAR_1;

 if (VAR_0->tail)
  VAR_0->tail->next = VAR_2;
 else
  VAR_0->head = VAR_2;
 VAR_0->tail = VAR_2;
}

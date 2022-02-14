
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* head; TYPE_2__* tail; } ;
typedef TYPE_1__ fz_store ;
struct TYPE_6__ {struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_2__ fz_item ;



__attribute__((used)) static void
FUNC_0(fz_store *VAR_0, fz_item *VAR_1)
{
 if (VAR_1->next != VAR_1)
 {

  if (VAR_1->next)
   VAR_1->next->prev = VAR_1->prev;
  else
   VAR_0->tail = VAR_1->prev;
  if (VAR_1->prev)
   VAR_1->prev->next = VAR_1->next;
  else
   VAR_0->head = VAR_1->next;
 }

 VAR_1->next = VAR_0->head;
 if (VAR_1->next)
  VAR_1->next->prev = VAR_1;
 else
  VAR_0->tail = VAR_1;
 VAR_0->head = VAR_1;
 VAR_1->prev = ((void*)0);
}

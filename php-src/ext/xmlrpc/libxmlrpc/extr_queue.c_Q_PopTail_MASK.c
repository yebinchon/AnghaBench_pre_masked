
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; int sorted; TYPE_2__* tail; TYPE_2__* cursor; TYPE_2__* head; } ;
typedef TYPE_1__ queue ;
struct TYPE_7__ {int * next; int * prev; void* data; } ;
typedef TYPE_2__ node ;
typedef int datanode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;

void *FUNC_2(queue *VAR_1)
{
   datanode *VAR_2;
   void *VAR_3;

   if(FUNC_0(VAR_1))
      return ((void*)0);

   VAR_3 = VAR_1->tail->data;
   VAR_2 = VAR_1->tail->prev;
   FUNC_1(VAR_1->tail);
   VAR_1->size--;

   if(VAR_1->size == 0)
      VAR_1->head = VAR_1->tail = VAR_1->cursor = ((void*)0);
   else {
      VAR_1->tail = (node *)VAR_2;
      VAR_1->tail->next = ((void*)0);
      VAR_1->cursor = VAR_1->tail;
   }

   VAR_1->sorted = VAR_0;

   return VAR_3;
}

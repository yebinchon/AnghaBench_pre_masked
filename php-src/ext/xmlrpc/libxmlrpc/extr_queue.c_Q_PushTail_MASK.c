
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; int sorted; TYPE_2__* tail; TYPE_2__* cursor; TYPE_2__* head; } ;
typedef TYPE_1__ queue ;
struct TYPE_5__ {void* data; struct TYPE_5__* next; int * prev; } ;
typedef TYPE_2__ node ;
typedef int datanode ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;

int FUNC_1(queue *VAR_2, void *VAR_3)
{
   if(VAR_2 && VAR_3) {
      node *VAR_4;
      datanode *VAR_5;

      VAR_5 = FUNC_0(sizeof(datanode));
      if(VAR_5 == ((void*)0))
         return VAR_0;

      VAR_4 = VAR_2->tail;
      VAR_2->tail = (node *)VAR_5;

      if(VAR_2->size == 0) {
         VAR_2->tail->prev = ((void*)0);
         VAR_2->head = VAR_2->tail;
      }
      else {
         VAR_2->tail->prev = (datanode *)VAR_4;
         VAR_4->next = VAR_2->tail;
      }

      VAR_2->tail->next = ((void*)0);

      VAR_2->tail->data = VAR_3;
      VAR_2->cursor = VAR_2->tail;
      VAR_2->size++;

      VAR_2->sorted = VAR_0;

      return VAR_1;
   }
   return VAR_0;
}

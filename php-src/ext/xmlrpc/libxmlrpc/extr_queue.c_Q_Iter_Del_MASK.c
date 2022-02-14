
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sorted; int size; TYPE_2__* cursor; scalar_t__ tail; scalar_t__ head; } ;
typedef TYPE_1__ queue ;
typedef int * q_iter ;
struct TYPE_8__ {struct TYPE_8__* prev; struct TYPE_8__* next; void* data; } ;
typedef TYPE_2__ node ;
typedef TYPE_2__ datanode ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void *FUNC_3(queue *VAR_1, q_iter VAR_2)
{
   void *VAR_3;
   datanode *VAR_4, *VAR_5;

   if(!VAR_1)
      return ((void*)0);

   if(VAR_2 == ((void*)0))
      return ((void*)0);

   if(VAR_2 == (q_iter)VAR_1->head)
      return FUNC_0(VAR_1);

   if(VAR_2 == (q_iter)VAR_1->tail)
      return FUNC_1(VAR_1);

   VAR_4 = ((node*)VAR_2)->next;
   VAR_5 = ((node*)VAR_2)->prev;
   VAR_3 = ((node*)VAR_2)->data;

   FUNC_2(VAR_2);

   if(VAR_5) {
      VAR_5->next = VAR_4;
   }
   if (VAR_1->cursor == (node*)VAR_2) {
      if (VAR_5) {
         VAR_1->cursor = VAR_5;
      } else {
         VAR_1->cursor = VAR_4;
      }
   }


   if (VAR_4 != ((void*)0)) {
 VAR_4->prev = VAR_5;
   }

   VAR_1->size--;

   VAR_1->sorted = VAR_0;

   return VAR_3;
}

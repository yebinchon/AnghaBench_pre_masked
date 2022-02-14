
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sorted; scalar_t__ size; int head; int cursor; int * tail; } ;
typedef TYPE_1__ queue ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(queue *VAR_2)
{
   if(VAR_2) {
      VAR_2->head = *(VAR_2->tail = ((void*)0));
      VAR_2->cursor = VAR_2->head;
      VAR_2->size = 0;
      VAR_2->sorted = VAR_0;
   }

   return VAR_1;
}

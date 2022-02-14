
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ spl_ptr_llist_element ;
struct TYPE_6__ {TYPE_1__* head; TYPE_1__* tail; } ;
typedef TYPE_2__ spl_ptr_llist ;



__attribute__((used)) static spl_ptr_llist_element *FUNC_0(spl_ptr_llist *VAR_0, zend_long VAR_1, int VAR_2)
{

 spl_ptr_llist_element *VAR_3;
 int VAR_4 = 0;

 if (VAR_2) {
  VAR_3 = VAR_0->tail;
 } else {
  VAR_3 = VAR_0->head;
 }

 while (VAR_3 && VAR_4 < VAR_1) {
  VAR_4++;
  if (VAR_2) {
   VAR_3 = VAR_3->prev;
  } else {
   VAR_3 = VAR_3->next;
  }
 }

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int data; struct TYPE_6__* next; int * prev; } ;
typedef TYPE_1__ spl_ptr_llist_element ;
struct TYPE_7__ {int (* dtor ) (TYPE_1__*) ;int count; TYPE_1__* head; int * tail; } ;
typedef TYPE_2__ spl_ptr_llist ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(spl_ptr_llist *VAR_0, zval *VAR_1)
{
 spl_ptr_llist_element *VAR_2 = VAR_0->head;

 if (VAR_2 == ((void*)0)) {
  FUNC_2(VAR_1);
  return;
 }

 if (VAR_2->next) {
  VAR_2->next->prev = ((void*)0);
 } else {
  VAR_0->tail = ((void*)0);
 }

 VAR_0->head = VAR_2->next;
 VAR_0->count--;
 FUNC_1(VAR_1, &VAR_2->data);

 if (VAR_0->dtor) {
  VAR_0->dtor(VAR_2);
 }
 FUNC_2(&VAR_2->data);

 FUNC_0(VAR_2);
}

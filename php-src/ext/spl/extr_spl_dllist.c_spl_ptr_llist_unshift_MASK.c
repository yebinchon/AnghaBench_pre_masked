
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int rc; struct TYPE_6__* prev; int data; struct TYPE_6__* next; } ;
typedef TYPE_1__ spl_ptr_llist_element ;
struct TYPE_7__ {int (* ctor ) (TYPE_1__*) ;int count; TYPE_1__* head; TYPE_1__* tail; } ;
typedef TYPE_2__ spl_ptr_llist ;


 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(spl_ptr_llist *VAR_0, zval *VAR_1)
{
 spl_ptr_llist_element *VAR_2 = FUNC_1(sizeof(spl_ptr_llist_element));

 VAR_2->rc = 1;
 VAR_2->prev = ((void*)0);
 VAR_2->next = VAR_0->head;
 FUNC_0(&VAR_2->data, VAR_1);

 if (VAR_0->head) {
  VAR_0->head->prev = VAR_2;
 } else {
  VAR_0->tail = VAR_2;
 }

 VAR_0->head = VAR_2;
 VAR_0->count++;

 if (VAR_0->ctor) {
  VAR_0->ctor(VAR_2);
 }
}

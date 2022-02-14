
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; struct TYPE_6__* next; } ;
typedef TYPE_1__ spl_ptr_llist_element ;
struct TYPE_7__ {TYPE_1__* head; } ;
typedef TYPE_2__ spl_ptr_llist ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_1(spl_ptr_llist *VAR_0, spl_ptr_llist *VAR_1)
{
 spl_ptr_llist_element *VAR_2 = VAR_0->head, *VAR_3;


 while (VAR_2) {
  VAR_3 = VAR_2->next;







  FUNC_0(VAR_1, &VAR_2->data);
  VAR_2 = VAR_3;
 }

}

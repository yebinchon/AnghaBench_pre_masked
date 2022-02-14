
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_1__ spl_ptr_llist_element ;
typedef int (* spl_ptr_llist_dtor_func ) (TYPE_1__*) ;
struct TYPE_8__ {int (* dtor ) (TYPE_1__*) ;TYPE_1__* head; } ;
typedef TYPE_3__ spl_ptr_llist ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(spl_ptr_llist *VAR_0)
{
 spl_ptr_llist_element *VAR_1 = VAR_0->head, *VAR_2;
 spl_ptr_llist_dtor_func VAR_3 = VAR_0->dtor;

 while (VAR_1) {
  VAR_2 = VAR_1->next;
  if (VAR_3) {
   VAR_3(VAR_1);
  }
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }

 FUNC_1(VAR_0);
}

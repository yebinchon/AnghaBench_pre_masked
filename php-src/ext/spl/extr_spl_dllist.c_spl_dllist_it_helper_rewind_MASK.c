
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spl_ptr_llist_element ;
struct TYPE_3__ {int count; int * head; int * tail; } ;
typedef TYPE_1__ spl_ptr_llist ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(spl_ptr_llist_element **VAR_1, int *VAR_2, spl_ptr_llist *VAR_3, int VAR_4)
{
 FUNC_1(*VAR_1);

 if (VAR_4 & VAR_0) {
  *VAR_2 = VAR_3->count-1;
  *VAR_1 = VAR_3->tail;
 } else {
  *VAR_2 = 0;
  *VAR_1 = VAR_3->head;
 }

 FUNC_0(*VAR_1);
}

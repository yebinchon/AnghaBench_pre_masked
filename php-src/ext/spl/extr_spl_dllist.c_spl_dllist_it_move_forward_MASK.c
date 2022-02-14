
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct TYPE_8__ {int flags; int llist; } ;
typedef TYPE_2__ spl_dllist_object ;
struct TYPE_9__ {int traverse_position; int traverse_pointer; } ;
typedef TYPE_3__ spl_dllist_it ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(zend_object_iterator *VAR_0)
{
 spl_dllist_it *VAR_1 = (spl_dllist_it *)VAR_0;
 spl_dllist_object *VAR_2 = FUNC_0(&VAR_0->data);

 FUNC_2(VAR_0);

 FUNC_1(&VAR_1->traverse_pointer, &VAR_1->traverse_position, VAR_2->llist, VAR_2->flags);
}

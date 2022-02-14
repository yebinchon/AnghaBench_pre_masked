
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_list_item {struct nn_list_item* next; TYPE_1__* prev; } ;
struct nn_list {TYPE_1__* last; struct nn_list_item* first; } ;
struct TYPE_2__ {struct nn_list_item* next; } ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nn_list_item*) ;

struct nn_list_item *FUNC_2 (struct nn_list *VAR_1,
    struct nn_list_item *VAR_2)
{
    struct nn_list_item *VAR_3;

    FUNC_0 (FUNC_1 (VAR_2));

    if (VAR_2->prev)
        VAR_2->prev->next = VAR_2->next;
    else
        VAR_1->first = VAR_2->next;
    if (VAR_2->next)
        VAR_2->next->prev = VAR_2->prev;
    else
        VAR_1->last = VAR_2->prev;

    VAR_3 = VAR_2->next;

    VAR_2->prev = VAR_0;
    VAR_2->next = VAR_0;

    return VAR_3;
}

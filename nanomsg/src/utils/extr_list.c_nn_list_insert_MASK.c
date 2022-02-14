
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_list_item {struct nn_list_item* prev; struct nn_list_item* next; } ;
struct nn_list {struct nn_list_item* last; struct nn_list_item* first; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nn_list_item*) ;

void FUNC_2 (struct nn_list *VAR_0, struct nn_list_item *VAR_1,
    struct nn_list_item *VAR_2)
{
    FUNC_0 (!FUNC_1 (VAR_1));

    VAR_1->prev = VAR_2 ? VAR_2->prev : VAR_0->last;
    VAR_1->next = VAR_2;
    if (VAR_1->prev)
        VAR_1->prev->next = VAR_1;
    if (VAR_1->next)
        VAR_1->next->prev = VAR_1;
    if (!VAR_0->first || VAR_0->first == VAR_2)
        VAR_0->first = VAR_1;
    if (!VAR_2)
        VAR_0->last = VAR_1;
}

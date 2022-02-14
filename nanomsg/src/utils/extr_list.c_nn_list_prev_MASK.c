
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_list_item {scalar_t__ prev; } ;
struct nn_list {struct nn_list_item* last; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

struct nn_list_item *FUNC_1 (struct nn_list *VAR_1,
    struct nn_list_item *VAR_2)
{
    if (!VAR_2)
        return VAR_1->last;
    FUNC_0 (VAR_2->prev != VAR_0);
    return VAR_2->prev;
}

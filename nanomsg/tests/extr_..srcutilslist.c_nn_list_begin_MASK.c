
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_list_item {int dummy; } ;
struct nn_list {struct nn_list_item* first; } ;



struct nn_list_item *FUNC_0 (struct nn_list *VAR_0)
{
    return VAR_0->first;
}

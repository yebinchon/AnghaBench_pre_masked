
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_queue_item {scalar_t__ next; } ;


 scalar_t__ VAR_0 ;

int FUNC_0 (struct nn_queue_item *VAR_1)
{
    return VAR_1->next == VAR_0 ? 0 : 1;
}

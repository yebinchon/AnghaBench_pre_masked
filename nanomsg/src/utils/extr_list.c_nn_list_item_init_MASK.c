
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_list_item {void* next; void* prev; } ;


 void* VAR_0 ;

void FUNC_0 (struct nn_list_item *VAR_1)
{
    VAR_1->prev = VAR_0;
    VAR_1->next = VAR_0;
}

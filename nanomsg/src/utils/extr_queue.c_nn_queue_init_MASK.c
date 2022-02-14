
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_queue {int * tail; int * head; } ;



void FUNC_0 (struct nn_queue *VAR_0)
{
    VAR_0->head = ((void*)0);
    VAR_0->tail = ((void*)0);
}

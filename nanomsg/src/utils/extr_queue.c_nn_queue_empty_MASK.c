
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_queue {scalar_t__ head; } ;



int FUNC_0 (struct nn_queue *VAR_0)
{
    return VAR_0->head ? 0 : 1;
}

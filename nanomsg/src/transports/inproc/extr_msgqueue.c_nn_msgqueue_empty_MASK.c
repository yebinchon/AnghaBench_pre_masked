
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_msgqueue {scalar_t__ count; } ;



int FUNC_0 (struct nn_msgqueue *VAR_0)
{
    return VAR_0->count == 0 ? 1 : 0;
}

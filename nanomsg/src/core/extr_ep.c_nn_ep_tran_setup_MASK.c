
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ep_ops {int dummy; } ;
struct nn_ep {void* tran; struct nn_ep_ops ops; } ;



void FUNC_0 (struct nn_ep *VAR_0, const struct nn_ep_ops *VAR_1,
    void *VAR_2)
{
    VAR_0->ops = *VAR_1;
    VAR_0->tran = VAR_2;
}

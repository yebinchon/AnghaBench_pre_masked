
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ctx {int dummy; } ;
struct nn_sock {struct nn_ctx ctx; } ;



struct nn_ctx *FUNC_0 (struct nn_sock *VAR_0)
{
    return &VAR_0->ctx;
}

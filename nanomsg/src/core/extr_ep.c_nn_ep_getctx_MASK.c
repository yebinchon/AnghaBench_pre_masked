
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ep {int sock; } ;
struct nn_ctx {int dummy; } ;


 struct nn_ctx* FUNC_0 (int ) ;

struct nn_ctx *FUNC_1 (struct nn_ep *VAR_0)
{
    return FUNC_0 (VAR_0->sock);
}

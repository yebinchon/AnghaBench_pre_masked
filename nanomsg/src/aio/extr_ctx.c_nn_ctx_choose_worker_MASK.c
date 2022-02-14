
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_worker {int dummy; } ;
struct nn_ctx {int pool; } ;


 struct nn_worker* FUNC_0 (int ) ;

struct nn_worker *FUNC_1 (struct nn_ctx *VAR_0)
{
    return FUNC_0 (VAR_0->pool);
}

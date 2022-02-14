
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_pool {int dummy; } ;
struct nn_ctx {int onleave; int eventsto; int events; struct nn_pool* pool; int sync; } ;
typedef int nn_ctx_onleave ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2 (struct nn_ctx *VAR_0, struct nn_pool *VAR_1,
    nn_ctx_onleave VAR_2)
{
    FUNC_0 (&VAR_0->sync);
    VAR_0->pool = VAR_1;
    FUNC_1 (&VAR_0->events);
    FUNC_1 (&VAR_0->eventsto);
    VAR_0->onleave = VAR_2;
}

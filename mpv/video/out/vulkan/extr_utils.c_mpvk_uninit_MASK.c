
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mpvk_ctx {int pl_log; int ctx; TYPE_1__* vkinst; int * surface; } ;
struct TYPE_3__ {int instance; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (int ,int *,int *) ;

void FUNC_5(struct mpvk_ctx *VAR_0)
{
    if (VAR_0->surface) {
        FUNC_1(VAR_0->vkinst);
        FUNC_4(VAR_0->vkinst->instance, VAR_0->surface, ((void*)0));
        VAR_0->surface = ((void*)0);
    }

    FUNC_3(&VAR_0->vkinst);
    FUNC_2(&VAR_0->ctx);
    FUNC_0(&VAR_0->pl_log);
}

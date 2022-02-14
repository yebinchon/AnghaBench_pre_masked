
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_ctx {TYPE_3__* fns; TYPE_2__* spirv; } ;
struct TYPE_6__ {int (* uninit ) (struct ra_ctx*) ;} ;
struct TYPE_5__ {TYPE_1__* fns; } ;
struct TYPE_4__ {int (* uninit ) (struct ra_ctx*) ;} ;


 int FUNC_0 (struct ra_ctx*) ;
 int FUNC_1 (struct ra_ctx*) ;
 int FUNC_2 (struct ra_ctx*) ;

void FUNC_3(struct ra_ctx **VAR_0)
{
    struct ra_ctx *VAR_1 = *VAR_0;
    if (!VAR_1)
        return;

    if (VAR_1->spirv && VAR_1->spirv->fns->uninit)
        VAR_1->spirv->fns->uninit(VAR_1);

    VAR_1->fns->uninit(VAR_1);
    FUNC_2(VAR_1);

    *VAR_0 = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_ctx {TYPE_2__* ra; int vo; struct priv* priv; } ;
struct priv {int device; int swapchain; int backbuffer; } ;
struct TYPE_5__ {TYPE_1__* fns; } ;
struct TYPE_4__ {int (* destroy ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_0->ra)
        FUNC_1(VAR_0->ra, &VAR_1->backbuffer);
    FUNC_0(VAR_1->swapchain);
    FUNC_3(VAR_0->vo);
    FUNC_0(VAR_1->device);



    if (VAR_0->ra)
        VAR_0->ra->fns->destroy(VAR_0->ra);
}

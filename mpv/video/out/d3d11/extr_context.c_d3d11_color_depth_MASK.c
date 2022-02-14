
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_swapchain {struct priv* priv; } ;
struct priv {TYPE_3__* backbuffer; } ;
struct TYPE_5__ {TYPE_1__* format; } ;
struct TYPE_6__ {TYPE_2__ params; } ;
struct TYPE_4__ {int* component_depth; } ;



__attribute__((used)) static int FUNC_0(struct ra_swapchain *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (!VAR_1->backbuffer)
        return 0;

    return VAR_1->backbuffer->params.format->component_depth[0];
}

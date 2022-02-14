
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_surface {TYPE_3__* container; } ;
struct TYPE_4__ {scalar_t__ sub_resource_idx; TYPE_3__* texture; } ;
struct wined3d_context {TYPE_1__ current_rt; } ;
struct TYPE_5__ {int device; } ;
struct TYPE_6__ {TYPE_2__ resource; } ;


 struct wined3d_context* FUNC_0 (int ,TYPE_3__*,scalar_t__) ;
 int FUNC_1 (struct wined3d_context*) ;
 scalar_t__ FUNC_2 (struct wined3d_surface*) ;

void FUNC_3(struct wined3d_context *VAR_0, struct wined3d_surface *VAR_1)
{
    if (VAR_0->current_rt.texture != VAR_1->container
            || VAR_0->current_rt.sub_resource_idx != FUNC_2(VAR_1))
    {
        FUNC_1(VAR_0);
        VAR_0 = FUNC_0(VAR_1->container->resource.device,
                VAR_1->container, FUNC_2(VAR_1));
    }

    FUNC_1(VAR_0);
}

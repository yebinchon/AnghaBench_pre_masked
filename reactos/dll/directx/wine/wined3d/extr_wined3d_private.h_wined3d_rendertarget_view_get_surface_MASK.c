
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_texture {TYPE_2__* sub_resources; } ;
struct wined3d_surface {int dummy; } ;
struct wined3d_rendertarget_view {size_t sub_resource_idx; TYPE_3__* resource; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_4__ {struct wined3d_surface* surface; } ;
struct TYPE_5__ {TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 struct wined3d_texture* FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static inline struct wined3d_surface *FUNC_1(
        const struct wined3d_rendertarget_view *VAR_1)
{
    struct wined3d_texture *VAR_2;

    if (!VAR_1 || VAR_1->resource->type != VAR_0)
        return ((void*)0);

    VAR_2 = FUNC_0(VAR_1->resource);

    return VAR_2->sub_resources[VAR_1->sub_resource_idx].u.surface;
}

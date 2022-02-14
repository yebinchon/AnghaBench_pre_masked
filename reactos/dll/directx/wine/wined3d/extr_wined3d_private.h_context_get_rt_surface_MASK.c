
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_texture {TYPE_2__* sub_resources; } ;
struct wined3d_surface {int dummy; } ;
struct TYPE_6__ {size_t sub_resource_idx; struct wined3d_texture* texture; } ;
struct wined3d_context {TYPE_3__ current_rt; } ;
struct TYPE_4__ {struct wined3d_surface* surface; } ;
struct TYPE_5__ {TYPE_1__ u; } ;



__attribute__((used)) static inline struct wined3d_surface *FUNC_0(const struct wined3d_context *VAR_0)
{
    struct wined3d_texture *VAR_1 = VAR_0->current_rt.texture;

    if (!VAR_1)
        return ((void*)0);
    return VAR_1->sub_resources[VAR_0->current_rt.sub_resource_idx].u.surface;
}

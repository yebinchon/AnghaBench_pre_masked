
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_shader_resource_view {TYPE_2__* resource; } ;
struct wined3d_cs_set_shader_resource_view {size_t type; size_t view_idx; struct wined3d_shader_resource_view* view; } ;
struct TYPE_3__ {struct wined3d_shader_resource_view*** shader_resource_view; } ;
struct wined3d_cs {int device; TYPE_1__ state; } ;
struct TYPE_4__ {int bind_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wined3d_cs *VAR_3, const void *VAR_4)
{
    const struct wined3d_cs_set_shader_resource_view *VAR_5 = VAR_4;
    struct wined3d_shader_resource_view *VAR_6;

    VAR_6 = VAR_3->state.shader_resource_view[VAR_5->type][VAR_5->view_idx];
    VAR_3->state.shader_resource_view[VAR_5->type][VAR_5->view_idx] = VAR_5->view;

    if (VAR_5->view)
        FUNC_1(&VAR_5->view->resource->bind_count);
    if (VAR_6)
        FUNC_0(&VAR_6->resource->bind_count);

    if (VAR_5->type != VAR_2)
        FUNC_2(VAR_3->device, VAR_1);
    else
        FUNC_2(VAR_3->device, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_unordered_access_view {TYPE_2__* resource; } ;
struct wined3d_cs_set_unordered_access_view {size_t pipeline; size_t view_idx; unsigned int initial_count; struct wined3d_unordered_access_view* view; } ;
struct TYPE_3__ {struct wined3d_unordered_access_view*** unordered_access_view; } ;
struct wined3d_cs {int device; TYPE_1__ state; } ;
struct TYPE_4__ {int bind_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct wined3d_unordered_access_view*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_set_unordered_access_view *VAR_2 = VAR_1;
    struct wined3d_unordered_access_view *VAR_3;

    VAR_3 = VAR_0->state.unordered_access_view[VAR_2->pipeline][VAR_2->view_idx];
    VAR_0->state.unordered_access_view[VAR_2->pipeline][VAR_2->view_idx] = VAR_2->view;

    if (VAR_2->view)
        FUNC_1(&VAR_2->view->resource->bind_count);
    if (VAR_3)
        FUNC_0(&VAR_3->resource->bind_count);

    if (VAR_2->view && VAR_2->initial_count != ~0u)
        FUNC_4(VAR_2->view, VAR_2->initial_count);

    FUNC_3(VAR_0->device, FUNC_2(VAR_2->pipeline));
}

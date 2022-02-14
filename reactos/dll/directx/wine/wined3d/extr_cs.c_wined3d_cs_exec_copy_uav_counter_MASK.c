
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_unordered_access_view {int * resource; } ;
struct wined3d_cs_copy_uav_counter {TYPE_1__* buffer; int offset; struct wined3d_unordered_access_view* view; } ;
struct wined3d_cs {int device; } ;
struct wined3d_context {int dummy; } ;
struct TYPE_2__ {int resource; } ;


 struct wined3d_context* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct wined3d_context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wined3d_unordered_access_view*,TYPE_1__*,int ,struct wined3d_context*) ;

__attribute__((used)) static void FUNC_4(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_copy_uav_counter *VAR_2 = VAR_1;
    struct wined3d_unordered_access_view *VAR_3 = VAR_2->view;
    struct wined3d_context *VAR_4;

    VAR_4 = FUNC_0(VAR_0->device, ((void*)0), 0);
    FUNC_3(VAR_3, VAR_2->buffer, VAR_2->offset, VAR_4);
    FUNC_1(VAR_4);

    FUNC_2(&VAR_2->buffer->resource);
    FUNC_2(VAR_3->resource);
}

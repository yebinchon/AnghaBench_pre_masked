
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_surface {TYPE_1__* container; } ;
struct wined3d_context {TYPE_2__* blit_targets; } ;
struct TYPE_5__ {int layer_count; int sub_resource_idx; int * resource; } ;
struct TYPE_4__ {int resource; } ;
typedef int GLenum ;
typedef int DWORD ;


 int FUNC_0 (struct wined3d_context*,int ,TYPE_2__*,struct wined3d_surface*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct wined3d_surface*) ;

void FUNC_3(struct wined3d_context *VAR_0, GLenum VAR_1,
        struct wined3d_surface *VAR_2, struct wined3d_surface *VAR_3, DWORD VAR_4)
{
    FUNC_1(VAR_0->blit_targets, 0, sizeof(VAR_0->blit_targets));
    if (VAR_2)
    {
        VAR_0->blit_targets[0].resource = &VAR_2->container->resource;
        VAR_0->blit_targets[0].sub_resource_idx = FUNC_2(VAR_2);
        VAR_0->blit_targets[0].layer_count = 1;
    }
    FUNC_0(VAR_0, VAR_1, VAR_0->blit_targets, VAR_3, VAR_4, VAR_4);
}

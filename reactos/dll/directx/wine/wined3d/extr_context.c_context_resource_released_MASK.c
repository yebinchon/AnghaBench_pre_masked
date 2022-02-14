
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_texture {int dummy; } ;
struct wined3d_resource {int dummy; } ;
struct wined3d_device {size_t context_count; struct wined3d_context** contexts; int d3d_initialized; } ;
struct TYPE_2__ {int sub_resource_idx; struct wined3d_texture* texture; } ;
struct wined3d_context {TYPE_1__ current_rt; } ;
typedef enum wined3d_resource_type { ____Placeholder_wined3d_resource_type } wined3d_resource_type ;
typedef size_t UINT ;




 struct wined3d_texture* FUNC_0 (struct wined3d_resource*) ;

void FUNC_1(const struct wined3d_device *VAR_0,
        struct wined3d_resource *VAR_1, enum wined3d_resource_type VAR_2)
{
    struct wined3d_texture *VAR_3;
    UINT VAR_4;

    if (!VAR_0->d3d_initialized)
        return;

    switch (VAR_2)
    {
        case 129:
        case 128:
            VAR_3 = FUNC_0(VAR_1);

            for (VAR_4 = 0; VAR_4 < VAR_0->context_count; ++VAR_4)
            {
                struct wined3d_context *VAR_5 = VAR_0->contexts[VAR_4];
                if (VAR_5->current_rt.texture == VAR_3)
                {
                    VAR_5->current_rt.texture = ((void*)0);
                    VAR_5->current_rt.sub_resource_idx = 0;
                }
            }
            break;

        default:
            break;
    }
}

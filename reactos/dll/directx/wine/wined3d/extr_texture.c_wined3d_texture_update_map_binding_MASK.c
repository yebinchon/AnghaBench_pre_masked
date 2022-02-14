
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ map_binding; struct wined3d_device* device; } ;
struct wined3d_texture {unsigned int level_count; unsigned int layer_count; scalar_t__ update_map_binding; TYPE_2__ resource; TYPE_1__* sub_resources; } ;
struct wined3d_device {scalar_t__ d3d_initialized; } ;
struct wined3d_context {struct wined3d_context* gl_info; } ;
struct TYPE_3__ {scalar_t__ locations; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 struct wined3d_context* FUNC_1 (struct wined3d_device const*,int *,int ) ;
 int FUNC_2 (struct wined3d_context*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct wined3d_texture*,unsigned int,struct wined3d_context*,scalar_t__) ;
 int FUNC_5 (struct wined3d_texture*,unsigned int,struct wined3d_context*) ;

__attribute__((used)) static void FUNC_6(struct wined3d_texture *VAR_1)
{
    unsigned int VAR_2 = VAR_1->level_count * VAR_1->layer_count;
    const struct wined3d_device *VAR_3 = VAR_1->resource.device;
    DWORD VAR_4 = VAR_1->update_map_binding;
    struct wined3d_context *VAR_5 = ((void*)0);
    unsigned int VAR_6;

    if (VAR_3->d3d_initialized)
        VAR_5 = FUNC_1(VAR_3, ((void*)0), 0);

    for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6)
    {
        if (VAR_1->sub_resources[VAR_6].locations == VAR_1->resource.map_binding
                && !FUNC_4(VAR_1, VAR_6, VAR_5, VAR_4))
            FUNC_0("Failed to load location %s.\n", FUNC_3(VAR_4));
        if (VAR_1->resource.map_binding == VAR_0)

            FUNC_5(VAR_1, VAR_6, VAR_5->gl_info);



    }

    if (VAR_5)
        FUNC_2(VAR_5);

    VAR_1->resource.map_binding = VAR_4;
    VAR_1->update_map_binding = 0;
}

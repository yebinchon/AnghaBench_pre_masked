
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_state {struct wined3d_sampler*** sampler; struct wined3d_shader_resource_view*** shader_resource_view; struct wined3d_shader** shader; } ;
struct wined3d_shader_sampler_map_entry {unsigned int bind_idx; size_t resource_idx; size_t sampler_idx; } ;
struct wined3d_shader_resource_view {int dummy; } ;
struct TYPE_3__ {unsigned int count; struct wined3d_shader_sampler_map_entry* entries; } ;
struct TYPE_4__ {TYPE_1__ sampler_map; int shader_version; } ;
struct wined3d_shader {TYPE_2__ reg_maps; } ;
struct wined3d_sampler {int dummy; } ;
struct wined3d_device {struct wined3d_sampler* null_sampler; struct wined3d_sampler* default_sampler; } ;
struct wined3d_context {struct wined3d_device* device; } ;
typedef enum wined3d_shader_type { ____Placeholder_wined3d_shader_type } wined3d_shader_type ;
typedef unsigned int DWORD ;


 int FUNC_0 (char*,struct wined3d_shader const*,unsigned int,unsigned int) ;
 int FUNC_1 (char*,int,size_t) ;
 size_t VAR_0 ;
 unsigned int* FUNC_2 (struct wined3d_context*,int *,unsigned int*,unsigned int*) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct wined3d_shader_resource_view*,unsigned int,struct wined3d_sampler*,struct wined3d_context*) ;

__attribute__((used)) static void FUNC_5(struct wined3d_context *VAR_1,
        const struct wined3d_state *VAR_2, enum wined3d_shader_type VAR_3)
{
    unsigned int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    const struct wined3d_device *VAR_9 = VAR_1->device;
    struct wined3d_shader_sampler_map_entry *VAR_10;
    struct wined3d_shader_resource_view *VAR_11;
    const struct wined3d_shader *VAR_12;
    struct wined3d_sampler *VAR_13;
    const DWORD *VAR_14;

    if (!(VAR_12 = VAR_2->shader[VAR_3]))
        return;

    VAR_14 = FUNC_2(VAR_1,
            &VAR_12->reg_maps.shader_version, &VAR_6, &VAR_7);

    VAR_5 = VAR_12->reg_maps.sampler_map.count;
    if (VAR_5 > VAR_7)
        FUNC_0("Shader %p needs %u samplers, but only %u are supported.\n",
                VAR_12, VAR_5, VAR_7);
    VAR_7 = FUNC_3(VAR_5, VAR_7);

    for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8)
    {
        VAR_10 = &VAR_12->reg_maps.sampler_map.entries[VAR_8];
        VAR_4 = VAR_6 + VAR_10->bind_idx;
        if (VAR_14)
            VAR_4 = VAR_14[VAR_4];

        if (!(VAR_11 = VAR_2->shader_resource_view[VAR_3][VAR_10->resource_idx]))
        {
            FUNC_1("No resource view bound at index %u, %u.\n", VAR_3, VAR_10->resource_idx);
            continue;
        }

        if (VAR_10->sampler_idx == VAR_0)
            VAR_13 = VAR_9->default_sampler;
        else if (!(VAR_13 = VAR_2->sampler[VAR_3][VAR_10->sampler_idx]))
            VAR_13 = VAR_9->null_sampler;
        FUNC_4(VAR_11, VAR_4, VAR_13, VAR_1);
    }
}

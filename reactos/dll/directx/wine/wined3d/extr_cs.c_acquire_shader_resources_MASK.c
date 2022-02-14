
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {struct wined3d_shader_resource_view*** shader_resource_view; TYPE_1__*** cb; struct wined3d_shader** shader; } ;
struct wined3d_shader_sampler_map_entry {size_t resource_idx; } ;
struct wined3d_shader_resource_view {int * resource; } ;
struct TYPE_5__ {unsigned int count; struct wined3d_shader_sampler_map_entry* entries; } ;
struct TYPE_6__ {TYPE_2__ sampler_map; } ;
struct wined3d_shader {TYPE_3__ reg_maps; } ;
struct TYPE_4__ {int resource; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(const struct wined3d_state *VAR_2, unsigned int VAR_3)
{
    struct wined3d_shader_sampler_map_entry *VAR_4;
    struct wined3d_shader_resource_view *VAR_5;
    struct wined3d_shader *VAR_6;
    unsigned int VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7)
    {
        if (!(VAR_3 & (1u << VAR_7)))
            continue;

        if (!(VAR_6 = VAR_2->shader[VAR_7]))
            continue;

        for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8)
        {
            if (VAR_2->cb[VAR_7][VAR_8])
                FUNC_0(&VAR_2->cb[VAR_7][VAR_8]->resource);
        }

        for (VAR_8 = 0; VAR_8 < VAR_6->reg_maps.sampler_map.count; ++VAR_8)
        {
            VAR_4 = &VAR_6->reg_maps.sampler_map.entries[VAR_8];

            if (!(VAR_5 = VAR_2->shader_resource_view[VAR_7][VAR_4->resource_idx]))
                continue;

            FUNC_0(VAR_5->resource);
        }
    }
}

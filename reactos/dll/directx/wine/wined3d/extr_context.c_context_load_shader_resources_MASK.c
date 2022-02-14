
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_state {struct wined3d_shader_resource_view*** shader_resource_view; scalar_t__** cb; struct wined3d_shader** shader; } ;
struct wined3d_shader_sampler_map_entry {size_t resource_idx; } ;
struct wined3d_shader_resource_view {TYPE_3__* resource; } ;
struct TYPE_5__ {unsigned int count; struct wined3d_shader_sampler_map_entry* entries; } ;
struct TYPE_6__ {TYPE_1__ sampler_map; } ;
struct wined3d_shader {TYPE_2__ reg_maps; } ;
struct wined3d_context {int dummy; } ;
struct TYPE_7__ {scalar_t__ type; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__,struct wined3d_context*,struct wined3d_state const*) ;
 int FUNC_3 (int ,struct wined3d_context*,int ) ;

__attribute__((used)) static void FUNC_4(struct wined3d_context *VAR_4, const struct wined3d_state *VAR_5,
        unsigned int VAR_6)
{
    struct wined3d_shader_sampler_map_entry *VAR_7;
    struct wined3d_shader_resource_view *VAR_8;
    struct wined3d_shader *VAR_9;
    unsigned int VAR_10, VAR_11;

    for (VAR_10 = 0; VAR_10 < VAR_3; ++VAR_10)
    {
        if (!(VAR_6 & (1u << VAR_10)))
            continue;

        if (!(VAR_9 = VAR_5->shader[VAR_10]))
            continue;

        for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11)
        {
            if (VAR_5->cb[VAR_10][VAR_11])
                FUNC_2(VAR_5->cb[VAR_10][VAR_11], VAR_4, VAR_5);
        }

        for (VAR_11 = 0; VAR_11 < VAR_9->reg_maps.sampler_map.count; ++VAR_11)
        {
            VAR_7 = &VAR_9->reg_maps.sampler_map.entries[VAR_11];

            if (!(VAR_8 = VAR_5->shader_resource_view[VAR_10][VAR_7->resource_idx]))
                continue;

            if (VAR_8->resource->type == VAR_2)
                FUNC_2(FUNC_0(VAR_8->resource), VAR_4, VAR_5);
            else
                FUNC_3(FUNC_1(VAR_8->resource), VAR_4, VAR_0);
        }
    }
}

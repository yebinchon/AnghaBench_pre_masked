
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_sampler_map_entry {unsigned int resource_idx; unsigned int sampler_idx; unsigned int bind_idx; } ;
struct wined3d_shader_sampler_map {unsigned int count; struct wined3d_shader_sampler_map_entry* entries; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(const struct wined3d_shader_sampler_map *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2)
{
    struct wined3d_shader_sampler_map_entry *VAR_3 = VAR_0->entries;
    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0->count; ++VAR_4)
    {
        if (VAR_3[VAR_4].resource_idx == VAR_1 && VAR_3[VAR_4].sampler_idx == VAR_2)
            return VAR_3[VAR_4].bind_idx;
    }

    FUNC_0("No GLSL sampler found for resource %u / sampler %u.\n", VAR_1, VAR_2);

    return ~0u;
}

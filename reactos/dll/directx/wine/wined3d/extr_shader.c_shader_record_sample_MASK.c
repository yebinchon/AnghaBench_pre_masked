
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_sampler_map_entry {unsigned int resource_idx; unsigned int sampler_idx; unsigned int bind_idx; } ;
struct wined3d_shader_sampler_map {unsigned int count; int size; struct wined3d_shader_sampler_map_entry* entries; } ;
struct wined3d_shader_reg_maps {struct wined3d_shader_sampler_map sampler_map; } ;


 int FUNC_0 (char*) ;
 struct wined3d_shader_sampler_map_entry* FUNC_1 (int,int) ;
 struct wined3d_shader_sampler_map_entry* FUNC_2 (struct wined3d_shader_sampler_map_entry*,int) ;

__attribute__((used)) static void FUNC_3(struct wined3d_shader_reg_maps *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
    struct wined3d_shader_sampler_map_entry *VAR_4, *VAR_5;
    struct wined3d_shader_sampler_map *VAR_6;
    unsigned int VAR_7;

    VAR_6 = &VAR_0->sampler_map;
    VAR_4 = VAR_6->entries;
    for (VAR_7 = 0; VAR_7 < VAR_6->count; ++VAR_7)
    {
        if (VAR_4[VAR_7].resource_idx == VAR_1 && VAR_4[VAR_7].sampler_idx == VAR_2)
            return;
    }

    if (!VAR_6->size)
    {
        if (!(VAR_4 = FUNC_1(4, sizeof(*VAR_4))))
        {
            FUNC_0("Failed to allocate sampler map entries.\n");
            return;
        }
        VAR_6->size = 4;
        VAR_6->entries = VAR_4;
    }
    else if (VAR_6->count == VAR_6->size)
    {
        size_t VAR_8 = VAR_6->size * 2;

        if (sizeof(*VAR_4) * VAR_8 <= sizeof(*VAR_4) * VAR_6->size
                || !(VAR_4 = FUNC_2(VAR_4, sizeof(*VAR_4) * VAR_8)))
        {
            FUNC_0("Failed to resize sampler map entries.\n");
            return;
        }
        VAR_6->size = VAR_8;
        VAR_6->entries = VAR_4;
    }

    VAR_5 = &VAR_4[VAR_6->count++];
    VAR_5->resource_idx = VAR_1;
    VAR_5->sampler_idx = VAR_2;
    VAR_5->bind_idx = VAR_3;
}

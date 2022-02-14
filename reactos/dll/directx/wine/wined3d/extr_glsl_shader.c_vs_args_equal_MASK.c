
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vs_compile_args {int const swizzle_map; scalar_t__ clip_enabled; scalar_t__ point_size; scalar_t__ per_vertex_point_size; scalar_t__ flatshading; scalar_t__ next_shader_type; scalar_t__ next_shader_input_count; scalar_t__ fog_src; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0(const struct vs_compile_args *VAR_1, const struct vs_compile_args *VAR_2,
        const DWORD VAR_3)
{
    if((VAR_1->swizzle_map & VAR_3) != VAR_2->swizzle_map) return VAR_0;
    if((VAR_1->clip_enabled) != VAR_2->clip_enabled) return VAR_0;
    if (VAR_1->point_size != VAR_2->point_size)
        return VAR_0;
    if (VAR_1->per_vertex_point_size != VAR_2->per_vertex_point_size)
        return VAR_0;
    if (VAR_1->flatshading != VAR_2->flatshading)
        return VAR_0;
    if (VAR_1->next_shader_type != VAR_2->next_shader_type)
        return VAR_0;
    if (VAR_1->next_shader_input_count != VAR_2->next_shader_input_count)
        return VAR_0;
    return VAR_1->fog_src == VAR_2->fog_src;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_resource_info {int type; } ;
struct wined3d_context {size_t* rev_tex_unit_map; unsigned int fixed_function_usage_map; } ;
typedef size_t DWORD ;
typedef int BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static BOOL FUNC_0(const struct wined3d_context *VAR_4,
        const struct wined3d_shader_resource_info *VAR_5, DWORD VAR_6)
{
    DWORD VAR_7 = VAR_4->rev_tex_unit_map[VAR_6];


    if (VAR_7 == VAR_3)
        return VAR_2;

    if (VAR_7 < VAR_0)
    {


        if (!VAR_5)
        {

            return VAR_7 >= VAR_1 || !(VAR_4->fixed_function_usage_map & (1u << VAR_7));
        }


        return !VAR_5[VAR_7].type;
    }

    return VAR_2;
}

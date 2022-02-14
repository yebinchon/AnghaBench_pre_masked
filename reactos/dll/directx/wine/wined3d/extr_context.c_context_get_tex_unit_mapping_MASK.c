
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_version {int major; int type; } ;
struct wined3d_gl_info {int limits; } ;
struct wined3d_context {int const* tex_unit_map; struct wined3d_gl_info* gl_info; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;


 int FUNC_1 (int *,int ,unsigned int*,unsigned int*) ;

const DWORD *FUNC_2(const struct wined3d_context *VAR_3,
        const struct wined3d_shader_version *VAR_4, unsigned int *VAR_5, unsigned int *VAR_6)
{
    const struct wined3d_gl_info *VAR_7 = VAR_3->gl_info;

    if (!VAR_4)
    {
        *VAR_5 = 0;
        *VAR_6 = VAR_1;
        return VAR_3->tex_unit_map;
    }

    if (VAR_4->major >= 4)
    {
        FUNC_1(&VAR_7->limits, VAR_4->type, VAR_5, VAR_6);
        return ((void*)0);
    }

    switch (VAR_4->type)
    {
        case 129:
            *VAR_5 = 0;
            *VAR_6 = VAR_0;
            break;
        case 128:
            *VAR_5 = VAR_0;
            *VAR_6 = VAR_2;
            break;
        default:
            FUNC_0("Unhandled shader type %#x.\n", VAR_4->type);
            *VAR_5 = 0;
            *VAR_6 = 0;
    }

    return VAR_3->tex_unit_map;
}

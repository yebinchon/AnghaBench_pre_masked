
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_limits {unsigned int combined_samplers; unsigned int graphics_samplers; unsigned int* samplers; } ;
typedef enum wined3d_shader_type { ____Placeholder_wined3d_shader_type } wined3d_shader_type ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;

void FUNC_1(const struct wined3d_gl_limits *VAR_2,
        enum wined3d_shader_type VAR_3, unsigned int *VAR_4, unsigned int *VAR_5)
{
    unsigned int VAR_6;

    if (VAR_3 == VAR_0)
    {
        if (VAR_2->combined_samplers == VAR_2->graphics_samplers)
            *VAR_4 = 0;
        else
            *VAR_4 = VAR_2->graphics_samplers;
        *VAR_5 = VAR_2->samplers[VAR_0];
        return;
    }

    *VAR_4 = 0;
    for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
    {
        *VAR_5 = VAR_2->samplers[VAR_6];
        if (VAR_6 == VAR_3)
            return;
        *VAR_4 += *VAR_5;
    }

    FUNC_0("Unrecognized shader type %#x.\n", VAR_3);
    *VAR_5 = 0;
}

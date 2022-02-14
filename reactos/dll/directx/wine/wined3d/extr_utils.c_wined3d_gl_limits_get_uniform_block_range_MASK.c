
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_limits {unsigned int* uniform_blocks; } ;
typedef enum wined3d_shader_type { ____Placeholder_wined3d_shader_type } wined3d_shader_type ;


 int FUNC_0 (char*,int) ;
 unsigned int VAR_0 ;

void FUNC_1(const struct wined3d_gl_limits *VAR_1,
        enum wined3d_shader_type VAR_2, unsigned int *VAR_3, unsigned int *VAR_4)
{
    unsigned int VAR_5;

    *VAR_3 = 0;
    for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
    {
        *VAR_4 = VAR_1->uniform_blocks[VAR_5];
        if (VAR_5 == VAR_2)
            return;
        *VAR_3 += *VAR_4;
    }

    FUNC_0("Unrecognized shader type %#x.\n", VAR_2);
    *VAR_4 = 0;
}

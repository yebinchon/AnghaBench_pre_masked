
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
typedef enum wined3d_shader_interpolation_mode { ____Placeholder_wined3d_shader_interpolation_mode } wined3d_shader_interpolation_mode ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (struct wined3d_gl_info const*,struct wined3d_string_buffer*,int ,char*,unsigned int) ;
 scalar_t__ FUNC_1 (struct wined3d_gl_info const*) ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,...) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct wined3d_gl_info const*) ;
 int FUNC_5 (int const*,unsigned int) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_gl_info *VAR_1,
        struct wined3d_string_buffer *VAR_2, unsigned int VAR_3, BOOL VAR_4,
        const DWORD *VAR_5)
{
    enum wined3d_shader_interpolation_mode VAR_6;
    unsigned int VAR_7;

    if (FUNC_4(VAR_1))
    {
        if (VAR_4)
        {
            FUNC_2(VAR_2, "out shader_in_out {\n");
            for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7)
            {
                const char *VAR_8 = "";
                if (FUNC_1(VAR_1))
                {
                    VAR_6 = FUNC_5(VAR_5, VAR_7);
                    VAR_8 = FUNC_3(VAR_6);
                }
                FUNC_2(VAR_2, "%s vec4 reg%u;\n", VAR_8, VAR_7);
            }
            FUNC_2(VAR_2, "} shader_out;\n");
        }
        else
        {
            FUNC_2(VAR_2, "out shader_in_out { vec4 reg[%u]; } shader_out;\n", VAR_3);
        }
    }
    else
    {
        FUNC_0(VAR_1, VAR_2, VAR_0, "vec4 ps_link[%u];\n", VAR_3);
    }
}

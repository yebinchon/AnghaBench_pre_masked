
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct TYPE_2__ {int major; } ;
struct wined3d_shader_reg_maps {TYPE_1__ shader_version; } ;
struct wined3d_shader {struct wined3d_shader_reg_maps reg_maps; } ;
struct wined3d_gl_info {int dummy; } ;
struct ps_compile_args {scalar_t__ alpha_test_func; int fog; scalar_t__ srgb_correction; } ;


 scalar_t__ FUNC_0 (struct wined3d_gl_info const*) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,char const*) ;
 int FUNC_2 (struct wined3d_string_buffer*,struct wined3d_gl_info const*,scalar_t__) ;
 int FUNC_3 (struct wined3d_string_buffer*,struct wined3d_gl_info const*,int ) ;
 int FUNC_4 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_gl_info *VAR_0,
        struct wined3d_string_buffer *VAR_1, const struct wined3d_shader *VAR_2,
        const struct ps_compile_args *VAR_3)
{
    const struct wined3d_shader_reg_maps *VAR_4 = &VAR_2->reg_maps;
    const char *VAR_5 = FUNC_0(VAR_0) ? "gl_FragData[0]" : "ps_out0";


    if (VAR_4->shader_version.major < 2)
        FUNC_1(VAR_1, "%s = R0;\n", VAR_5);

    if (VAR_3->srgb_correction)
        FUNC_4(VAR_1, VAR_0);


    if (VAR_4->shader_version.major < 3)
        FUNC_3(VAR_1, VAR_0, VAR_3->fog);

    FUNC_2(VAR_1, VAR_0, VAR_3->alpha_test_func + 1);
}

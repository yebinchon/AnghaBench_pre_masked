
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_reg_maps {int dummy; } ;
struct wined3d_shader {struct wined3d_shader_reg_maps reg_maps; } ;
struct wined3d_context {int gl_info; } ;
struct shader_glsl_priv {int dummy; } ;
typedef int GLuint ;


 int FUNC_0 (int ,struct shader_glsl_priv*,int ,struct wined3d_shader_reg_maps const*) ;
 int FUNC_1 (int ,struct shader_glsl_priv*,int ,struct wined3d_shader_reg_maps const*) ;
 int FUNC_2 (struct wined3d_context const*,struct shader_glsl_priv*,int ,struct wined3d_shader_reg_maps const*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_context *VAR_0,
        struct shader_glsl_priv *VAR_1, GLuint VAR_2, const struct wined3d_shader *VAR_3)
{
    const struct wined3d_shader_reg_maps *VAR_4 = &VAR_3->reg_maps;

    FUNC_0(VAR_0->gl_info, VAR_1, VAR_2, VAR_4);
    FUNC_1(VAR_0->gl_info, VAR_1, VAR_2, VAR_4);


    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4);
}

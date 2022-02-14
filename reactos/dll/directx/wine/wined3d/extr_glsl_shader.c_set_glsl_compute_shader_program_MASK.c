
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {struct wined3d_shader** shader; } ;
struct wined3d_shader {int dummy; } ;
struct wined3d_context {unsigned int shader_update_mask; } ;
struct shader_glsl_priv {int dummy; } ;
struct glsl_shader_prog_link {int dummy; } ;
struct glsl_program_key {int cs_id; } ;
struct glsl_context_data {struct glsl_shader_prog_link* glsl_program; } ;
typedef int key ;
typedef int GLuint ;


 int FUNC_0 (char*,struct wined3d_shader*) ;
 int FUNC_1 (char*) ;
 unsigned int VAR_0 ;
 int FUNC_2 (struct wined3d_context const*,struct shader_glsl_priv*,struct wined3d_shader*) ;
 struct glsl_shader_prog_link* FUNC_3 (struct shader_glsl_priv*,struct glsl_program_key*) ;
 int FUNC_4 (struct glsl_program_key*,int ,int) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_context *VAR_1,
        const struct wined3d_state *VAR_2, struct shader_glsl_priv *VAR_3, struct glsl_context_data *VAR_4)
{
    struct glsl_shader_prog_link *VAR_5;
    struct wined3d_shader *VAR_6;
    struct glsl_program_key VAR_7;
    GLuint VAR_8;

    if (!(VAR_1->shader_update_mask & (1u << VAR_0)))
        return;

    if (!(VAR_6 = VAR_2->shader[VAR_0]))
    {
        FUNC_1("Compute shader is NULL.\n");
        VAR_4->glsl_program = ((void*)0);
        return;
    }

    VAR_8 = FUNC_2(VAR_1, VAR_3, VAR_6);
    FUNC_4(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.cs_id = VAR_8;
    if (!(VAR_5 = FUNC_3(VAR_3, &VAR_7)))
        FUNC_0("Failed to find GLSL program for compute shader %p.\n", VAR_6);
    VAR_4->glsl_program = VAR_5;
}

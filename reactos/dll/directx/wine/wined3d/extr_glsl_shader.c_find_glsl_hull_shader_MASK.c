
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader {struct glsl_shader_private* backend_data; } ;
struct wined3d_context {int dummy; } ;
struct shader_glsl_priv {int shader_buffer; } ;
struct TYPE_2__ {struct glsl_hs_compiled_shader* hs; } ;
struct glsl_shader_private {int num_gl_shaders; unsigned int shader_array_size; TYPE_1__ gl_shaders; } ;
struct glsl_hs_compiled_shader {int id; } ;
typedef int GLuint ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct wined3d_shader*) ;
 int FUNC_2 (int) ;
 struct glsl_hs_compiled_shader* FUNC_3 (int) ;
 struct glsl_shader_private* FUNC_4 (int) ;
 int FUNC_5 (struct wined3d_context const*,struct shader_glsl_priv*,struct wined3d_shader*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static GLuint FUNC_7(const struct wined3d_context *VAR_0,
        struct shader_glsl_priv *VAR_1, struct wined3d_shader *VAR_2)
{
    struct glsl_hs_compiled_shader *VAR_3, *VAR_4;
    struct glsl_shader_private *VAR_5;
    unsigned int VAR_6;
    GLuint VAR_7;

    if (!VAR_2->backend_data)
    {
        if (!(VAR_2->backend_data = FUNC_4(sizeof(*VAR_5))))
        {
            FUNC_0("Failed to allocate backend data.\n");
            return 0;
        }
    }
    VAR_5 = VAR_2->backend_data;
    VAR_3 = VAR_5->gl_shaders.hs;

    if (VAR_5->num_gl_shaders > 0)
    {
        FUNC_2(VAR_5->num_gl_shaders == 1);
        return VAR_3[0].id;
    }

    FUNC_1("No matching GL shader found for shader %p, compiling a new shader.\n", VAR_2);

    FUNC_2(!VAR_5->gl_shaders.hs);
    VAR_6 = 1;
    if (!(VAR_4 = FUNC_3(sizeof(*VAR_4))))
    {
        FUNC_0("Failed to allocate GL shaders array.\n");
        return 0;
    }
    VAR_5->gl_shaders.hs = VAR_4;
    VAR_5->shader_array_size = VAR_6;
    VAR_3 = VAR_4;

    FUNC_6(&VAR_1->shader_buffer);
    VAR_7 = FUNC_5(VAR_0, VAR_1, VAR_2);
    VAR_3[VAR_5->num_gl_shaders++].id = VAR_7;

    return VAR_7;
}

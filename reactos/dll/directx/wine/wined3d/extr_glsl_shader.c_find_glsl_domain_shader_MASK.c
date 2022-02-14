
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader {struct glsl_shader_private* backend_data; } ;
struct wined3d_context {int dummy; } ;
struct shader_glsl_priv {int shader_buffer; } ;
struct TYPE_2__ {struct glsl_ds_compiled_shader* ds; } ;
struct glsl_shader_private {unsigned int num_gl_shaders; int shader_array_size; TYPE_1__ gl_shaders; } ;
struct ds_compile_args {int dummy; } ;
struct glsl_ds_compiled_shader {int id; struct ds_compile_args args; } ;
typedef int GLuint ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct wined3d_shader*) ;
 struct glsl_ds_compiled_shader* FUNC_2 (int) ;
 struct glsl_shader_private* FUNC_3 (int) ;
 struct glsl_ds_compiled_shader* FUNC_4 (struct glsl_ds_compiled_shader*,unsigned int) ;
 int FUNC_5 (struct ds_compile_args*,struct ds_compile_args const*,int) ;
 int FUNC_6 (struct wined3d_context const*,struct shader_glsl_priv*,struct wined3d_shader*,struct ds_compile_args const*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static GLuint FUNC_8(const struct wined3d_context *VAR_0,
        struct shader_glsl_priv *VAR_1, struct wined3d_shader *VAR_2, const struct ds_compile_args *VAR_3)
{
    struct glsl_ds_compiled_shader *VAR_4, *VAR_5;
    struct glsl_shader_private *VAR_6;
    unsigned int VAR_7, VAR_8;
    GLuint VAR_9;

    if (!VAR_2->backend_data)
    {
        if (!(VAR_2->backend_data = FUNC_3(sizeof(*VAR_6))))
        {
            FUNC_0("Failed to allocate backend data.\n");
            return 0;
        }
    }
    VAR_6 = VAR_2->backend_data;
    VAR_4 = VAR_6->gl_shaders.ds;

    for (VAR_7 = 0; VAR_7 < VAR_6->num_gl_shaders; ++VAR_7)
    {
        if (!FUNC_5(&VAR_4[VAR_7].args, VAR_3, sizeof(*VAR_3)))
            return VAR_4[VAR_7].id;
    }

    FUNC_1("No matching GL shader found for shader %p, compiling a new shader.\n", VAR_2);

    if (VAR_6->num_gl_shaders)
    {
        VAR_8 = VAR_6->shader_array_size + 1;
        VAR_5 = FUNC_4(VAR_6->gl_shaders.ds, VAR_8 * sizeof(*VAR_5));
    }
    else
    {
        VAR_5 = FUNC_2(sizeof(*VAR_5));
        VAR_8 = 1;
    }

    if (!VAR_5)
    {
        FUNC_0("Failed to allocate GL shaders array.\n");
        return 0;
    }
    VAR_6->gl_shaders.ds = VAR_5;
    VAR_6->shader_array_size = VAR_8;
    VAR_4 = VAR_5;

    FUNC_7(&VAR_1->shader_buffer);
    VAR_9 = FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3);
    VAR_4[VAR_6->num_gl_shaders].args = *VAR_3;
    VAR_4[VAR_6->num_gl_shaders++].id = VAR_9;

    return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_shader {struct glsl_shader_private* backend_data; } ;
struct TYPE_3__ {int use_map; } ;
struct wined3d_context {TYPE_1__ stream_info; } ;
struct vs_compile_args {int dummy; } ;
struct shader_glsl_priv {int shader_buffer; } ;
struct glsl_vs_compiled_shader {int id; struct vs_compile_args args; } ;
struct TYPE_4__ {struct glsl_vs_compiled_shader* vs; } ;
struct glsl_shader_private {size_t num_gl_shaders; size_t shader_array_size; TYPE_2__ gl_shaders; } ;
typedef size_t UINT ;
typedef int GLuint ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct wined3d_shader*) ;
 struct glsl_vs_compiled_shader* FUNC_2 (int) ;
 struct glsl_shader_private* FUNC_3 (int) ;
 struct glsl_vs_compiled_shader* FUNC_4 (struct glsl_vs_compiled_shader*,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct wined3d_context const*,struct shader_glsl_priv*,struct wined3d_shader*,struct vs_compile_args const*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct vs_compile_args*,struct vs_compile_args const*,int) ;

__attribute__((used)) static GLuint FUNC_9(const struct wined3d_context *VAR_0, struct shader_glsl_priv *VAR_1,
        struct wined3d_shader *VAR_2, const struct vs_compile_args *VAR_3)
{
    UINT VAR_4;
    DWORD VAR_5;
    DWORD VAR_6 = VAR_0->stream_info.use_map;
    struct glsl_vs_compiled_shader *VAR_7, *VAR_8;
    struct glsl_shader_private *VAR_9;
    GLuint VAR_10;

    if (!VAR_2->backend_data)
    {
        if (!(VAR_2->backend_data = FUNC_3(sizeof(*VAR_9))))
        {
            FUNC_0("Failed to allocate backend data.\n");
            return 0;
        }
    }
    VAR_9 = VAR_2->backend_data;
    VAR_7 = VAR_9->gl_shaders.vs;





    for (VAR_4 = 0; VAR_4 < VAR_9->num_gl_shaders; ++VAR_4)
    {
        if (FUNC_8(&VAR_7[VAR_4].args, VAR_3, VAR_6))
            return VAR_7[VAR_4].id;
    }

    FUNC_1("No matching GL shader found for shader %p, compiling a new shader.\n", VAR_2);

    if (VAR_9->shader_array_size == VAR_9->num_gl_shaders)
    {
        if (VAR_9->num_gl_shaders)
        {
            VAR_5 = VAR_9->shader_array_size + FUNC_5(1, VAR_9->shader_array_size / 2);
            VAR_8 = FUNC_4(VAR_9->gl_shaders.vs, VAR_5 * sizeof(*VAR_7));
        }
        else
        {
            VAR_8 = FUNC_2(sizeof(*VAR_7));
            VAR_5 = 1;
        }

        if(!VAR_8) {
            FUNC_0("Out of memory\n");
            return 0;
        }
        VAR_9->gl_shaders.vs = VAR_8;
        VAR_9->shader_array_size = VAR_5;
        VAR_7 = VAR_8;
    }

    VAR_7[VAR_9->num_gl_shaders].args = *VAR_3;

    FUNC_7(&VAR_1->shader_buffer);
    VAR_10 = FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3);
    VAR_7[VAR_9->num_gl_shaders++].id = VAR_10;

    return VAR_10;
}

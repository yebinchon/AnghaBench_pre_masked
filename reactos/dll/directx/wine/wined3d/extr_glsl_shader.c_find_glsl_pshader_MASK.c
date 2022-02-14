
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer_list {int dummy; } ;
struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader {struct glsl_shader_private* backend_data; } ;
struct wined3d_context {int dummy; } ;
struct ps_np2fixup_info {int dummy; } ;
struct ps_compile_args {int tex_types; scalar_t__ np2_fixup; } ;
struct TYPE_2__ {struct glsl_ps_compiled_shader* ps; } ;
struct glsl_shader_private {size_t num_gl_shaders; size_t shader_array_size; TYPE_1__ gl_shaders; } ;
struct glsl_ps_compiled_shader {int id; struct ps_np2fixup_info np2fixup; struct ps_compile_args args; } ;
typedef size_t UINT ;
typedef int GLuint ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct wined3d_shader*) ;
 struct glsl_ps_compiled_shader* FUNC_2 (int) ;
 struct glsl_shader_private* FUNC_3 (int) ;
 struct glsl_ps_compiled_shader* FUNC_4 (struct glsl_ps_compiled_shader*,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct ps_compile_args*,struct ps_compile_args const*,int) ;
 int FUNC_7 (struct ps_np2fixup_info*,int ,int) ;
 int FUNC_8 (struct wined3d_shader*,int ) ;
 int FUNC_9 (struct wined3d_context const*,struct wined3d_string_buffer*,struct wined3d_string_buffer_list*,struct wined3d_shader*,struct ps_compile_args const*,struct ps_np2fixup_info*) ;
 int FUNC_10 (struct wined3d_string_buffer*) ;

__attribute__((used)) static GLuint FUNC_11(const struct wined3d_context *VAR_0,
        struct wined3d_string_buffer *VAR_1, struct wined3d_string_buffer_list *VAR_2,
        struct wined3d_shader *VAR_3,
        const struct ps_compile_args *VAR_4, const struct ps_np2fixup_info **VAR_5)
{
    struct glsl_ps_compiled_shader *VAR_6, *VAR_7;
    struct glsl_shader_private *VAR_8;
    struct ps_np2fixup_info *VAR_9;
    UINT VAR_10;
    DWORD VAR_11;
    GLuint VAR_12;

    if (!VAR_3->backend_data)
    {
        if (!(VAR_3->backend_data = FUNC_3(sizeof(*VAR_8))))
        {
            FUNC_0("Failed to allocate backend data.\n");
            return 0;
        }
    }
    VAR_8 = VAR_3->backend_data;
    VAR_6 = VAR_8->gl_shaders.ps;





    for (VAR_10 = 0; VAR_10 < VAR_8->num_gl_shaders; ++VAR_10)
    {
        if (!FUNC_6(&VAR_6[VAR_10].args, VAR_4, sizeof(*VAR_4)))
        {
            if (VAR_4->np2_fixup)
                *VAR_5 = &VAR_6[VAR_10].np2fixup;
            return VAR_6[VAR_10].id;
        }
    }

    FUNC_1("No matching GL shader found for shader %p, compiling a new shader.\n", VAR_3);
    if (VAR_8->shader_array_size == VAR_8->num_gl_shaders)
    {
        if (VAR_8->num_gl_shaders)
        {
            VAR_11 = VAR_8->shader_array_size + FUNC_5(1, VAR_8->shader_array_size / 2);
            VAR_7 = FUNC_4(VAR_8->gl_shaders.ps, VAR_11 * sizeof(*VAR_6));
        }
        else
        {
            VAR_7 = FUNC_2(sizeof(*VAR_6));
            VAR_11 = 1;
        }

        if(!VAR_7) {
            FUNC_0("Out of memory\n");
            return 0;
        }
        VAR_8->gl_shaders.ps = VAR_7;
        VAR_8->shader_array_size = VAR_11;
        VAR_6 = VAR_7;
    }

    VAR_6[VAR_8->num_gl_shaders].args = *VAR_4;

    VAR_9 = &VAR_6[VAR_8->num_gl_shaders].np2fixup;
    FUNC_7(VAR_9, 0, sizeof(*VAR_9));
    *VAR_5 = VAR_4->np2_fixup ? VAR_9 : ((void*)0);

    FUNC_8(VAR_3, VAR_4->tex_types);

    FUNC_10(VAR_1);
    VAR_12 = FUNC_9(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_9);
    VAR_6[VAR_8->num_gl_shaders++].id = VAR_12;

    return VAR_12;
}

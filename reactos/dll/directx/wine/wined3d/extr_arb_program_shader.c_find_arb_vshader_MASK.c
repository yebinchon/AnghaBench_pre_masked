
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_signature {int dummy; } ;
struct wined3d_shader_reg_maps {int min_rel_offset; int max_rel_offset; } ;
struct wined3d_shader {struct arb_vshader_private* backend_data; struct wined3d_shader_reg_maps reg_maps; } ;
struct wined3d_gl_info {int quirks; int * supported; } ;
struct arb_vshader_private {int rel_offset; size_t num_gl_shaders; size_t shader_array_size; struct arb_vs_compiled_shader* gl_shaders; } ;
struct arb_vs_compile_args {int dummy; } ;
struct arb_vs_compiled_shader {int prgId; struct arb_vs_compile_args args; } ;
typedef size_t UINT ;
typedef int GLuint ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 int VAR_0 ;
 struct arb_vs_compiled_shader* FUNC_3 (int ,int ,struct arb_vs_compiled_shader*,int) ;
 size_t VAR_1 ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct wined3d_shader*,struct wined3d_gl_info const*,struct wined3d_string_buffer*,struct arb_vs_compile_args const*,struct arb_vs_compiled_shader*,struct wined3d_shader_signature const*) ;
 int FUNC_8 (struct wined3d_string_buffer*) ;
 int FUNC_9 (struct wined3d_string_buffer*) ;
 scalar_t__ FUNC_10 (struct arb_vs_compile_args*,struct arb_vs_compile_args const*,int,int ) ;

__attribute__((used)) static struct arb_vs_compiled_shader *FUNC_11(struct wined3d_shader *VAR_3,
        const struct wined3d_gl_info *VAR_4, DWORD VAR_5, const struct arb_vs_compile_args *VAR_6,
        const struct wined3d_shader_signature *VAR_7)
{
    UINT VAR_8;
    DWORD VAR_9;
    struct arb_vs_compiled_shader *VAR_10;
    struct wined3d_string_buffer VAR_11;
    struct arb_vshader_private *VAR_12;
    GLuint VAR_13;

    if (!VAR_3->backend_data)
    {
        const struct wined3d_shader_reg_maps *VAR_14 = &VAR_3->reg_maps;

        VAR_3->backend_data = FUNC_5(sizeof(*VAR_12));
        VAR_12 = VAR_3->backend_data;

        if ((VAR_4->quirks & VAR_2)
                && VAR_14->min_rel_offset <= VAR_14->max_rel_offset)
        {
            if (VAR_14->max_rel_offset - VAR_14->min_rel_offset > 127)
            {
                FUNC_1("The difference between the minimum and maximum relative offset is > 127.\n");
                FUNC_1("Which this OpenGL implementation does not support. Try using GLSL.\n");
                FUNC_1("Min: %u, Max: %u.\n", VAR_14->min_rel_offset, VAR_14->max_rel_offset);
            }
            else if (VAR_14->max_rel_offset - VAR_14->min_rel_offset > 63)
                VAR_12->rel_offset = VAR_14->min_rel_offset + 63;
            else if (VAR_14->max_rel_offset > 63)
                VAR_12->rel_offset = VAR_14->min_rel_offset;
        }
    }
    VAR_12 = VAR_3->backend_data;





    for(VAR_8 = 0; VAR_8 < VAR_12->num_gl_shaders; VAR_8++) {
        if (FUNC_10(&VAR_12->gl_shaders[VAR_8].args, VAR_6,
                VAR_5, VAR_4->supported[VAR_1]))
        {
            return &VAR_12->gl_shaders[VAR_8];
        }
    }

    FUNC_4("No matching GL shader found, compiling a new shader\n");

    if(VAR_12->shader_array_size == VAR_12->num_gl_shaders) {
        if (VAR_12->num_gl_shaders)
        {
            VAR_9 = VAR_12->shader_array_size + FUNC_6(1, VAR_12->shader_array_size / 2);
            VAR_10 = FUNC_3(FUNC_2(), VAR_0, VAR_12->gl_shaders,
                                    VAR_9 * sizeof(*VAR_12->gl_shaders));
        }
        else
        {
            VAR_10 = FUNC_5(sizeof(*VAR_12->gl_shaders));
            VAR_9 = 1;
        }

        if(!VAR_10) {
            FUNC_0("Out of memory\n");
            return 0;
        }
        VAR_12->gl_shaders = VAR_10;
        VAR_12->shader_array_size = VAR_9;
    }

    VAR_12->gl_shaders[VAR_12->num_gl_shaders].args = *VAR_6;

    if (!FUNC_9(&VAR_11))
    {
        FUNC_0("Failed to initialize shader buffer.\n");
        return 0;
    }

    VAR_13 = FUNC_7(VAR_3, VAR_4, &VAR_11, VAR_6,
            &VAR_12->gl_shaders[VAR_12->num_gl_shaders],
            VAR_7);
    FUNC_8(&VAR_11);
    VAR_12->gl_shaders[VAR_12->num_gl_shaders].prgId = VAR_13;

    return &VAR_12->gl_shaders[VAR_12->num_gl_shaders++];
}

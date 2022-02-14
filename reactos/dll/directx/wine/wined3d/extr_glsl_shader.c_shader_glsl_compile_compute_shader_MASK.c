
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader {int reg_maps; int linked_programs; struct glsl_shader_prog_link* backend_data; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; struct glsl_context_data* shader_backend_data; } ;
struct shader_glsl_priv {int string_buffers; struct wined3d_string_buffer shader_buffer; } ;
struct TYPE_15__ {int shader_entry; struct wined3d_shader* id; } ;
struct TYPE_14__ {int * np2_fixup_info; scalar_t__ id; } ;
struct TYPE_13__ {scalar_t__ id; } ;
struct TYPE_12__ {scalar_t__ id; } ;
struct TYPE_11__ {scalar_t__ id; } ;
struct TYPE_10__ {scalar_t__ id; } ;
struct TYPE_9__ {struct glsl_cs_compiled_shader* cs; } ;
struct glsl_shader_prog_link {int shader_array_size; scalar_t__ constant_update_mask; TYPE_7__ cs; TYPE_6__ ps; scalar_t__ shader_controlled_clip_distances; scalar_t__ constant_version; TYPE_5__ gs; TYPE_4__ ds; TYPE_3__ hs; TYPE_2__ vs; struct wined3d_shader* id; int num_gl_shaders; TYPE_1__ gl_shaders; } ;
struct glsl_shader_private {int shader_array_size; scalar_t__ constant_update_mask; TYPE_7__ cs; TYPE_6__ ps; scalar_t__ shader_controlled_clip_distances; scalar_t__ constant_version; TYPE_5__ gs; TYPE_4__ ds; TYPE_3__ hs; TYPE_2__ vs; struct wined3d_shader* id; int num_gl_shaders; TYPE_1__ gl_shaders; } ;
struct glsl_cs_compiled_shader {struct wined3d_shader* id; } ;
struct glsl_context_data {TYPE_8__* glsl_program; } ;
struct TYPE_16__ {struct wined3d_shader* id; } ;
typedef int HRESULT ;
typedef struct wined3d_shader* GLuint ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct wined3d_shader* FUNC_1 (int ) ;
 int FUNC_2 (char*,struct wined3d_shader*,...) ;
 int VAR_1 ;
 int FUNC_3 (struct shader_glsl_priv*,struct glsl_shader_prog_link*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct wined3d_shader*,struct wined3d_shader*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct wined3d_shader*) ;
 int FUNC_8 (struct wined3d_shader*) ;
 void* FUNC_9 (int) ;
 struct glsl_shader_prog_link* FUNC_10 (int) ;
 int FUNC_11 (struct glsl_shader_prog_link*) ;
 int FUNC_12 (int *,int *) ;
 struct wined3d_shader* FUNC_13 (struct wined3d_context const*,struct wined3d_string_buffer*,int *,struct wined3d_shader*) ;
 int FUNC_14 (struct wined3d_gl_info const*,struct shader_glsl_priv*,struct wined3d_shader*,int *) ;
 int FUNC_15 (struct wined3d_context const*,struct shader_glsl_priv*,struct wined3d_shader*,struct wined3d_shader*) ;
 int FUNC_16 (struct wined3d_gl_info const*,struct wined3d_shader*) ;
 int FUNC_17 (struct wined3d_string_buffer*) ;

__attribute__((used)) static HRESULT FUNC_18(struct shader_glsl_priv *VAR_2,
        const struct wined3d_context *VAR_3, struct wined3d_shader *VAR_4)
{
    struct glsl_context_data *VAR_5 = VAR_3->shader_backend_data;
    struct wined3d_string_buffer *VAR_6 = &VAR_2->shader_buffer;
    const struct wined3d_gl_info *VAR_7 = VAR_3->gl_info;
    struct glsl_cs_compiled_shader *VAR_8;
    struct glsl_shader_private *VAR_9;
    struct glsl_shader_prog_link *VAR_10;
    GLuint VAR_11, VAR_12;

    if (!(VAR_10 = FUNC_9(sizeof(*VAR_10))))
    {
        FUNC_0("Out of memory.\n");
        return VAR_0;
    }

    if (!(VAR_4->backend_data = FUNC_10(sizeof(*VAR_9))))
    {
        FUNC_0("Failed to allocate backend data.\n");
        FUNC_11(VAR_10);
        return VAR_0;
    }
    VAR_9 = VAR_4->backend_data;
    VAR_8 = VAR_9->gl_shaders.cs;

    if (!(VAR_9->gl_shaders.cs = FUNC_9(sizeof(*VAR_8))))
    {
        FUNC_0("Failed to allocate GL shader array.\n");
        FUNC_11(VAR_10);
        FUNC_11(VAR_4->backend_data);
        VAR_4->backend_data = ((void*)0);
        return VAR_0;
    }
    VAR_9->shader_array_size = 1;
    VAR_8 = VAR_9->gl_shaders.cs;

    FUNC_2("Compiling compute shader %p.\n", VAR_4);

    FUNC_17(VAR_6);
    VAR_11 = FUNC_13(VAR_3, VAR_6, &VAR_2->string_buffers, VAR_4);
    VAR_8[VAR_9->num_gl_shaders++].id = VAR_11;

    VAR_12 = FUNC_1(FUNC_6());
    FUNC_2("Created new GLSL shader program %u.\n", VAR_12);

    VAR_10->id = VAR_12;
    VAR_10->vs.id = 0;
    VAR_10->hs.id = 0;
    VAR_10->ds.id = 0;
    VAR_10->gs.id = 0;
    VAR_10->ps.id = 0;
    VAR_10->cs.id = VAR_11;
    VAR_10->constant_version = 0;
    VAR_10->shader_controlled_clip_distances = 0;
    VAR_10->ps.np2_fixup_info = ((void*)0);
    FUNC_3(VAR_2, VAR_10);

    FUNC_2("Attaching GLSL shader object %u to program %u.\n", VAR_11, VAR_12);
    FUNC_1(FUNC_5(VAR_12, VAR_11));
    FUNC_4("glAttachShader");

    FUNC_12(&VAR_4->linked_programs, &VAR_10->cs.shader_entry);

    FUNC_2("Linking GLSL shader program %u.\n", VAR_12);
    FUNC_1(FUNC_7(VAR_12));
    FUNC_16(VAR_7, VAR_12);

    FUNC_1(FUNC_8(VAR_12));
    FUNC_4("glUseProgram");
    FUNC_15(VAR_3, VAR_2, VAR_12, VAR_4);
    FUNC_14(VAR_7, VAR_2, VAR_12, &VAR_4->reg_maps);

    VAR_10->constant_update_mask = 0;

    FUNC_1(FUNC_8(VAR_5->glsl_program ? VAR_5->glsl_program->id : 0));
    FUNC_4("glUseProgram");
    return VAR_1;
}

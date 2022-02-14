
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer_list {int dummy; } ;
struct wined3d_string_buffer {int buffer; } ;
struct wined3d_shader_thread_group_size {int z; int y; int x; } ;
struct wined3d_shader_reg_maps {unsigned int tgsm_count; TYPE_3__* tgsm; } ;
struct TYPE_4__ {struct wined3d_shader_thread_group_size thread_group_size; } ;
struct TYPE_5__ {TYPE_1__ cs; } ;
struct wined3d_shader {struct wined3d_shader_reg_maps reg_maps; TYPE_2__ u; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct shader_glsl_ctx_priv {struct wined3d_string_buffer_list* string_buffers; } ;
typedef int priv_ctx ;
struct TYPE_6__ {scalar_t__ size; } ;
typedef int GLuint ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct shader_glsl_ctx_priv*,int ,int) ;
 int FUNC_4 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_5 (struct wined3d_shader const*,struct wined3d_string_buffer*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*,int *,int *) ;
 int FUNC_6 (struct wined3d_context const*,struct wined3d_string_buffer*,struct wined3d_shader const*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*) ;
 int FUNC_7 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;
 int FUNC_8 (struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_9 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;

__attribute__((used)) static GLuint FUNC_10(const struct wined3d_context *VAR_1,
        struct wined3d_string_buffer *VAR_2, struct wined3d_string_buffer_list *VAR_3,
        const struct wined3d_shader *VAR_4)
{
    const struct wined3d_shader_thread_group_size *VAR_5 = &VAR_4->u.cs.thread_group_size;
    const struct wined3d_shader_reg_maps *VAR_6 = &VAR_4->reg_maps;
    const struct wined3d_gl_info *VAR_7 = VAR_1->gl_info;
    struct shader_glsl_ctx_priv VAR_8;
    GLuint VAR_9;
    unsigned int VAR_10;

    FUNC_3(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.string_buffers = VAR_3;

    FUNC_7(VAR_2, VAR_7);

    FUNC_9(VAR_2, VAR_7);
    FUNC_4(VAR_2, "#extension GL_ARB_compute_shader : enable\n");

    FUNC_6(VAR_1, VAR_2, VAR_4, VAR_6, &VAR_8);

    for (VAR_10 = 0; VAR_10 < VAR_6->tgsm_count; ++VAR_10)
    {
        if (VAR_6->tgsm[VAR_10].size)
            FUNC_4(VAR_2, "shared uint cs_g%u[%u];\n", VAR_10, VAR_6->tgsm[VAR_10].size);
    }

    FUNC_4(VAR_2, "layout(local_size_x = %u, local_size_y = %u, local_size_z = %u) in;\n",
            VAR_5->x, VAR_5->y, VAR_5->z);

    FUNC_4(VAR_2, "void main()\n{\n");
    FUNC_5(VAR_4, VAR_2, VAR_6, &VAR_8, ((void*)0), ((void*)0));
    FUNC_4(VAR_2, "}\n");

    VAR_9 = FUNC_0(FUNC_2(VAR_0));
    FUNC_1("Compiling shader object %u.\n", VAR_9);
    FUNC_8(VAR_7, VAR_9, VAR_2->buffer);

    return VAR_9;
}

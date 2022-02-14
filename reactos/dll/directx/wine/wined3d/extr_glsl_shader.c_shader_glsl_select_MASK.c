
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct wined3d_gl_info {scalar_t__* supported; } ;
struct wined3d_context {unsigned int shader_update_mask; int constant_update_mask; struct wined3d_gl_info* gl_info; struct glsl_context_data* shader_backend_data; } ;
struct shader_glsl_priv {TYPE_2__* fragment_pipe; TYPE_1__* vertex_pipe; } ;
struct TYPE_6__ {scalar_t__ vertex_color_clamp; } ;
struct glsl_shader_prog_link {int constant_update_mask; int clip_distance_mask; scalar_t__ shader_controlled_clip_distances; TYPE_3__ vs; int id; } ;
struct glsl_context_data {scalar_t__ vertex_color_clamp; struct glsl_shader_prog_link* glsl_program; } ;
struct TYPE_5__ {int (* enable_extension ) (struct wined3d_gl_info const*,int) ;} ;
struct TYPE_4__ {int (* vp_enable ) (struct wined3d_gl_info const*,int) ;} ;
typedef int GLuint ;
typedef scalar_t__ GLenum ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int ) ;
 unsigned int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wined3d_context*,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct wined3d_context*,struct wined3d_state const*,struct shader_glsl_priv*,struct glsl_context_data*) ;
 int FUNC_8 (struct wined3d_gl_info const*,int) ;
 int FUNC_9 (struct wined3d_gl_info const*,int) ;
 int FUNC_10 (struct wined3d_state const*) ;
 int FUNC_11 (struct wined3d_state const*) ;

__attribute__((used)) static void FUNC_12(void *VAR_4, struct wined3d_context *VAR_5,
        const struct wined3d_state *VAR_6)
{
    struct glsl_context_data *VAR_7 = VAR_5->shader_backend_data;
    const struct wined3d_gl_info *VAR_8 = VAR_5->gl_info;
    struct shader_glsl_priv *VAR_9 = VAR_4;
    struct glsl_shader_prog_link *VAR_10;
    GLenum VAR_11;
    GLuint VAR_12, VAR_13;

    VAR_9->vertex_pipe->vp_enable(VAR_8, !FUNC_11(VAR_6));
    VAR_9->fragment_pipe->enable_extension(VAR_8, !FUNC_10(VAR_6));

    VAR_13 = VAR_7->glsl_program ? VAR_7->glsl_program->id : 0;
    FUNC_7(VAR_5, VAR_6, VAR_9, VAR_7);
    VAR_10 = VAR_7->glsl_program;

    if (VAR_10)
    {
        VAR_12 = VAR_10->id;
        VAR_11 = VAR_10->vs.vertex_color_clamp;
        if (VAR_10->shader_controlled_clip_distances)
            FUNC_4(VAR_5, VAR_10->clip_distance_mask);
    }
    else
    {
        VAR_12 = 0;
        VAR_11 = VAR_2;
    }

    if (VAR_7->vertex_color_clamp != VAR_11)
    {
        VAR_7->vertex_color_clamp = VAR_11;
        if (VAR_8->supported[VAR_0])
        {
            FUNC_1(FUNC_5(VAR_1, VAR_11));
            FUNC_3("glClampColorARB");
        }
        else
        {
            FUNC_0("Vertex color clamp needs to be changed, but extension not supported.\n");
        }
    }

    FUNC_2("Using GLSL program %u.\n", VAR_12);

    if (VAR_13 != VAR_12)
    {
        FUNC_1(FUNC_6(VAR_12));
        FUNC_3("glUseProgram");

        if (VAR_10)
            VAR_5->constant_update_mask |= VAR_10->constant_update_mask;
    }

    VAR_5->shader_update_mask |= (1u << VAR_3);
}

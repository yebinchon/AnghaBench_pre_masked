
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_state {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {unsigned int shader_update_mask; struct wined3d_gl_info* gl_info; struct glsl_context_data* shader_backend_data; } ;
struct shader_glsl_priv {int dummy; } ;
struct glsl_context_data {TYPE_1__* glsl_program; } ;
struct TYPE_2__ {int id; } ;
typedef int GLuint ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wined3d_context*,struct wined3d_state const*,struct shader_glsl_priv*,struct glsl_context_data*) ;

__attribute__((used)) static void FUNC_5(void *VAR_5, struct wined3d_context *VAR_6,
        const struct wined3d_state *VAR_7)
{
    struct glsl_context_data *VAR_8 = VAR_6->shader_backend_data;
    const struct wined3d_gl_info *VAR_9 = VAR_6->gl_info;
    struct shader_glsl_priv *VAR_10 = VAR_5;
    GLuint VAR_11, VAR_12;

    VAR_12 = VAR_8->glsl_program ? VAR_8->glsl_program->id : 0;
    FUNC_4(VAR_6, VAR_7, VAR_10, VAR_8);
    VAR_11 = VAR_8->glsl_program ? VAR_8->glsl_program->id : 0;

    FUNC_1("Using GLSL program %u.\n", VAR_11);

    if (VAR_12 != VAR_11)
    {
        FUNC_0(FUNC_3(VAR_11));
        FUNC_2("glUseProgram");
    }

    VAR_6->shader_update_mask |= (1u << VAR_3)
            | (1u << VAR_4)
            | (1u << VAR_1)
            | (1u << VAR_2)
            | (1u << VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_gl_info {scalar_t__* supported; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; struct glsl_context_data* shader_backend_data; } ;
struct shader_glsl_priv {TYPE_2__* fragment_pipe; TYPE_1__* vertex_pipe; } ;
struct glsl_context_data {int vertex_color_clamp; } ;
struct TYPE_4__ {int (* enable_extension ) (struct wined3d_gl_info const*,int ) ;} ;
struct TYPE_3__ {int (* vp_enable ) (struct wined3d_gl_info const*,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct wined3d_gl_info const*) ;
 int FUNC_5 (struct wined3d_context*) ;
 int FUNC_6 (struct wined3d_gl_info const*,int ) ;
 int FUNC_7 (struct wined3d_gl_info const*,int ) ;

__attribute__((used)) static void FUNC_8(void *VAR_4, struct wined3d_context *VAR_5)
{
    struct glsl_context_data *VAR_6 = VAR_5->shader_backend_data;
    const struct wined3d_gl_info *VAR_7 = VAR_5->gl_info;
    struct shader_glsl_priv *VAR_8 = VAR_4;

    FUNC_5(VAR_5);
    FUNC_0(FUNC_3(0));
    FUNC_1("glUseProgram");

    VAR_8->vertex_pipe->vp_enable(VAR_7, VAR_1);
    VAR_8->fragment_pipe->enable_extension(VAR_7, VAR_1);

    if (FUNC_4(VAR_7) && VAR_7->supported[VAR_0])
    {
        VAR_6->vertex_color_clamp = VAR_3;
        FUNC_0(FUNC_2(VAR_2, VAR_3));
        FUNC_1("glClampColorARB");
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_device {TYPE_1__* adapter; struct shader_glsl_priv* vertex_priv; } ;
struct shader_glsl_priv {int ffp_vertex_shaders; } ;
struct glsl_ffp_destroy_ctx {int * gl_info; struct shader_glsl_priv* priv; } ;
struct TYPE_2__ {int gl_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct glsl_ffp_destroy_ctx*) ;

__attribute__((used)) static void FUNC_1(struct wined3d_device *VAR_1)
{
    struct shader_glsl_priv *VAR_2 = VAR_1->vertex_priv;
    struct glsl_ffp_destroy_ctx VAR_3;

    VAR_3.priv = VAR_2;
    VAR_3.gl_info = &VAR_1->adapter->gl_info;
    FUNC_0(&VAR_2->ffp_vertex_shaders, VAR_0, &VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_shader {struct glsl_shader_private* backend_data; } ;
struct wined3d_context {int dummy; } ;
struct shader_glsl_priv {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cs; } ;
struct glsl_shader_private {TYPE_2__ gl_shaders; } ;
struct TYPE_3__ {int id; } ;
typedef int GLuint ;


 int FUNC_0 (char*,struct wined3d_shader*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,struct wined3d_shader*) ;
 int FUNC_3 (struct shader_glsl_priv*,struct wined3d_context const*,struct wined3d_shader*) ;

__attribute__((used)) static GLuint FUNC_4(const struct wined3d_context *VAR_0,
        struct shader_glsl_priv *VAR_1, struct wined3d_shader *VAR_2)
{
    struct glsl_shader_private *VAR_3;

    if (!VAR_2->backend_data)
    {
        FUNC_2("Failed to find GLSL program for compute shader %p.\n", VAR_2);
        if (FUNC_1(FUNC_3(VAR_1, VAR_0, VAR_2)))
        {
            FUNC_0("Failed to compile compute shader %p.\n", VAR_2);
            return 0;
        }
    }
    VAR_3 = VAR_2->backend_data;
    return VAR_3->gl_shaders.cs[0].id;
}

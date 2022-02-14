
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_context {struct shader_glsl_ctx_priv* backend_data; } ;
struct shader_glsl_ctx_priv {int string_buffers; } ;
struct glsl_sample_function {int name; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct wined3d_shader_context *VAR_0,
        struct glsl_sample_function *VAR_1)
{
    const struct shader_glsl_ctx_priv *VAR_2 = VAR_0->backend_data;

    FUNC_0(VAR_2->string_buffers, VAR_1->name);
}

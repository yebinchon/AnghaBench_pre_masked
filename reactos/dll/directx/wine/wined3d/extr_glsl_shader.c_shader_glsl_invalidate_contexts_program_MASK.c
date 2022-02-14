
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_device {unsigned int context_count; struct wined3d_context** contexts; } ;
struct wined3d_context {struct glsl_context_data* shader_backend_data; } ;
struct glsl_shader_prog_link {int dummy; } ;
struct glsl_context_data {struct glsl_shader_prog_link const* glsl_program; } ;


 int FUNC_0 (struct wined3d_context*) ;

__attribute__((used)) static void FUNC_1(struct wined3d_device *VAR_0,
        const struct glsl_shader_prog_link *VAR_1)
{
    const struct glsl_context_data *VAR_2;
    struct wined3d_context *VAR_3;
    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0->context_count; ++VAR_4)
    {
        VAR_3 = VAR_0->contexts[VAR_4];
        VAR_2 = VAR_3->shader_backend_data;

        if (VAR_2->glsl_program == VAR_1)
            FUNC_0(VAR_3);
    }
}

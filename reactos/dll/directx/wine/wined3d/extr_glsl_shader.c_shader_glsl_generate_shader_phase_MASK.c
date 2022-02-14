
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_reg_maps {int dummy; } ;
struct wined3d_shader_phase {unsigned int temporary_count; int end; int start; scalar_t__ instance_count; } ;
struct wined3d_shader {int dummy; } ;
struct shader_glsl_ctx_priv {int dummy; } ;
typedef int HRESULT ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_1 (struct wined3d_shader const*,struct wined3d_string_buffer*,struct wined3d_shader_reg_maps const*,struct shader_glsl_ctx_priv*,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_2(const struct wined3d_shader *VAR_0,
        struct wined3d_string_buffer *VAR_1, const struct wined3d_shader_reg_maps *VAR_2,
        struct shader_glsl_ctx_priv *VAR_3, const struct wined3d_shader_phase *VAR_4,
        const char *VAR_5, unsigned VAR_6)
{
    unsigned int VAR_7;
    HRESULT VAR_8;

    FUNC_0(VAR_1, "void hs_%s_phase%u(%s)\n{\n",
            VAR_5, VAR_6, VAR_4->instance_count ? "int phase_instance_id" : "");
    for (VAR_7 = 0; VAR_7 < VAR_4->temporary_count; ++VAR_7)
        FUNC_0(VAR_1, "vec4 R%u;\n", VAR_7);
    VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4->start, VAR_4->end);
    FUNC_0(VAR_1, "}\n");
    return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_context {struct wined3d_shader* shader; struct wined3d_string_buffer* buffer; struct wined3d_gl_info* gl_info; struct shader_glsl_ctx_priv* backend_data; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ shader_version; } ;
struct wined3d_shader {TYPE_2__ reg_maps; } ;
struct wined3d_gl_info {int dummy; } ;
struct shader_glsl_ctx_priv {int cur_ds_args; int cur_vs_args; int cur_ps_args; } ;


 int FUNC_0 (char*,int) ;





 int FUNC_1 (struct wined3d_gl_info const*,struct wined3d_string_buffer*,struct wined3d_shader const*,int ) ;
 int FUNC_2 (struct wined3d_gl_info const*,struct wined3d_string_buffer*,struct wined3d_shader const*,int ) ;
 int FUNC_3 (struct wined3d_gl_info const*,struct wined3d_string_buffer*,struct wined3d_shader const*,int ) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_context *VAR_0)
{
    const struct shader_glsl_ctx_priv *VAR_1 = VAR_0->backend_data;
    const struct wined3d_gl_info *VAR_2 = VAR_0->gl_info;
    struct wined3d_string_buffer *VAR_3 = VAR_0->buffer;
    const struct wined3d_shader *VAR_4 = VAR_0->shader;

    switch (VAR_4->reg_maps.shader_version.type)
    {
        case 129:
            FUNC_2(VAR_2, VAR_3, VAR_4, VAR_1->cur_ps_args);
            break;
        case 128:
            FUNC_3(VAR_2, VAR_3, VAR_4, VAR_1->cur_vs_args);
            break;
        case 131:
            FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1->cur_ds_args);
            break;
        case 130:
        case 132:
            break;
        default:
            FUNC_0("Unhandled shader type %#x.\n", VAR_4->reg_maps.shader_version.type);
            break;
    }
}

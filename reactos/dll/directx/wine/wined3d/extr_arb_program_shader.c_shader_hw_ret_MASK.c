
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {TYPE_2__* ctx; } ;
struct wined3d_shader {int backend_data; } ;
struct shader_arb_ctx_priv {scalar_t__ target_version; int cur_vs_args; scalar_t__ in_main_func; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_6__ {TYPE_1__ shader_version; } ;
struct TYPE_5__ {int gl_info; TYPE_3__* reg_maps; struct wined3d_shader* shader; struct shader_arb_ctx_priv* backend_data; struct wined3d_string_buffer* buffer; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct shader_arb_ctx_priv*,int ,int ,TYPE_3__*,int ,struct wined3d_string_buffer*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_1)
{
    struct wined3d_string_buffer *VAR_2 = VAR_1->ctx->buffer;
    struct shader_arb_ctx_priv *VAR_3 = VAR_1->ctx->backend_data;
    const struct wined3d_shader *VAR_4 = VAR_1->ctx->shader;
    BOOL VAR_5 = FUNC_1(VAR_1->ctx->reg_maps->shader_version.type);

    if(VAR_3->target_version == VAR_0) return;

    if(VAR_5)
    {
        if (VAR_3->in_main_func) FUNC_2(VAR_3, VAR_4->backend_data,
                VAR_3->cur_vs_args, VAR_1->ctx->reg_maps, VAR_1->ctx->gl_info, VAR_2);
    }

    FUNC_0(VAR_2, "RET;\n");
}

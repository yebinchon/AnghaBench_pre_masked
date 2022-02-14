
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {TYPE_4__* src; TYPE_1__* ctx; } ;
struct shader_arb_ctx_priv {scalar_t__ target_version; int in_main_func; } ;
struct TYPE_6__ {TYPE_3__* idx; } ;
struct TYPE_8__ {TYPE_2__ reg; } ;
struct TYPE_7__ {int offset; } ;
struct TYPE_5__ {struct shader_arb_ctx_priv* backend_data; struct wined3d_string_buffer* buffer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,int ) ;

__attribute__((used)) static void FUNC_1(const struct wined3d_shader_instruction *VAR_2)
{
    struct wined3d_string_buffer *VAR_3 = VAR_2->ctx->buffer;
    struct shader_arb_ctx_priv *VAR_4 = VAR_2->ctx->backend_data;

    VAR_4->in_main_func = VAR_1;



    if(VAR_4->target_version == VAR_0) return;

    FUNC_0(VAR_3, "l%u:\n", VAR_2->src[0].reg.idx[0].offset);
}

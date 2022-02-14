
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {scalar_t__ handler_idx; int * src; struct wined3d_shader_dst_param* dst; TYPE_1__* ctx; } ;
struct TYPE_8__ {TYPE_2__* idx; } ;
struct wined3d_shader_dst_param {TYPE_3__ reg; } ;
struct shader_arb_ctx_priv {TYPE_5__* cur_ps_args; } ;
struct TYPE_9__ {int tex_transform; } ;
struct TYPE_10__ {TYPE_4__ super; } ;
struct TYPE_7__ {int offset; } ;
struct TYPE_6__ {struct wined3d_string_buffer* buffer; struct shader_arb_ctx_priv* backend_data; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param*,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int *,int ,char*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int,char*,char*,int ,int *,int *) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_3)
{
    struct shader_arb_ctx_priv *VAR_4 = VAR_3->ctx->backend_data;
    const struct wined3d_shader_dst_param *VAR_5 = &VAR_3->dst[0];
    struct wined3d_string_buffer *VAR_6 = VAR_3->ctx->buffer;
    char VAR_7[40], VAR_8[50], VAR_9[50];
    DWORD VAR_10;




    VAR_10 = VAR_5->reg.idx[0].offset;
    FUNC_1(VAR_3, &VAR_3->dst[0], VAR_8);
    FUNC_2(VAR_3, &VAR_3->src[0], 0, VAR_9);
    FUNC_4(VAR_7, "fragment.texcoord[%u]", VAR_10);
    FUNC_0(VAR_6, "SWZ TB, bumpenvmat%d, x, z, 0, 0;\n", VAR_10);
    FUNC_0(VAR_6, "DP3 TA.x, TB, %s;\n", VAR_9);
    FUNC_0(VAR_6, "SWZ TB, bumpenvmat%d, y, w, 0, 0;\n", VAR_10);
    FUNC_0(VAR_6, "DP3 TA.y, TB, %s;\n", VAR_9);




    if ((VAR_4->cur_ps_args->super.tex_transform >> VAR_10 * VAR_2)
            & VAR_1)
    {
        FUNC_0(VAR_6, "RCP TB.w, %s.w;\n", VAR_7);
        FUNC_0(VAR_6, "MUL TB.xy, %s, TB.w;\n", VAR_7);
        FUNC_0(VAR_6, "ADD TA.xy, TA, TB;\n");
    } else {
        FUNC_0(VAR_6, "ADD TA.xy, TA, %s;\n", VAR_7);
    }

    FUNC_3(VAR_3, VAR_10, VAR_8, "TA", 0, ((void*)0), ((void*)0));

    if (VAR_3->handler_idx == VAR_0)
    {

        FUNC_0(VAR_6, "MAD TA, %s.z, luminance%d.x, luminance%d.y;\n",
                       VAR_9, VAR_10, VAR_10);
        FUNC_0(VAR_6, "MUL %s, %s, TA;\n", VAR_8, VAR_8);
    }
}

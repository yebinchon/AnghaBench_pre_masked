
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_src_param {int swizzle; } ;
struct TYPE_9__ {int major; int type; } ;
struct wined3d_shader_reg_maps {TYPE_2__ shader_version; } ;
struct wined3d_shader_instruction {scalar_t__ handler_idx; TYPE_7__* dst; struct wined3d_shader_src_param* src; TYPE_1__* ctx; } ;
struct TYPE_12__ {scalar_t__ color0_mov; } ;
struct TYPE_13__ {TYPE_5__ ps; } ;
struct wined3d_shader {TYPE_6__ u; struct arb_vshader_private* backend_data; } ;
struct shader_arb_ctx_priv {scalar_t__ target_version; char* addr_reg; scalar_t__ ps_post_process; } ;
struct arb_vshader_private {scalar_t__ rel_offset; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_3__* idx; } ;
struct TYPE_14__ {TYPE_4__ reg; } ;
struct TYPE_10__ {int offset; } ;
struct TYPE_8__ {struct shader_arb_ctx_priv* backend_data; struct wined3d_string_buffer* buffer; struct wined3d_shader_reg_maps* reg_maps; struct wined3d_shader* shader; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,struct wined3d_shader_src_param*,int ,char*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,TYPE_7__*,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct wined3d_shader_instruction const*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(const struct wined3d_shader_instruction *VAR_10)
{
    const struct wined3d_shader *VAR_11 = VAR_10->ctx->shader;
    const struct wined3d_shader_reg_maps *VAR_12 = VAR_10->ctx->reg_maps;
    BOOL VAR_13 = FUNC_6(VAR_12->shader_version.type);
    struct shader_arb_ctx_priv *VAR_14 = VAR_10->ctx->backend_data;
    const char *VAR_15 = FUNC_0(VAR_12->shader_version.type, VAR_4);
    const char *VAR_16 = FUNC_0(VAR_12->shader_version.type, VAR_1);
    const char *VAR_17 = FUNC_0(VAR_12->shader_version.type, VAR_2);

    struct wined3d_string_buffer *VAR_18 = VAR_10->ctx->buffer;
    char VAR_19[256];

    if (VAR_10->handler_idx == VAR_6)
    {
        const struct arb_vshader_private *VAR_20 = VAR_11->backend_data;
        char VAR_21[6];
        const char *VAR_22 = FUNC_0(VAR_9, VAR_3);

        if(VAR_14->target_version >= VAR_5) {
            FUNC_5(VAR_10);
            return;
        }
        FUNC_2(VAR_10, &VAR_10->src[0], 0, VAR_19);
        FUNC_3(VAR_10, &VAR_10->dst[0], VAR_21);
        FUNC_1(VAR_18, "SGE A0_SHADOW%s, %s, %s;\n", VAR_21, VAR_19, VAR_15);
        FUNC_1(VAR_18, "MAD A0_SHADOW%s, A0_SHADOW, %s, -%s;\n", VAR_21, VAR_17, VAR_16);

        FUNC_1(VAR_18, "ABS TA%s, %s;\n", VAR_21, VAR_19);
        FUNC_1(VAR_18, "ADD TA%s, TA, rel_addr_const.x;\n", VAR_21);
        FUNC_1(VAR_18, "FLR TA%s, TA;\n", VAR_21);
        if (VAR_20->rel_offset)
        {
            FUNC_1(VAR_18, "ADD TA%s, TA, %s;\n", VAR_21, VAR_22);
        }
        FUNC_1(VAR_18, "MUL A0_SHADOW%s, TA, A0_SHADOW;\n", VAR_21);

        ((struct shader_arb_ctx_priv *)VAR_10->ctx->backend_data)->addr_reg[0] = '\0';
    }
    else if (VAR_12->shader_version.major == 1
          && !FUNC_6(VAR_12->shader_version.type)
          && VAR_10->dst[0].reg.type == VAR_7)
    {
        const struct arb_vshader_private *VAR_23 = VAR_11->backend_data;
        VAR_19[0] = '\0';

        if (VAR_23->rel_offset && VAR_14->target_version == VAR_0)
        {
            const char *VAR_24 = FUNC_0(VAR_9, VAR_3);
            FUNC_2(VAR_10, &VAR_10->src[0], 0, VAR_19);
            FUNC_1(VAR_18, "ADD TA.x, %s, %s;\n", VAR_19, VAR_24);
            FUNC_1(VAR_18, "ARL A0.x, TA.x;\n");
        }
        else
        {



            struct wined3d_shader_src_param VAR_25 = VAR_10->src[0];
            VAR_25.swizzle = FUNC_4(VAR_25.swizzle, 0);
            FUNC_2(VAR_10, &VAR_25, 0, VAR_19);
            FUNC_1(VAR_18, "ARL A0.x, %s;\n", VAR_19);
        }
    }
    else if (VAR_10->dst[0].reg.type == VAR_8 && !VAR_10->dst[0].reg.idx[0].offset && VAR_13)
    {
        if (VAR_14->ps_post_process && VAR_11->u.ps.color0_mov)
        {
            FUNC_1(VAR_18, "#mov handled in srgb write or fog code\n");
            return;
        }
        FUNC_5(VAR_10);
    }
    else
    {
        FUNC_5(VAR_10);
    }
}

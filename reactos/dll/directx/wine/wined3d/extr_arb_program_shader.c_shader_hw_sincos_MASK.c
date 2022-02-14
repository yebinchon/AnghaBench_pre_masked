
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int * src; struct wined3d_shader_dst_param* dst; TYPE_3__* ctx; } ;
struct wined3d_shader_dst_param {int modifiers; int write_mask; int reg; } ;
struct shader_arb_ctx_priv {scalar_t__ target_version; } ;
struct TYPE_6__ {TYPE_2__* reg_maps; struct shader_arb_ctx_priv* backend_data; struct wined3d_string_buffer* buffer; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_5__ {TYPE_1__ shader_version; } ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param*,char*) ;
 char* FUNC_2 (struct wined3d_shader_instruction const*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,char*,int *) ;
 int FUNC_4 (struct wined3d_shader_instruction const*,int *,int,char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_shader_instruction *VAR_4)
{




    struct wined3d_string_buffer *VAR_5 = VAR_4->ctx->buffer;
    struct shader_arb_ctx_priv *VAR_6 = VAR_4->ctx->backend_data;
    const struct wined3d_shader_dst_param *VAR_7 = &VAR_4->dst[0];
    char VAR_8[50];
    char VAR_9[50], VAR_10[50], VAR_11[50];
    BOOL VAR_12;

    FUNC_4(VAR_4, &VAR_4->src[0], 0, VAR_9);
    if(FUNC_5(VAR_4->ctx->reg_maps->shader_version.type)) {
        FUNC_1(VAR_4, &VAR_4->dst[0], VAR_8);

        FUNC_0(VAR_5, "SCS %s, %s;\n", VAR_8, VAR_9);

        if(VAR_4->dst[0].modifiers & VAR_1)
        {
            FUNC_3(VAR_4, &VAR_7->reg, VAR_9, &VAR_12);
            FUNC_0(VAR_5, "MOV_SAT %s, %s;\n", VAR_8, VAR_9);
        }
    } else if(VAR_6->target_version >= VAR_0) {
        FUNC_3(VAR_4, &VAR_7->reg, VAR_8, &VAR_12);


        if(VAR_7->write_mask & VAR_2)
            FUNC_0(VAR_5, "COS%s %s.x, %s;\n", FUNC_2(VAR_4), VAR_8, VAR_9);
        if(VAR_7->write_mask & VAR_3)
            FUNC_0(VAR_5, "SIN%s %s.y, %s;\n", FUNC_2(VAR_4), VAR_8, VAR_9);
    } else {
        FUNC_4(VAR_4, &VAR_4->src[1], 1, VAR_10);
        FUNC_4(VAR_4, &VAR_4->src[2], 2, VAR_11);
        FUNC_3(VAR_4, &VAR_7->reg, VAR_8, &VAR_12);

        FUNC_0(VAR_5, "MUL %s.x, %s, %s;\n", VAR_8, VAR_9, VAR_9);
        FUNC_0(VAR_5, "MUL TA.y, %s.x, %s;\n", VAR_8, VAR_9);
        FUNC_0(VAR_5, "MUL %s.y, TA.y, %s;\n", VAR_8, VAR_9);
        FUNC_0(VAR_5, "MUL TA.z, %s.y, %s;\n", VAR_8, VAR_9);
        FUNC_0(VAR_5, "MUL %s.z, TA.z, %s;\n", VAR_8, VAR_9);
        FUNC_0(VAR_5, "MUL TA.w, %s.z, %s;\n", VAR_8, VAR_9);
        FUNC_0(VAR_5, "MUL TA.x, %s, %s.w;\n", VAR_9, VAR_11);
        FUNC_0(VAR_5, "MAD TA.x, TA.y, %s.x, TA.x;\n", VAR_11);
        FUNC_0(VAR_5, "MAD TA.x, TA.z, %s.w, TA.x;\n", VAR_10);
        FUNC_0(VAR_5, "MAD TA.x, TA.w, %s.x, TA.x;\n", VAR_10);


        FUNC_0(VAR_5, "MAD TA.y, %s.x, %s.y, %s.z;\n", VAR_8, VAR_11, VAR_11);
        FUNC_0(VAR_5, "MAD TA.y, %s.y, %s.z, TA.y;\n", VAR_8, VAR_10);
        FUNC_0(VAR_5, "MAD TA.y, %s.z, %s.y, TA.y;\n", VAR_8, VAR_10);

        if(VAR_7->write_mask & VAR_2) {

            FUNC_0(VAR_5, "MUL TA.z, TA.y, TA.y;\n");
            FUNC_0(VAR_5, "MAD %s.x, -TA.x, TA.x, TA.z;\n", VAR_8);
        }
        if(VAR_7->write_mask & VAR_3) {

            FUNC_0(VAR_5, "MUL %s.y, TA.x, TA.y;\n", VAR_8);
            FUNC_0(VAR_5, "ADD %s.y, %s.y, %s.y;\n", VAR_8, VAR_8, VAR_8);
        }
    }
}

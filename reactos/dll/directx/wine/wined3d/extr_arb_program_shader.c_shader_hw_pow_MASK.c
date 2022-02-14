
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_src_param {int modifiers; } ;
struct wined3d_shader_instruction {TYPE_3__* ctx; struct wined3d_shader_src_param* src; int * dst; } ;
struct shader_arb_ctx_priv {scalar_t__ target_version; } ;
struct TYPE_6__ {TYPE_2__* reg_maps; struct shader_arb_ctx_priv* backend_data; struct wined3d_string_buffer* buffer; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_5__ {TYPE_1__ shader_version; } ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__*) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,char*) ;
 char* FUNC_4 (struct wined3d_shader_instruction const*) ;
 int FUNC_5 (struct wined3d_shader_instruction const*,struct wined3d_shader_src_param*,int,char*) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_shader_instruction *VAR_5)
{
    struct wined3d_string_buffer *VAR_6 = VAR_5->ctx->buffer;
    char VAR_7[50], VAR_8[50], VAR_9[50];
    struct wined3d_shader_src_param VAR_10 = VAR_5->src[0];
    BOOL VAR_11 = VAR_3;
    struct shader_arb_ctx_priv *VAR_12 = VAR_5->ctx->backend_data;
    const char *VAR_13 = FUNC_1(VAR_5->ctx->reg_maps->shader_version.type, VAR_1);


    VAR_10.modifiers = FUNC_0(VAR_10.modifiers, &VAR_11);

    FUNC_3(VAR_5, &VAR_5->dst[0], VAR_9);
    FUNC_5(VAR_5, &VAR_10, 0, VAR_7);
    FUNC_5(VAR_5, &VAR_5->src[1], 1, VAR_8);

    if (VAR_11)
        FUNC_2(VAR_6, "ABS TA.x, %s;\n", VAR_7);
    else
        FUNC_2(VAR_6, "MOV TA.x, %s;\n", VAR_7);

    if (VAR_12->target_version >= VAR_4)
    {
        FUNC_2(VAR_6, "MOVC TA.y, %s;\n", VAR_8);
        FUNC_2(VAR_6, "POW%s %s, TA.x, TA.y;\n", FUNC_4(VAR_5), VAR_9);
        FUNC_2(VAR_6, "MOV %s (EQ.y), %s;\n", VAR_9, VAR_13);
    }
    else
    {
        const char *VAR_14 = FUNC_1(VAR_5->ctx->reg_maps->shader_version.type, VAR_2);
        const char *VAR_15 = FUNC_1(VAR_5->ctx->reg_maps->shader_version.type, VAR_0);

        FUNC_2(VAR_6, "ABS TA.y, %s;\n", VAR_8);
        FUNC_2(VAR_6, "SGE TA.y, -TA.y, %s;\n", VAR_14);

        FUNC_2(VAR_6, "MAD TA.z, TA.y, %s, %s;\n", VAR_15, VAR_8);
        FUNC_2(VAR_6, "POW%s TA.x, TA.x, TA.z;\n", FUNC_4(VAR_5));
        FUNC_2(VAR_6, "MAD TA.x, -TA.x, TA.y, TA.x;\n");
        FUNC_2(VAR_6, "MAD %s, TA.y, %s, TA.x;\n", VAR_9, VAR_13);
    }
}

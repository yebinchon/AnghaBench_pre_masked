
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_src_param {int modifiers; int reg; } ;
struct wined3d_shader_instruction {TYPE_3__* ctx; } ;
struct shader_arb_ctx_priv {int target_version; } ;
struct TYPE_6__ {TYPE_2__* reg_maps; struct shader_arb_ctx_priv* backend_data; struct wined3d_string_buffer* buffer; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_5__ {TYPE_1__ shader_version; } ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,char,char const*,...) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int *,char*,scalar_t__*) ;
 int FUNC_3 (struct wined3d_shader_src_param const*,scalar_t__,char*) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_5,
        const struct wined3d_shader_src_param *VAR_6, unsigned int VAR_7, char *VAR_8)
{

    BOOL VAR_9 = VAR_2, VAR_10;
    char VAR_11[256];
    char VAR_12[20];
    struct wined3d_string_buffer *VAR_13 = VAR_5->ctx->buffer;
    struct shader_arb_ctx_priv *VAR_14 = VAR_5->ctx->backend_data;
    const char *VAR_15 = FUNC_0(VAR_5->ctx->reg_maps->shader_version.type, VAR_0);
    const char *VAR_16 = FUNC_0(VAR_5->ctx->reg_maps->shader_version.type, VAR_1);


    VAR_10 = VAR_4;


    FUNC_2(VAR_5, &VAR_6->reg, VAR_11, &VAR_9);
    FUNC_3(VAR_6, VAR_9, VAR_12);

    switch (VAR_6->modifiers)
    {
    case 132:
        FUNC_4(VAR_8, "%s%s", VAR_11, VAR_12);
        VAR_10 = VAR_2;
        break;
    case 133:
        FUNC_4(VAR_8, "-%s%s", VAR_11, VAR_12);
        VAR_10 = VAR_2;
        break;
    case 138:
        FUNC_1(VAR_13, "ADD T%c, %s, -coefdiv.x;\n", 'A' + VAR_7, VAR_11);
        break;
    case 137:
        FUNC_1(VAR_13, "ADD T%c, -%s, coefdiv.x;\n", 'A' + VAR_7, VAR_11);
        break;
    case 131:
        FUNC_1(VAR_13, "MAD T%c, %s, %s, -%s;\n", 'A' + VAR_7, VAR_11, VAR_16, VAR_15);
        break;
    case 130:
        FUNC_1(VAR_13, "MAD T%c, %s, -%s, %s;\n", 'A' + VAR_7, VAR_11, VAR_16, VAR_15);
        break;
    case 136:
        FUNC_1(VAR_13, "SUB T%c, %s, %s;\n", 'A' + VAR_7, VAR_15, VAR_11);
        break;
    case 129:
        FUNC_1(VAR_13, "ADD T%c, %s, %s;\n", 'A' + VAR_7, VAR_11, VAR_11);
        break;
    case 128:
        FUNC_1(VAR_13, "ADD T%c, -%s, -%s;\n", 'A' + VAR_7, VAR_11, VAR_11);
        break;
    case 134:
        FUNC_1(VAR_13, "RCP T%c, %s.z;\n", 'A' + VAR_7, VAR_11);
        FUNC_1(VAR_13, "MUL T%c, %s, T%c;\n", 'A' + VAR_7, VAR_11, 'A' + VAR_7);
        break;
    case 135:
        FUNC_1(VAR_13, "RCP T%c, %s.w;\n", 'A' + VAR_7, VAR_11);
        FUNC_1(VAR_13, "MUL T%c, %s, T%c;\n", 'A' + VAR_7, VAR_11, 'A' + VAR_7);
        break;
    case 140:
        if(VAR_14->target_version >= VAR_3) {
            FUNC_4(VAR_8, "|%s%s|", VAR_11, VAR_12);
            VAR_10 = VAR_2;
        } else {
            FUNC_1(VAR_13, "ABS T%c, %s;\n", 'A' + VAR_7, VAR_11);
        }
        break;
    case 139:
        if(VAR_14->target_version >= VAR_3) {
            FUNC_4(VAR_8, "-|%s%s|", VAR_11, VAR_12);
        } else {
            FUNC_1(VAR_13, "ABS T%c, %s;\n", 'A' + VAR_7, VAR_11);
            FUNC_4(VAR_8, "-T%c%s", 'A' + VAR_7, VAR_12);
        }
        VAR_10 = VAR_2;
        break;
    default:
        FUNC_4(VAR_8, "%s%s", VAR_11, VAR_12);
        VAR_10 = VAR_2;
    }


    if (VAR_10)
        FUNC_4(VAR_8, "T%c%s", 'A' + VAR_7, VAR_12);
}

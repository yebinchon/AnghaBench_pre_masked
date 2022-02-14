
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int handler_idx; int * src; TYPE_3__* ctx; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_6__ {struct wined3d_string_buffer* buffer; TYPE_2__* reg_maps; } ;
struct TYPE_4__ {int major; int minor; } ;
struct TYPE_5__ {TYPE_1__ shader_version; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;






 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_4 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_shader_instruction *VAR_1)
{
    DWORD VAR_2 = FUNC_1(VAR_1->ctx->reg_maps->shader_version.major,
            VAR_1->ctx->reg_maps->shader_version.minor);
    struct wined3d_string_buffer *VAR_3 = VAR_1->ctx->buffer;
    struct glsl_src_param VAR_4;
    const char *VAR_5, *VAR_6;
    unsigned int VAR_7;
    DWORD VAR_8;

    VAR_8 = FUNC_4(VAR_3, VAR_1);
    VAR_7 = FUNC_5(VAR_8);

    if (VAR_2 < FUNC_1(4, 0))
        VAR_8 = VAR_0;

    FUNC_3(VAR_1, &VAR_1->src[0], VAR_8, &VAR_4);

    switch (VAR_1->handler_idx)
    {
        case 133:
        case 132:
            VAR_5 = "exp2(";
            VAR_6 = ")";
            break;

        case 131:
        case 130:
            VAR_5 = "log2(abs(";
            VAR_6 = "))";
            break;

        case 129:
            VAR_5 = "1.0 / ";
            VAR_6 = "";
            break;

        case 128:
            VAR_5 = "inversesqrt(abs(";
            VAR_6 = "))";
            break;

        default:
            VAR_5 = "";
            VAR_6 = "";
            FUNC_0("Unhandled instruction %#x.\n", VAR_1->handler_idx);
            break;
    }

    if (VAR_7 > 1 && VAR_2 < FUNC_1(4, 0))
        FUNC_2(VAR_3, "vec%u(%s%s%s));\n", VAR_7, VAR_5, VAR_4.param_str, VAR_6);
    else
        FUNC_2(VAR_3, "%s%s%s);\n", VAR_5, VAR_4.param_str, VAR_6);
}

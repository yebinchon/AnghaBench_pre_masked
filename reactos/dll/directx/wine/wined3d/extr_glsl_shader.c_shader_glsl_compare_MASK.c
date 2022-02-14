
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_instruction {int handler_idx; TYPE_1__* ctx; int * src; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_2__ {int buffer; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int ) ;


 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,unsigned int,char const*,...) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_4 (int ,struct wined3d_shader_instruction const*) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_shader_instruction *VAR_0)
{
    struct glsl_src_param VAR_1;
    struct glsl_src_param VAR_2;
    DWORD VAR_3;
    unsigned int VAR_4;

    VAR_3 = FUNC_4(VAR_0->ctx->buffer, VAR_0);
    VAR_4 = FUNC_5(VAR_3);
    FUNC_3(VAR_0, &VAR_0->src[0], VAR_3, &VAR_1);
    FUNC_3(VAR_0, &VAR_0->src[1], VAR_3, &VAR_2);

    if (VAR_4 > 1) {
        const char *VAR_5;

        switch(VAR_0->handler_idx)
        {
            case 128: VAR_5 = "lessThan"; break;
            case 129: VAR_5 = "greaterThanEqual"; break;
            default: VAR_5 = "";
                FUNC_0("Can't handle opcode %s.\n", FUNC_1(VAR_0->handler_idx));
        }

        FUNC_2(VAR_0->ctx->buffer, "vec%d(%s(%s, %s)));\n", VAR_4, VAR_5,
                VAR_1.param_str, VAR_2.param_str);
    } else {
        switch(VAR_0->handler_idx)
        {
            case 128:







                FUNC_2(VAR_0->ctx->buffer, "(%s < %s) ? 1.0 : 0.0);\n",
                        VAR_1.param_str, VAR_2.param_str);
                break;
            case 129:

                FUNC_2(VAR_0->ctx->buffer, "step(%s, %s));\n", VAR_2.param_str, VAR_1.param_str);
                break;
            default:
                FUNC_0("Can't handle opcode %s.\n", FUNC_1(VAR_0->handler_idx));
        }

    }
}

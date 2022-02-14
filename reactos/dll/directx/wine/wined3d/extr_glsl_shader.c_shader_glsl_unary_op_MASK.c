
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
 int FUNC_2 (int ,char*,char const*,int ) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_4 (int ,struct wined3d_shader_instruction const*) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_0)
{
    struct glsl_src_param VAR_1;
    DWORD VAR_2;
    const char *VAR_3;

    switch (VAR_0->handler_idx)
    {
        case 129: VAR_3 = "-"; break;
        case 128: VAR_3 = "~"; break;
        default:
            VAR_3 = "<unhandled operator>";
            FUNC_0("Unhandled opcode %s.\n",
                    FUNC_1(VAR_0->handler_idx));
            break;
    }

    VAR_2 = FUNC_4(VAR_0->ctx->buffer, VAR_0);
    FUNC_3(VAR_0, &VAR_0->src[0], VAR_2, &VAR_1);
    FUNC_2(VAR_0->ctx->buffer, "%s%s);\n", VAR_3, VAR_1.param_str);
}

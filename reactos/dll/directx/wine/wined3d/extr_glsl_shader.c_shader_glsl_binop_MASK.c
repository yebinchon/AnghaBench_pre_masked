
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int handler_idx; int * src; TYPE_1__* ctx; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_2__ {struct wined3d_string_buffer* buffer; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,int ,char const*,int ) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_4 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_0)
{
    struct wined3d_string_buffer *VAR_1 = VAR_0->ctx->buffer;
    struct glsl_src_param VAR_2;
    struct glsl_src_param VAR_3;
    DWORD VAR_4;
    const char *VAR_5;


    switch (VAR_0->handler_idx)
    {
        case 138: VAR_5 = "+"; break;
        case 137: VAR_5 = "&"; break;
        case 136: VAR_5 = "/"; break;
        case 135: VAR_5 = "+"; break;
        case 134: VAR_5 = "<<"; break;
        case 133: VAR_5 = ">>"; break;
        case 132: VAR_5 = "*"; break;
        case 131: VAR_5 = "|"; break;
        case 130: VAR_5 = "-"; break;
        case 129: VAR_5 = ">>"; break;
        case 128: VAR_5 = "^"; break;
        default:
            VAR_5 = "<unhandled operator>";
            FUNC_0("Opcode %s not yet handled in GLSL.\n", FUNC_1(VAR_0->handler_idx));
            break;
    }

    VAR_4 = FUNC_4(VAR_1, VAR_0);
    FUNC_3(VAR_0, &VAR_0->src[0], VAR_4, &VAR_2);
    FUNC_3(VAR_0, &VAR_0->src[1], VAR_4, &VAR_3);
    FUNC_2(VAR_1, "%s %s %s);\n", VAR_2.param_str, VAR_5, VAR_3.param_str);
}

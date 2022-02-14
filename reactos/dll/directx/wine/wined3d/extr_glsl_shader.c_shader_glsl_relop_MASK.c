
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


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,unsigned int,char const*,int ,...) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_3 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_0)
{
    struct wined3d_string_buffer *VAR_1 = VAR_0->ctx->buffer;
    struct glsl_src_param VAR_2;
    struct glsl_src_param VAR_3;
    unsigned int VAR_4;
    DWORD VAR_5;
    const char *VAR_6;

    VAR_5 = FUNC_3(VAR_1, VAR_0);
    VAR_4 = FUNC_4(VAR_5);
    FUNC_2(VAR_0, &VAR_0->src[0], VAR_5, &VAR_2);
    FUNC_2(VAR_0, &VAR_0->src[1], VAR_5, &VAR_3);

    if (VAR_4 > 1)
    {
        switch (VAR_0->handler_idx)
        {
            case 137: VAR_6 = "equal"; break;
            case 135: VAR_6 = "equal"; break;
            case 136: VAR_6 = "greaterThanEqual"; break;
            case 134: VAR_6 = "greaterThanEqual"; break;
            case 129: VAR_6 = "greaterThanEqual"; break;
            case 131: VAR_6 = "lessThan"; break;
            case 133: VAR_6 = "lessThan"; break;
            case 128: VAR_6 = "lessThan"; break;
            case 130: VAR_6 = "notEqual"; break;
            case 132: VAR_6 = "notEqual"; break;
            default:
                VAR_6 = "<unhandled operator>";
                FUNC_0("Unhandled opcode %#x.\n", VAR_0->handler_idx);
                break;
        }

        FUNC_1(VAR_1, "uvec%u(%s(%s, %s)) * 0xffffffffu);\n",
                VAR_4, VAR_6, VAR_2.param_str, VAR_3.param_str);
    }
    else
    {
        switch (VAR_0->handler_idx)
        {
            case 137: VAR_6 = "=="; break;
            case 135: VAR_6 = "=="; break;
            case 136: VAR_6 = ">="; break;
            case 134: VAR_6 = ">="; break;
            case 129: VAR_6 = ">="; break;
            case 131: VAR_6 = "<"; break;
            case 133: VAR_6 = "<"; break;
            case 128: VAR_6 = "<"; break;
            case 130: VAR_6 = "!="; break;
            case 132: VAR_6 = "!="; break;
            default:
                VAR_6 = "<unhandled operator>";
                FUNC_0("Unhandled opcode %#x.\n", VAR_0->handler_idx);
                break;
        }

        FUNC_1(VAR_1, "%s %s %s ? 0xffffffffu : 0u);\n",
                VAR_2.param_str, VAR_6, VAR_3.param_str);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int handler_idx; int src_count; int * src; TYPE_1__* ctx; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_2__ {struct wined3d_string_buffer* buffer; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_4 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_0)
{
    struct wined3d_string_buffer *VAR_1 = VAR_0->ctx->buffer;
    struct glsl_src_param VAR_2;
    const char *VAR_3;
    DWORD VAR_4;
    unsigned VAR_5;



    switch (VAR_0->handler_idx)
    {
        case 151: VAR_3 = "abs"; break;
        case 150: VAR_3 = "bitfieldReverse"; break;
        case 149: VAR_3 = "bitCount"; break;
        case 148: VAR_3 = "dFdx"; break;
        case 147: VAR_3 = "dFdxCoarse"; break;
        case 146: VAR_3 = "dFdxFine"; break;
        case 145: VAR_3 = "ycorrection.y * dFdy"; break;
        case 144: VAR_3 = "ycorrection.y * dFdyCoarse"; break;
        case 143: VAR_3 = "ycorrection.y * dFdyFine"; break;
        case 142: VAR_3 = "findMSB"; break;
        case 141: VAR_3 = "findLSB"; break;
        case 140: VAR_3 = "findMSB"; break;
        case 139: VAR_3 = "fract"; break;
        case 138: VAR_3 = "max"; break;
        case 137: VAR_3 = "min"; break;
        case 136: VAR_3 = "max"; break;
        case 135: VAR_3 = "min"; break;
        case 134: VAR_3 = "roundEven"; break;
        case 133: VAR_3 = "floor"; break;
        case 132: VAR_3 = "ceil"; break;
        case 131: VAR_3 = "trunc"; break;
        case 130: VAR_3 = "sqrt"; break;
        case 129: VAR_3 = "max"; break;
        case 128: VAR_3 = "min"; break;
        default: VAR_3 = "";
            FUNC_0("Opcode %s not yet handled in GLSL.\n", FUNC_1(VAR_0->handler_idx));
            break;
    }

    VAR_4 = FUNC_4(VAR_1, VAR_0);


    if (VAR_0->handler_idx == 142 || VAR_0->handler_idx == 140)
        FUNC_2(VAR_1, "31 - ");
    FUNC_2(VAR_1, "%s(", VAR_3);

    if (VAR_0->src_count)
    {
        FUNC_3(VAR_0, &VAR_0->src[0], VAR_4, &VAR_2);
        FUNC_2(VAR_1, "%s", VAR_2.param_str);
        for (VAR_5 = 1; VAR_5 < VAR_0->src_count; ++VAR_5)
        {
            FUNC_3(VAR_0, &VAR_0->src[VAR_5], VAR_4, &VAR_2);
            FUNC_2(VAR_1, ", %s", VAR_2.param_str);
        }
    }

    FUNC_2(VAR_1, "));\n");
}

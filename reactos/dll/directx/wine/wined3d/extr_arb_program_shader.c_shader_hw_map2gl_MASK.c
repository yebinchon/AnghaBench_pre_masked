
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int handler_idx; unsigned int src_count; int * src; struct wined3d_shader_dst_param* dst; TYPE_1__* ctx; } ;
struct wined3d_shader_dst_param {int dummy; } ;
struct TYPE_2__ {struct wined3d_string_buffer* buffer; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,char const*,int ,char*,char*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param const*,char*) ;
 int FUNC_4 (struct wined3d_shader_instruction const*) ;
 int FUNC_5 (struct wined3d_shader_instruction const*,int *,unsigned int,char*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(const struct wined3d_shader_instruction *VAR_0)
{
    struct wined3d_string_buffer *VAR_1 = VAR_0->ctx->buffer;
    const char *VAR_2;
    char VAR_3[256], VAR_4[50];
    unsigned int VAR_5;
    const struct wined3d_shader_dst_param *VAR_6 = &VAR_0->dst[0];

    switch (VAR_0->handler_idx)
    {
        case 146: VAR_2 = "ABS"; break;
        case 145: VAR_2 = "ADD"; break;
        case 144: VAR_2 = "XPD"; break;
        case 143: VAR_2 = "DP3"; break;
        case 142: VAR_2 = "DP4"; break;
        case 141: VAR_2 = "DST"; break;
        case 139: VAR_2 = "FRC"; break;
        case 138: VAR_2 = "LIT"; break;
        case 137: VAR_2 = "LRP"; break;
        case 136: VAR_2 = "MAD"; break;
        case 135: VAR_2 = "MAX"; break;
        case 134: VAR_2 = "MIN"; break;
        case 133: VAR_2 = "MOV"; break;
        case 131: VAR_2 = "MUL"; break;
        case 130: VAR_2 = "SGE"; break;
        case 129: VAR_2 = "SLT"; break;
        case 128: VAR_2 = "SUB"; break;
        case 132:VAR_2 = "ARR"; break;
        case 140: VAR_2 = "DDX"; break;
        default: VAR_2 = "";
            FUNC_0("Unhandled opcode %s.\n", FUNC_1(VAR_0->handler_idx));
            break;
    }


    VAR_3[0] = '\0';
    FUNC_3(VAR_0, VAR_6, VAR_4);
    for (VAR_5 = 0; VAR_5 < VAR_0->src_count; ++VAR_5)
    {
        char VAR_7[100];
        FUNC_6(VAR_3, ", ");
        FUNC_5(VAR_0, &VAR_0->src[VAR_5], VAR_5, VAR_7);
        FUNC_6(VAR_3, VAR_7);
    }
    FUNC_2(VAR_1, "%s%s %s%s;\n", VAR_2, FUNC_4(VAR_0), VAR_4, VAR_3);
}

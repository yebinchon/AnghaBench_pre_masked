
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int handler_idx; unsigned int src_count; struct wined3d_shader_dst_param* dst; TYPE_6__* src; TYPE_1__* ctx; } ;
struct TYPE_11__ {scalar_t__ type; scalar_t__ data_type; TYPE_2__* idx; } ;
struct wined3d_shader_dst_param {unsigned int write_mask; TYPE_5__ reg; } ;
struct glsl_src_param {char* param_str; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_3__* idx; } ;
struct TYPE_12__ {TYPE_4__ reg; } ;
struct TYPE_9__ {scalar_t__ offset; } ;
struct TYPE_8__ {scalar_t__ offset; } ;
struct TYPE_7__ {struct wined3d_string_buffer* buffer; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,char const*,...) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,TYPE_6__*,int ,struct glsl_src_param*) ;
 int FUNC_3 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param*,scalar_t__) ;
 int FUNC_4 (struct wined3d_shader_dst_param*,char*) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_5)
{
    struct wined3d_string_buffer *VAR_6 = VAR_5->ctx->buffer;
    struct wined3d_shader_dst_param VAR_7;
    struct glsl_src_param VAR_8[4];
    const char *VAR_9;
    BOOL VAR_10 = VAR_0;
    char VAR_11[6];
    unsigned int VAR_12, VAR_13;
    DWORD VAR_14;

    switch (VAR_5->handler_idx)
    {
        case 130: VAR_9 = "bitfieldInsert"; break;
        case 129: VAR_9 = "bitfieldExtract"; break;
        case 128: VAR_9 = "bitfieldExtract"; break;
        default:
            FUNC_0("Unhandled opcode %#x.\n", VAR_5->handler_idx);
            return;
    }

    for (VAR_12 = 0; VAR_12 < VAR_5->src_count; ++VAR_12)
    {
        if (VAR_5->dst[0].reg.idx[0].offset == VAR_5->src[VAR_12].reg.idx[0].offset
                && VAR_5->dst[0].reg.type == VAR_5->src[VAR_12].reg.type)
            VAR_10 = VAR_1;
    }

    VAR_7 = VAR_5->dst[0];
    for (VAR_12 = 0; VAR_12 < 4; ++VAR_12)
    {
        VAR_7.write_mask = VAR_5->dst[0].write_mask & (VAR_2 << VAR_12);
        if (VAR_10 && (VAR_14 = FUNC_4(&VAR_7, VAR_11)))
            FUNC_1(VAR_6, "tmp0%s = %sBitsToFloat(", VAR_11,
                    VAR_7.reg.data_type == VAR_4 ? "int" : "uint");
        else if (!(VAR_14 = FUNC_3(VAR_6, VAR_5, &VAR_7, VAR_7.reg.data_type)))
            continue;

        for (VAR_13 = 0; VAR_13 < VAR_5->src_count; ++VAR_13)
            FUNC_2(VAR_5, &VAR_5->src[VAR_13], VAR_14, &VAR_8[VAR_13]);
        FUNC_1(VAR_6, "%s(", VAR_9);
        for (VAR_13 = 0; VAR_13 < VAR_5->src_count - 2; ++VAR_13)
            FUNC_1(VAR_6, "%s, ", VAR_8[VAR_5->src_count - VAR_13 - 1].param_str);
        FUNC_1(VAR_6, "%s & 0x1f, %s & 0x1f));\n", VAR_8[1].param_str, VAR_8[0].param_str);
    }

    if (VAR_10)
    {
        FUNC_3(VAR_6, VAR_5, &VAR_5->dst[0], VAR_3);
        FUNC_4(&VAR_5->dst[0], VAR_11);
        FUNC_1(VAR_6, "tmp0%s);\n", VAR_11);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_shader_instruction {int handler_idx; TYPE_2__* ctx; struct wined3d_shader_dst_param* dst; TYPE_4__* src; } ;
struct TYPE_7__ {scalar_t__ type; int data_type; TYPE_1__* idx; } ;
struct wined3d_shader_dst_param {unsigned int write_mask; TYPE_3__ reg; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_8__ {int swizzle; TYPE_3__ reg; } ;
struct TYPE_6__ {int buffer; } ;
struct TYPE_5__ {scalar_t__ offset; } ;
typedef unsigned int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_1 ;



 unsigned int VAR_2 ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,TYPE_4__*,unsigned int,struct glsl_src_param*) ;
 unsigned int FUNC_3 (int ,struct wined3d_shader_instruction const*) ;
 unsigned int FUNC_4 (int ,struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param*,int ) ;
 unsigned int FUNC_5 (struct wined3d_shader_dst_param*,char*) ;
 unsigned int FUNC_6 (int ,unsigned int) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_8(const struct wined3d_shader_instruction *VAR_3)
{
    const char *VAR_4, *VAR_5;
    struct wined3d_shader_dst_param VAR_6;
    struct glsl_src_param VAR_7;
    struct glsl_src_param VAR_8;
    struct glsl_src_param VAR_9;
    BOOL VAR_10 = VAR_0;
    DWORD VAR_11 = 0;
    unsigned int VAR_12, VAR_13;
    char VAR_14[6];
    DWORD VAR_15;

    switch (VAR_3->handler_idx)
    {
        case 130:
            VAR_4 = "";
            VAR_5 = " >= 0.0";
            break;

        case 129:
            VAR_4 = "";
            VAR_5 = " > 0.5";
            break;

        case 128:
            VAR_4 = "bool(";
            VAR_5 = ")";
            break;

        default:
            FUNC_0("Unhandled instruction %#x.\n", VAR_3->handler_idx);
            VAR_4 = "<unhandled prefix>";
            VAR_5 = "<unhandled suffix>";
            break;
    }

    if (FUNC_7(&VAR_3->dst[0].reg) || FUNC_7(&VAR_3->src[0].reg))
    {
        VAR_15 = FUNC_3(VAR_3->ctx->buffer, VAR_3);
        FUNC_2(VAR_3, &VAR_3->src[0], VAR_15, &VAR_7);
        FUNC_2(VAR_3, &VAR_3->src[1], VAR_15, &VAR_8);
        FUNC_2(VAR_3, &VAR_3->src[2], VAR_15, &VAR_9);

        FUNC_1(VAR_3->ctx->buffer, "%s%s%s ? %s : %s);\n",
                VAR_4, VAR_7.param_str, VAR_5,
                VAR_8.param_str, VAR_9.param_str);
        return;
    }

    VAR_6 = VAR_3->dst[0];




    if ((VAR_3->src[0].reg.idx[0].offset == VAR_6.reg.idx[0].offset
                && VAR_3->src[0].reg.type == VAR_6.reg.type)
            || (VAR_3->src[1].reg.idx[0].offset == VAR_6.reg.idx[0].offset
                && VAR_3->src[1].reg.type == VAR_6.reg.type)
            || (VAR_3->src[2].reg.idx[0].offset == VAR_6.reg.idx[0].offset
                && VAR_3->src[2].reg.type == VAR_6.reg.type))
        VAR_10 = VAR_1;


    for (VAR_12 = 0; VAR_12 < 4; ++VAR_12)
    {
        VAR_15 = 0;

        for (VAR_13 = 0; VAR_13 < 4; ++VAR_13)
        {
            if (FUNC_6(VAR_3->src[0].swizzle, VAR_13) == VAR_12)
            {
                VAR_15 |= VAR_2 << VAR_13;
                VAR_11 = VAR_2 << VAR_13;
            }
        }
        VAR_6.write_mask = VAR_3->dst[0].write_mask & VAR_15;

        if (VAR_10)
        {
            if (!(VAR_15 = FUNC_5(&VAR_6, VAR_14)))
                continue;
            FUNC_1(VAR_3->ctx->buffer, "tmp0%s = (", VAR_14);
        }
        else if (!(VAR_15 = FUNC_4(VAR_3->ctx->buffer, VAR_3, &VAR_6, VAR_6.reg.data_type)))
            continue;

        FUNC_2(VAR_3, &VAR_3->src[0], VAR_11, &VAR_7);
        FUNC_2(VAR_3, &VAR_3->src[1], VAR_15, &VAR_8);
        FUNC_2(VAR_3, &VAR_3->src[2], VAR_15, &VAR_9);

        FUNC_1(VAR_3->ctx->buffer, "%s%s%s ? %s : %s);\n",
                VAR_4, VAR_7.param_str, VAR_5,
                VAR_8.param_str, VAR_9.param_str);
    }

    if (VAR_10)
    {
        FUNC_5(&VAR_3->dst[0], VAR_14);
        FUNC_3(VAR_3->ctx->buffer, VAR_3);
        FUNC_1(VAR_3->ctx->buffer, "tmp0%s);\n", VAR_14);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_shader_instruction {scalar_t__ handler_idx; TYPE_2__* ctx; int * src; struct wined3d_shader_dst_param* dst; } ;
struct TYPE_3__ {int data_type; } ;
struct wined3d_shader_dst_param {unsigned int write_mask; TYPE_1__ reg; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_4__ {int buffer; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_2 (int ,struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param*,int ) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_2)
{
    struct wined3d_shader_dst_param VAR_3;
    struct glsl_src_param VAR_4;
    DWORD VAR_5;
    const char *VAR_6;
    unsigned int VAR_7;

    VAR_6 = VAR_2->handler_idx == VAR_0
            ? "unpackHalf2x16(%s).x);\n" : "packHalf2x16(vec2(%s, 0.0)));\n";

    VAR_3 = VAR_2->dst[0];
    for (VAR_7 = 0; VAR_7 < 4; ++VAR_7)
    {
        VAR_3.write_mask = VAR_2->dst[0].write_mask & (VAR_1 << VAR_7);
        if (!(VAR_5 = FUNC_2(VAR_2->ctx->buffer, VAR_2,
                &VAR_3, VAR_3.reg.data_type)))
            continue;

        FUNC_1(VAR_2, &VAR_2->src[0], VAR_5, &VAR_4);
        FUNC_0(VAR_2->ctx->buffer, VAR_6, VAR_4.param_str);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int * src; TYPE_1__* ctx; struct wined3d_shader_dst_param* dst; } ;
struct TYPE_6__ {TYPE_2__* idx; } ;
struct wined3d_shader_dst_param {TYPE_3__ reg; } ;
struct TYPE_5__ {int offset; } ;
struct TYPE_4__ {struct wined3d_string_buffer* buffer; } ;
typedef int DWORD ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,char*,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param const*,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int *,int,char*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_0)
{
    const struct wined3d_shader_dst_param *VAR_1 = &VAR_0->dst[0];
    struct wined3d_string_buffer *VAR_2 = VAR_0->ctx->buffer;
    DWORD VAR_3 = VAR_1->reg.idx[0].offset;
    char VAR_4[50];
    char VAR_5[2][50];

    FUNC_1(VAR_0, VAR_1, VAR_4);







    FUNC_2(VAR_0, &VAR_0->src[1], 1, VAR_5[1]);
    FUNC_0(VAR_2, "SWZ TA, bumpenvmat%d, x, z, 0, 0;\n", VAR_3);
    FUNC_0(VAR_2, "DP3 TC.r, TA, %s;\n", VAR_5[1]);
    FUNC_0(VAR_2, "SWZ TA, bumpenvmat%d, y, w, 0, 0;\n", VAR_3);
    FUNC_0(VAR_2, "DP3 TC.g, TA, %s;\n", VAR_5[1]);

    FUNC_2(VAR_0, &VAR_0->src[0], 0, VAR_5[0]);
    FUNC_0(VAR_2, "ADD %s, %s, TC;\n", VAR_4, VAR_5[0]);
}

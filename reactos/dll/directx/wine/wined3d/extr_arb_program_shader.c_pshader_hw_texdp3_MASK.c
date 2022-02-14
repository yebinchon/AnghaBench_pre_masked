
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int * src; TYPE_3__* ctx; struct wined3d_shader_dst_param* dst; } ;
struct TYPE_5__ {TYPE_1__* idx; } ;
struct wined3d_shader_dst_param {TYPE_2__ reg; } ;
struct TYPE_6__ {struct wined3d_string_buffer* buffer; } ;
struct TYPE_4__ {int offset; } ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,char*,int ,char*) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param const*,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int *,int ,char*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_0)
{
    const struct wined3d_shader_dst_param *VAR_1 = &VAR_0->dst[0];
    char VAR_2[50];
    char VAR_3[50];
    struct wined3d_string_buffer *VAR_4 = VAR_0->ctx->buffer;


    FUNC_1(VAR_0, VAR_1, VAR_3);
    FUNC_2(VAR_0, &VAR_0->src[0], 0, VAR_2);
    FUNC_0(VAR_4, "DP3 %s, fragment.texcoord[%u], %s;\n", VAR_3, VAR_1->reg.idx[0].offset, VAR_2);
}

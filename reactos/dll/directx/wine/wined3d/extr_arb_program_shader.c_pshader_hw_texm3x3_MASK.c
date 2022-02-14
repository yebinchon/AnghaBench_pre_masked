
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {struct wined3d_shader_dst_param* dst; int * src; TYPE_1__* ctx; } ;
struct TYPE_6__ {TYPE_2__* idx; } ;
struct wined3d_shader_dst_param {TYPE_3__ reg; } ;
struct TYPE_5__ {int offset; } ;
struct TYPE_4__ {struct wined3d_string_buffer* buffer; } ;
typedef int BOOL ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,char*,char*,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param const*,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,TYPE_3__*,char*,int *) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,int ,char*) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_0)
{
    const struct wined3d_shader_dst_param *VAR_1 = &VAR_0->dst[0];
    struct wined3d_string_buffer *VAR_2 = VAR_0->ctx->buffer;
    char VAR_3[50], VAR_4[50];
    char VAR_5[50];
    BOOL VAR_6;

    FUNC_1(VAR_0, VAR_1, VAR_3);
    FUNC_3(VAR_0, &VAR_0->src[0], 0, VAR_5);
    FUNC_2(VAR_0, &VAR_0->dst[0].reg, VAR_4, &VAR_6);
    FUNC_0(VAR_2, "DP3 %s.z, fragment.texcoord[%u], %s;\n", VAR_4, VAR_1->reg.idx[0].offset, VAR_5);
    FUNC_0(VAR_2, "MOV %s, %s;\n", VAR_3, VAR_4);
}

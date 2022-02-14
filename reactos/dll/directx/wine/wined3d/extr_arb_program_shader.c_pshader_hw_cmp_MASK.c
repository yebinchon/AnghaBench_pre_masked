
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int * src; TYPE_1__* ctx; struct wined3d_shader_dst_param* dst; } ;
struct wined3d_shader_dst_param {int dummy; } ;
struct TYPE_2__ {struct wined3d_string_buffer* buffer; } ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,int ,char*,char*,char*,char*) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param const*,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,int,char*) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_0)
{
    const struct wined3d_shader_dst_param *VAR_1 = &VAR_0->dst[0];
    struct wined3d_string_buffer *VAR_2 = VAR_0->ctx->buffer;
    char VAR_3[50];
    char VAR_4[3][50];

    FUNC_1(VAR_0, VAR_1, VAR_3);


    FUNC_3(VAR_0, &VAR_0->src[0], 0, VAR_4[0]);
    FUNC_3(VAR_0, &VAR_0->src[1], 1, VAR_4[1]);
    FUNC_3(VAR_0, &VAR_0->src[2], 2, VAR_4[2]);

    FUNC_0(VAR_2, "CMP%s %s, %s, %s, %s;\n", FUNC_2(VAR_0),
            VAR_3, VAR_4[0], VAR_4[2], VAR_4[1]);
}

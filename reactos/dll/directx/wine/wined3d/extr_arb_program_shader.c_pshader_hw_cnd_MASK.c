
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_src_param {int modifiers; } ;
struct wined3d_shader_instruction {struct wined3d_shader_src_param* src; struct wined3d_shader_dst_param* dst; scalar_t__ coissue; TYPE_3__* ctx; } ;
struct wined3d_shader_dst_param {scalar_t__ write_mask; } ;
struct TYPE_6__ {TYPE_2__* reg_maps; struct wined3d_string_buffer* buffer; } ;
struct TYPE_4__ {int major; int minor; } ;
struct TYPE_5__ {TYPE_1__ shader_version; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,char,char*,...) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param const*,char*) ;
 int FUNC_4 (struct wined3d_shader_instruction const*) ;
 int FUNC_5 (struct wined3d_shader_instruction const*,struct wined3d_shader_src_param*,int,char*) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_shader_instruction *VAR_1)
{
    const struct wined3d_shader_dst_param *VAR_2 = &VAR_1->dst[0];
    struct wined3d_string_buffer *VAR_3 = VAR_1->ctx->buffer;
    char VAR_4[50];
    char VAR_5[3][50];
    DWORD VAR_6 = FUNC_0(VAR_1->ctx->reg_maps->shader_version.major,
            VAR_1->ctx->reg_maps->shader_version.minor);

    FUNC_3(VAR_1, VAR_2, VAR_4);
    FUNC_5(VAR_1, &VAR_1->src[1], 1, VAR_5[1]);

    if (VAR_6 <= FUNC_0(1, 3) && VAR_1->coissue
            && VAR_1->dst->write_mask != VAR_0)
    {
        FUNC_2(VAR_3, "MOV%s %s, %s;\n", FUNC_4(VAR_1), VAR_4, VAR_5[1]);
    }
    else
    {
        struct wined3d_shader_src_param VAR_7 = VAR_1->src[0];
        char VAR_8;


        VAR_7.modifiers = FUNC_1(VAR_7.modifiers, &VAR_8);

        FUNC_5(VAR_1, &VAR_7, 0, VAR_5[0]);
        FUNC_5(VAR_1, &VAR_1->src[2], 2, VAR_5[2]);
        FUNC_2(VAR_3, "ADD TA, %c%s, coefdiv.x;\n", VAR_8, VAR_5[0]);
        FUNC_2(VAR_3, "CMP%s %s, TA, %s, %s;\n", FUNC_4(VAR_1),
                VAR_4, VAR_5[1], VAR_5[2]);
    }
}

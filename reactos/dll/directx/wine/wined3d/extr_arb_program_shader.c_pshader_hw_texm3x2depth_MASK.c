
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {struct wined3d_shader_dst_param* dst; int * src; TYPE_3__* ctx; } ;
struct TYPE_10__ {TYPE_4__* idx; } ;
struct wined3d_shader_dst_param {TYPE_5__ reg; } ;
struct TYPE_9__ {int offset; } ;
struct TYPE_8__ {TYPE_2__* reg_maps; struct wined3d_string_buffer* buffer; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_7__ {TYPE_1__ shader_version; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,char*,char const*,...) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,TYPE_5__*,char*,int *) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,int ,char*) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_2)
{
    struct wined3d_string_buffer *VAR_3 = VAR_2->ctx->buffer;
    const struct wined3d_shader_dst_param *VAR_4 = &VAR_2->dst[0];
    char VAR_5[50], VAR_6[50];
    BOOL VAR_7;
    const char *VAR_8 = FUNC_0(VAR_2->ctx->reg_maps->shader_version.type, VAR_1);
    const char *VAR_9 = FUNC_0(VAR_2->ctx->reg_maps->shader_version.type, VAR_0);

    FUNC_3(VAR_2, &VAR_2->src[0], 0, VAR_5);
    FUNC_2(VAR_2, &VAR_2->dst[0].reg, VAR_6, &VAR_7);
    FUNC_1(VAR_3, "DP3 %s.y, fragment.texcoord[%u], %s;\n", VAR_6, VAR_4->reg.idx[0].offset, VAR_5);





    FUNC_1(VAR_3, "RCP %s.y, %s.y;\n", VAR_6, VAR_6);
    FUNC_1(VAR_3, "MUL %s.x, %s.x, %s.y;\n", VAR_6, VAR_6, VAR_6);
    FUNC_1(VAR_3, "MIN %s.x, %s.x, %s;\n", VAR_6, VAR_6, VAR_9);
    FUNC_1(VAR_3, "MAX result.depth, %s.x, %s;\n", VAR_6, VAR_8);
}

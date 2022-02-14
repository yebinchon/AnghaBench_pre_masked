
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {TYPE_3__* ctx; struct wined3d_shader_dst_param* dst; } ;
struct wined3d_shader_dst_param {int dummy; } ;
struct TYPE_6__ {TYPE_2__* reg_maps; struct wined3d_string_buffer* buffer; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_5__ {TYPE_1__ shader_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,char const*,...) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param const*,char*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_2)
{
    const struct wined3d_shader_dst_param *VAR_3 = &VAR_2->dst[0];
    struct wined3d_string_buffer *VAR_4 = VAR_2->ctx->buffer;
    char VAR_5[50];
    const char *VAR_6 = FUNC_0(VAR_2->ctx->reg_maps->shader_version.type, VAR_1);
    const char *VAR_7 = FUNC_0(VAR_2->ctx->reg_maps->shader_version.type, VAR_0);






    FUNC_2(VAR_2, VAR_3, VAR_5);




    FUNC_1(VAR_4, "MIN %s.y, %s.y, %s;\n", VAR_5, VAR_5, VAR_7);





    FUNC_1(VAR_4, "RCP %s.y, %s.y;\n", VAR_5, VAR_5);
    FUNC_1(VAR_4, "MUL TA.x, %s.x, %s.y;\n", VAR_5, VAR_5);
    FUNC_1(VAR_4, "MIN TA.x, TA.x, %s;\n", VAR_7);
    FUNC_1(VAR_4, "MAX result.depth, TA.x, %s;\n", VAR_6);
}

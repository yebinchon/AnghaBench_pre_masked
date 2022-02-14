
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_3__* ctx; int * dst; int * src; } ;
struct glsl_src_param {char* param_str; } ;
struct TYPE_6__ {int buffer; TYPE_2__* reg_maps; } ;
struct TYPE_4__ {int major; } ;
struct TYPE_5__ {TYPE_1__ shader_version; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_2 (int ,struct wined3d_shader_instruction const*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct wined3d_shader_instruction const*) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_1)
{
    if (VAR_1->ctx->reg_maps->shader_version.major < 2)
    {
        struct glsl_src_param VAR_2;
        char VAR_3[6];

        FUNC_1(VAR_1, &VAR_1->src[0], VAR_0, &VAR_2);

        FUNC_0(VAR_1->ctx->buffer, "tmp0.x = exp2(floor(%s));\n", VAR_2.param_str);
        FUNC_0(VAR_1->ctx->buffer, "tmp0.y = %s - floor(%s);\n", VAR_2.param_str, VAR_2.param_str);
        FUNC_0(VAR_1->ctx->buffer, "tmp0.z = exp2(%s);\n", VAR_2.param_str);
        FUNC_0(VAR_1->ctx->buffer, "tmp0.w = 1.0;\n");

        FUNC_2(VAR_1->ctx->buffer, VAR_1);
        FUNC_3(&VAR_1->dst[0], VAR_3);
        FUNC_0(VAR_1->ctx->buffer, "tmp0%s);\n", VAR_3);
        return;
    }

    FUNC_4(VAR_1);
}

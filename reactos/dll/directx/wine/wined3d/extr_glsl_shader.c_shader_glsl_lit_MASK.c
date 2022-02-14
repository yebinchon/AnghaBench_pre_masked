
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_1__* ctx; int * src; int * dst; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_2__ {int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,char*) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_2 (int ,struct wined3d_shader_instruction const*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_3)
{
    struct glsl_src_param VAR_4;
    struct glsl_src_param VAR_5;
    struct glsl_src_param VAR_6;
    char VAR_7[6];

    FUNC_2(VAR_3->ctx->buffer, VAR_3);
    FUNC_3(&VAR_3->dst[0], VAR_7);

    FUNC_1(VAR_3, &VAR_3->src[0], VAR_0, &VAR_4);
    FUNC_1(VAR_3, &VAR_3->src[0], VAR_1, &VAR_5);
    FUNC_1(VAR_3, &VAR_3->src[0], VAR_2, &VAR_6);
    FUNC_0(VAR_3->ctx->buffer,
            "vec4(1.0, max(%s, 0.0), %s == 0.0 ? 0.0 : "
            "pow(max(0.0, %s) * step(0.0, %s), clamp(%s, -128.0, 128.0)), 1.0)%s);\n",
            VAR_4.param_str, VAR_6.param_str, VAR_5.param_str,
            VAR_4.param_str, VAR_6.param_str, VAR_7);
}

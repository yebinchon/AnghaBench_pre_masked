
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_1__* ctx; int * dst; } ;
struct glsl_dst_param {int reg_name; } ;
struct TYPE_2__ {int buffer; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,struct glsl_dst_param*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader_instruction *VAR_0)
{
    struct glsl_dst_param VAR_1;

    FUNC_1(VAR_0, &VAR_0->dst[0], &VAR_1);







    FUNC_0(VAR_0->ctx->buffer, "gl_FragDepth = clamp((%s.x / min(%s.y, 1.0)), 0.0, 1.0);\n",
            VAR_1.reg_name, VAR_1.reg_name);
}

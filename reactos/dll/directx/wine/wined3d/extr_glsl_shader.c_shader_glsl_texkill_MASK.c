
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_3__* ctx; int * dst; } ;
struct glsl_dst_param {int reg_name; } ;
struct TYPE_6__ {int buffer; TYPE_2__* reg_maps; } ;
struct TYPE_4__ {int major; } ;
struct TYPE_5__ {TYPE_1__ shader_version; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,struct glsl_dst_param*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,char*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_0)
{
    if (VAR_0->ctx->reg_maps->shader_version.major >= 4)
    {
        FUNC_2(VAR_0, "discard;");
    }
    else
    {
        struct glsl_dst_param VAR_1;


        FUNC_1(VAR_0, &VAR_0->dst[0], &VAR_1);


        if (VAR_0->ctx->reg_maps->shader_version.major >= 2)
            FUNC_0(VAR_0->ctx->buffer, "if (any(lessThan(%s.xyzw, vec4(0.0)))) discard;\n", VAR_1.reg_name);




        else
            FUNC_0(VAR_0->ctx->buffer, "if (any(lessThan(%s.xyz, vec3(0.0)))) discard;\n", VAR_1.reg_name);
    }
}

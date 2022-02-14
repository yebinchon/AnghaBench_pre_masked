
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_4__* src; TYPE_1__* ctx; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_7__ {TYPE_2__* idx; } ;
struct TYPE_8__ {TYPE_3__ reg; } ;
struct TYPE_6__ {int offset; } ;
struct TYPE_5__ {int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,TYPE_4__*,int ,struct glsl_src_param*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader_instruction *VAR_1)
{
    struct glsl_src_param VAR_2;

    FUNC_1(VAR_1, &VAR_1->src[1], VAR_0, &VAR_2);
    FUNC_0(VAR_1->ctx->buffer, "if (%s) subroutine%u();\n",
            VAR_2.param_str, VAR_1->src[0].reg.idx[0].offset);
}

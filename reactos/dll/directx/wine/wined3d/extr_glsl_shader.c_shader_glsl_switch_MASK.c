
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_1__* ctx; int * src; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_2__ {int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader_instruction *VAR_1)
{
    struct glsl_src_param VAR_2;

    FUNC_1(VAR_1, &VAR_1->src[0], VAR_0, &VAR_2);
    FUNC_0(VAR_1->ctx->buffer, "switch (%s)\n{\n", VAR_2.param_str);
}

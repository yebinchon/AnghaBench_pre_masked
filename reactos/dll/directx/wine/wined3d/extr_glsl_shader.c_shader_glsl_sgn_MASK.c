
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_1__* ctx; int * src; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_2__ {int buffer; } ;
typedef int DWORD ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_2 (int ,struct wined3d_shader_instruction const*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_0)
{
    struct glsl_src_param VAR_1;
    DWORD VAR_2;

    VAR_2 = FUNC_2(VAR_0->ctx->buffer, VAR_0);
    FUNC_1(VAR_0, &VAR_0->src[0], VAR_2, &VAR_1);

    FUNC_0(VAR_0->ctx->buffer, "sign(%s));\n", VAR_1.param_str);
}

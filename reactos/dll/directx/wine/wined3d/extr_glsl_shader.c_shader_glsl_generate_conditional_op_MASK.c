
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_instruction {scalar_t__ flags; TYPE_1__* ctx; int * src; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_2__ {int buffer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char const*,int ,char const*) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader_instruction *VAR_2,
        const char *VAR_3)
{
    struct glsl_src_param VAR_4;
    const char *VAR_5;

    VAR_5 = VAR_2->flags == VAR_1 ? "bool" : "!bool";
    FUNC_1(VAR_2, &VAR_2->src[0], VAR_0, &VAR_4);
    FUNC_0(VAR_2->ctx->buffer, "if (%s(%s)) %s\n", VAR_5, VAR_4.param_str, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_1__* ctx; int * src; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_2__ {int buffer; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,int ,int ,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int,struct glsl_src_param*) ;
 int FUNC_2 (int ,struct wined3d_shader_instruction const*) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_2)
{
    struct glsl_src_param VAR_3;
    struct glsl_src_param VAR_4;
    struct glsl_src_param VAR_5;
    DWORD VAR_6;
    unsigned int VAR_7;

    VAR_6 = FUNC_2(VAR_2->ctx->buffer, VAR_2);
    VAR_7 = FUNC_3(VAR_6);

    FUNC_1(VAR_2, &VAR_2->src[0], VAR_0 | VAR_1, &VAR_3);
    FUNC_1(VAR_2, &VAR_2->src[1], VAR_0 | VAR_1, &VAR_4);
    FUNC_1(VAR_2, &VAR_2->src[2], VAR_0, &VAR_5);

    if (VAR_7 > 1) {
        FUNC_0(VAR_2->ctx->buffer, "vec%d(dot(%s, %s) + %s));\n",
                VAR_7, VAR_3.param_str, VAR_4.param_str, VAR_5.param_str);
    } else {
        FUNC_0(VAR_2->ctx->buffer, "dot(%s, %s) + %s);\n",
                VAR_3.param_str, VAR_4.param_str, VAR_5.param_str);
    }
}

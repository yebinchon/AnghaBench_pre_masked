
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int * src; int dst; TYPE_1__* ctx; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_2__ {struct wined3d_string_buffer* buffer; } ;
typedef int DWORD ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,unsigned int,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_2 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*) ;
 int FUNC_3 (int ,char*) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_0)
{
    struct wined3d_string_buffer *VAR_1 = VAR_0->ctx->buffer;
    struct glsl_src_param VAR_2;
    unsigned int VAR_3;
    DWORD VAR_4;
    char VAR_5[6];

    VAR_4 = FUNC_3(VAR_0->dst, VAR_5);
    VAR_3 = FUNC_4(VAR_4);
    FUNC_1(VAR_0, &VAR_0->src[0], VAR_4, &VAR_2);

    FUNC_0(VAR_1, "tmp0.x = dot(%s, %s);\n",
            VAR_2.param_str, VAR_2.param_str);
    FUNC_2(VAR_1, VAR_0);

    if (VAR_3 > 1)
    {
        FUNC_0(VAR_1, "tmp0.x == 0.0 ? vec%u(0.0) : (%s * inversesqrt(tmp0.x)));\n",
                VAR_3, VAR_2.param_str);
    }
    else
    {
        FUNC_0(VAR_1, "tmp0.x == 0.0 ? 0.0 : (%s * inversesqrt(tmp0.x)));\n",
                VAR_2.param_str);
    }
}

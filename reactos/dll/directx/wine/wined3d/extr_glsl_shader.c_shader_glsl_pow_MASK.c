
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int * src; TYPE_1__* ctx; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_2__ {struct wined3d_string_buffer* buffer; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,unsigned int,int ,int ,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_2 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_1)
{
    struct wined3d_string_buffer *VAR_2 = VAR_1->ctx->buffer;
    struct glsl_src_param VAR_3;
    struct glsl_src_param VAR_4;
    DWORD VAR_5;
    unsigned int VAR_6;

    VAR_5 = FUNC_2(VAR_2, VAR_1);
    VAR_6 = FUNC_3(VAR_5);

    FUNC_1(VAR_1, &VAR_1->src[0], VAR_0, &VAR_3);
    FUNC_1(VAR_1, &VAR_1->src[1], VAR_0, &VAR_4);

    if (VAR_6 > 1)
    {
        FUNC_0(VAR_2, "vec%u(%s == 0.0 ? 1.0 : pow(abs(%s), %s)));\n",
                VAR_6, VAR_4.param_str, VAR_3.param_str, VAR_4.param_str);
    }
    else
    {
        FUNC_0(VAR_2, "%s == 0.0 ? 1.0 : pow(abs(%s), %s));\n",
                VAR_4.param_str, VAR_3.param_str, VAR_4.param_str);
    }
}

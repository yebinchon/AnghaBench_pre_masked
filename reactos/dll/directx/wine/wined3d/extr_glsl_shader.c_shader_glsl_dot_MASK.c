
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {scalar_t__ handler_idx; int * src; TYPE_1__* ctx; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_2__ {struct wined3d_string_buffer* buffer; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,unsigned int,int ,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int,struct glsl_src_param*) ;
 int FUNC_2 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*) ;
 unsigned int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_6)
{
    struct wined3d_string_buffer *VAR_7 = VAR_6->ctx->buffer;
    struct glsl_src_param VAR_8;
    struct glsl_src_param VAR_9;
    DWORD VAR_10, VAR_11;
    unsigned int VAR_12;

    VAR_10 = FUNC_2(VAR_7, VAR_6);
    VAR_12 = FUNC_3(VAR_10);


    if (VAR_6->handler_idx == VAR_1)
        VAR_11 = VAR_5;
    else if (VAR_6->handler_idx == VAR_0)
        VAR_11 = VAR_2 | VAR_3 | VAR_4;
    else
        VAR_11 = VAR_2 | VAR_3;

    FUNC_1(VAR_6, &VAR_6->src[0], VAR_11, &VAR_8);
    FUNC_1(VAR_6, &VAR_6->src[1], VAR_11, &VAR_9);

    if (VAR_12 > 1) {
        FUNC_0(VAR_7, "vec%d(dot(%s, %s)));\n", VAR_12, VAR_8.param_str, VAR_9.param_str);
    } else {
        FUNC_0(VAR_7, "dot(%s, %s));\n", VAR_8.param_str, VAR_9.param_str);
    }
}

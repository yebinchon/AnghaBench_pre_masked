
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {TYPE_2__* ctx; int * src; TYPE_3__* dst; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_4__ {scalar_t__ type; int data_type; } ;
struct TYPE_6__ {TYPE_1__ reg; } ;
struct TYPE_5__ {struct wined3d_string_buffer* buffer; } ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,int ,int ) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_3 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_1)
{
    struct wined3d_string_buffer *VAR_2 = VAR_1->ctx->buffer;
    struct glsl_src_param VAR_3;
    struct glsl_src_param VAR_4;
    DWORD VAR_5;



    if (VAR_1->dst[0].reg.type != VAR_0)
        FUNC_0("64-bit integer multiplies not implemented.\n");

    if (VAR_1->dst[1].reg.type != VAR_0)
    {
        VAR_5 = FUNC_3(VAR_2, VAR_1, &VAR_1->dst[1], VAR_1->dst[1].reg.data_type);
        FUNC_2(VAR_1, &VAR_1->src[0], VAR_5, &VAR_3);
        FUNC_2(VAR_1, &VAR_1->src[1], VAR_5, &VAR_4);

        FUNC_1(VAR_1->ctx->buffer, "%s * %s);\n",
                VAR_3.param_str, VAR_4.param_str);
    }
}

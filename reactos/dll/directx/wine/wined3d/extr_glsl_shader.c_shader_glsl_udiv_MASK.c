
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {int * src; TYPE_3__* dst; TYPE_1__* ctx; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_6__ {scalar_t__ type; int data_type; } ;
struct TYPE_7__ {TYPE_2__ reg; } ;
struct TYPE_5__ {struct wined3d_string_buffer* buffer; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,char*,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_2 (struct wined3d_string_buffer*,struct wined3d_shader_instruction const*,TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,char*) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_2)
{
    struct wined3d_string_buffer *VAR_3 = VAR_2->ctx->buffer;
    struct glsl_src_param VAR_4, VAR_5;
    DWORD VAR_6;

    if (VAR_2->dst[0].reg.type != VAR_0)
    {
        if (VAR_2->dst[1].reg.type != VAR_0)
        {
            char VAR_7[6];

            VAR_6 = FUNC_3(&VAR_2->dst[0], VAR_7);
            FUNC_1(VAR_2, &VAR_2->src[0], VAR_6, &VAR_4);
            FUNC_1(VAR_2, &VAR_2->src[1], VAR_6, &VAR_5);
            FUNC_0(VAR_3, "tmp0%s = uintBitsToFloat(%s / %s);\n",
                    VAR_7, VAR_4.param_str, VAR_5.param_str);

            VAR_6 = FUNC_2(VAR_3, VAR_2, &VAR_2->dst[1], VAR_2->dst[1].reg.data_type);
            FUNC_1(VAR_2, &VAR_2->src[0], VAR_6, &VAR_4);
            FUNC_1(VAR_2, &VAR_2->src[1], VAR_6, &VAR_5);
            FUNC_0(VAR_3, "%s %% %s);\n", VAR_4.param_str, VAR_5.param_str);

            FUNC_2(VAR_3, VAR_2, &VAR_2->dst[0], VAR_1);
            FUNC_0(VAR_3, "tmp0%s);\n", VAR_7);
        }
        else
        {
            VAR_6 = FUNC_2(VAR_3, VAR_2, &VAR_2->dst[0], VAR_2->dst[0].reg.data_type);
            FUNC_1(VAR_2, &VAR_2->src[0], VAR_6, &VAR_4);
            FUNC_1(VAR_2, &VAR_2->src[1], VAR_6, &VAR_5);
            FUNC_0(VAR_3, "%s / %s);\n", VAR_4.param_str, VAR_5.param_str);
        }
    }
    else if (VAR_2->dst[1].reg.type != VAR_0)
    {
        VAR_6 = FUNC_2(VAR_3, VAR_2, &VAR_2->dst[1], VAR_2->dst[1].reg.data_type);
        FUNC_1(VAR_2, &VAR_2->src[0], VAR_6, &VAR_4);
        FUNC_1(VAR_2, &VAR_2->src[1], VAR_6, &VAR_5);
        FUNC_0(VAR_3, "%s %% %s);\n", VAR_4.param_str, VAR_5.param_str);
    }
}

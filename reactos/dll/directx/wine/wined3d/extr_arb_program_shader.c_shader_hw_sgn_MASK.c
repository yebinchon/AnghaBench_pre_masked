
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {TYPE_2__* dst; int * src; TYPE_1__* ctx; } ;
struct shader_arb_ctx_priv {scalar_t__ target_version; } ;
struct TYPE_4__ {int modifiers; } ;
struct TYPE_3__ {struct shader_arb_ctx_priv* backend_data; struct wined3d_string_buffer* buffer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,char*,char*,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,TYPE_2__*,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,int ,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_2)
{
    struct wined3d_string_buffer *VAR_3 = VAR_2->ctx->buffer;
    char VAR_4[50];
    char VAR_5[50];
    struct shader_arb_ctx_priv *VAR_6 = VAR_2->ctx->backend_data;

    FUNC_1(VAR_2, &VAR_2->dst[0], VAR_4);
    FUNC_3(VAR_2, &VAR_2->src[0], 0, VAR_5);


    if(VAR_6->target_version >= VAR_0) {
        FUNC_0(VAR_3, "SSG%s %s, %s;\n", FUNC_2(VAR_2), VAR_4, VAR_5);
        return;
    }




    if(VAR_2->dst[0].modifiers & VAR_1) {
        FUNC_0(VAR_3, "SLT %s, -%s, %s;\n", VAR_4, VAR_5, VAR_5);
    } else {






        if(FUNC_4(VAR_5, "TA"))
        {
            FUNC_0(VAR_3, "SLT %s,  %s, -%s;\n", VAR_4, VAR_5, VAR_5);
            FUNC_0(VAR_3, "SLT TA, -%s, %s;\n", VAR_5, VAR_5);
            FUNC_0(VAR_3, "ADD %s, %s, -TA;\n", VAR_4, VAR_4);
        }
        else
        {
            FUNC_0(VAR_3, "SLT TA, -%s, %s;\n", VAR_5, VAR_5);
            FUNC_0(VAR_3, "SLT %s,  %s, -%s;\n", VAR_4, VAR_5, VAR_5);
            FUNC_0(VAR_3, "ADD %s, TA, -%s;\n", VAR_4, VAR_4);
        }
    }
}

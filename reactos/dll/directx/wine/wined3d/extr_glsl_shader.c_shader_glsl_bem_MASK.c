
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_1__* ctx; int * src; TYPE_3__* dst; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_8__ {TYPE_2__* idx; } ;
struct TYPE_7__ {TYPE_4__ reg; } ;
struct TYPE_6__ {int offset; } ;
struct TYPE_5__ {int buffer; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int,struct glsl_src_param*) ;
 int FUNC_2 (int ,struct wined3d_shader_instruction const*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_2)
{
    DWORD VAR_3 = VAR_2->dst[0].reg.idx[0].offset;
    struct glsl_src_param VAR_4, VAR_5;

    FUNC_1(VAR_2, &VAR_2->src[0], VAR_0 | VAR_1, &VAR_4);
    FUNC_1(VAR_2, &VAR_2->src[1], VAR_0 | VAR_1, &VAR_5);

    FUNC_2(VAR_2->ctx->buffer, VAR_2);
    FUNC_0(VAR_2->ctx->buffer, "%s + bumpenv_mat%u * %s);\n",
            VAR_4.param_str, VAR_3, VAR_5.param_str);
}

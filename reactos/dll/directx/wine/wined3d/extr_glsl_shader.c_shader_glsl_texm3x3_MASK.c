
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_shader_tex_mx {scalar_t__ current_row; } ;
struct wined3d_shader_instruction {TYPE_3__* ctx; TYPE_4__* dst; int * src; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_6__ {TYPE_1__* idx; } ;
struct TYPE_8__ {TYPE_2__ reg; } ;
struct TYPE_7__ {int buffer; struct wined3d_shader_tex_mx* tex_mx; } ;
struct TYPE_5__ {int offset; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int ,char*) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int,struct glsl_src_param*) ;
 int FUNC_2 (int ,struct wined3d_shader_instruction const*) ;
 int FUNC_3 (TYPE_4__*,char*) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_3)
{
    DWORD VAR_4 = VAR_0 | VAR_1 | VAR_2;
    struct wined3d_shader_tex_mx *VAR_5 = VAR_3->ctx->tex_mx;
    DWORD VAR_6 = VAR_3->dst[0].reg.idx[0].offset;
    struct glsl_src_param VAR_7;
    char VAR_8[6];

    FUNC_1(VAR_3, &VAR_3->src[0], VAR_4, &VAR_7);

    FUNC_2(VAR_3->ctx->buffer, VAR_3);
    FUNC_3(&VAR_3->dst[0], VAR_8);
    FUNC_0(VAR_3->ctx->buffer, "vec4(tmp0.xy, dot(T%u.xyz, %s), 1.0)%s);\n", VAR_6, VAR_7.param_str, VAR_8);

    VAR_5->current_row = 0;
}

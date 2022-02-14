
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_1__* ctx; int * src; TYPE_4__* dst; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_7__ {TYPE_2__* idx; } ;
struct TYPE_8__ {TYPE_3__ reg; } ;
struct TYPE_6__ {int offset; } ;
struct TYPE_5__ {int buffer; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int,struct glsl_src_param*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader_instruction *VAR_3)
{
    DWORD VAR_4 = VAR_0 | VAR_1 | VAR_2;
    DWORD VAR_5 = VAR_3->dst[0].reg.idx[0].offset;
    struct glsl_src_param VAR_6;

    FUNC_1(VAR_3, &VAR_3->src[0], VAR_4, &VAR_6);

    FUNC_0(VAR_3->ctx->buffer, "tmp0.y = dot(T%u.xyz, %s);\n", VAR_5, VAR_6.param_str);
    FUNC_0(VAR_3->ctx->buffer, "gl_FragDepth = (tmp0.y == 0.0) ? 1.0 : clamp(tmp0.x / tmp0.y, 0.0, 1.0);\n");
}

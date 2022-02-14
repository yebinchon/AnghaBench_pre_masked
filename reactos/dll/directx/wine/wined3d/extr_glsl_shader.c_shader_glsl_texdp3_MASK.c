
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_4__* ctx; int * src; TYPE_3__* dst; } ;
struct glsl_src_param {int param_str; } ;
struct TYPE_8__ {int buffer; } ;
struct TYPE_6__ {TYPE_1__* idx; } ;
struct TYPE_7__ {TYPE_2__ reg; } ;
struct TYPE_5__ {int offset; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int,struct glsl_src_param*) ;
 int FUNC_2 (int ,struct wined3d_shader_instruction const*) ;
 unsigned int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_3)
{
    DWORD VAR_4 = VAR_0 | VAR_1 | VAR_2;
    DWORD VAR_5 = VAR_3->dst[0].reg.idx[0].offset;
    struct glsl_src_param VAR_6;
    DWORD VAR_7;
    unsigned int VAR_8;

    VAR_7 = FUNC_2(VAR_3->ctx->buffer, VAR_3);
    VAR_8 = FUNC_3(VAR_7);
    FUNC_1(VAR_3, &VAR_3->src[0], VAR_4, &VAR_6);

    if (VAR_8 > 1) {
        FUNC_0(VAR_3->ctx->buffer, "vec%d(dot(T%u.xyz, %s)));\n", VAR_8, VAR_5, VAR_6.param_str);
    } else {
        FUNC_0(VAR_3->ctx->buffer, "dot(T%u.xyz, %s));\n", VAR_5, VAR_6.param_str);
    }
}

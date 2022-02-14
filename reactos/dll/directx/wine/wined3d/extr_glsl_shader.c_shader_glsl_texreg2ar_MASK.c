
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_shader_instruction {int ctx; int * src; TYPE_3__* dst; } ;
struct glsl_src_param {int reg_name; } ;
struct glsl_sample_function {int dummy; } ;
struct TYPE_5__ {TYPE_1__* idx; } ;
struct TYPE_6__ {TYPE_2__ reg; } ;
struct TYPE_4__ {int offset; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wined3d_shader_instruction const*,int *,int ,struct glsl_src_param*) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int ,struct glsl_sample_function*,int ,int *,int *,int *,int *,char*,int ) ;
 int FUNC_2 (int ,int ,int ,int ,struct glsl_sample_function*) ;
 int FUNC_3 (int ,struct glsl_sample_function*) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_shader_instruction *VAR_2)
{
    DWORD VAR_3 = VAR_2->dst[0].reg.idx[0].offset;
    struct glsl_sample_function VAR_4;
    struct glsl_src_param VAR_5;

    FUNC_0(VAR_2, &VAR_2->src[0], VAR_1, &VAR_5);

    FUNC_2(VAR_2->ctx, VAR_3, VAR_3, 0, &VAR_4);
    FUNC_1(VAR_2, VAR_3, &VAR_4, VAR_0, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
            "%s.wx", VAR_5.reg_name);
    FUNC_3(VAR_2->ctx, &VAR_4);
}

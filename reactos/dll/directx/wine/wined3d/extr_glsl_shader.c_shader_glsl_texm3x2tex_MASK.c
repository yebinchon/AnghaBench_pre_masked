
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {TYPE_4__* ctx; int * src; TYPE_3__* dst; } ;
struct glsl_src_param {int param_str; } ;
struct glsl_sample_function {int dummy; } ;
struct TYPE_9__ {struct wined3d_string_buffer* buffer; } ;
struct TYPE_7__ {TYPE_1__* idx; } ;
struct TYPE_8__ {TYPE_2__ reg; } ;
struct TYPE_6__ {int offset; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,int,int ) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int,struct glsl_src_param*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int,struct glsl_sample_function*,int ,int *,int *,int *,int *,char*) ;
 int FUNC_3 (TYPE_4__*,int,int,int ,struct glsl_sample_function*) ;
 int FUNC_4 (TYPE_4__*,struct glsl_sample_function*) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_shader_instruction *VAR_4)
{
    DWORD VAR_5 = VAR_1 | VAR_2 | VAR_3;
    struct wined3d_string_buffer *VAR_6 = VAR_4->ctx->buffer;
    struct glsl_sample_function VAR_7;
    DWORD VAR_8 = VAR_4->dst[0].reg.idx[0].offset;
    struct glsl_src_param VAR_9;

    FUNC_1(VAR_4, &VAR_4->src[0], VAR_5, &VAR_9);
    FUNC_0(VAR_6, "tmp0.y = dot(T%u.xyz, %s);\n", VAR_8, VAR_9.param_str);

    FUNC_3(VAR_4->ctx, VAR_8, VAR_8, 0, &VAR_7);


    FUNC_2(VAR_4, VAR_8, &VAR_7, VAR_0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), "tmp0.xy");
    FUNC_4(VAR_4->ctx, &VAR_7);
}

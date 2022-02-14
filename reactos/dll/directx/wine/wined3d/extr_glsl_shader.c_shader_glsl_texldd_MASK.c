
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_shader_instruction {TYPE_3__* ctx; TYPE_5__* src; } ;
struct wined3d_gl_info {int * supported; } ;
struct glsl_src_param {int param_str; } ;
struct glsl_sample_function {int deriv_mask; int coord_mask; } ;
struct TYPE_7__ {TYPE_1__* idx; } ;
struct TYPE_9__ {TYPE_2__ reg; int swizzle; } ;
struct TYPE_8__ {struct wined3d_gl_info* gl_info; } ;
struct TYPE_6__ {int offset; } ;
typedef int DWORD ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct wined3d_shader_instruction const*,TYPE_5__*,int ,struct glsl_src_param*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int ,struct glsl_sample_function*,int ,int ,int ,int *,int *,char*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ,struct glsl_sample_function*) ;
 int FUNC_4 (struct wined3d_gl_info const*) ;
 int FUNC_5 (TYPE_3__*,struct glsl_sample_function*) ;
 int FUNC_6 (struct wined3d_shader_instruction const*) ;

__attribute__((used)) static void FUNC_7(const struct wined3d_shader_instruction *VAR_2)
{
    const struct wined3d_gl_info *VAR_3 = VAR_2->ctx->gl_info;
    struct glsl_src_param VAR_4, VAR_5, VAR_6;
    struct glsl_sample_function VAR_7;
    DWORD VAR_8;
    DWORD VAR_9 = VAR_2->src[1].swizzle;

    if (!FUNC_4(VAR_3) && !VAR_3->supported[VAR_0])
    {
        FUNC_0("texldd used, but not supported by hardware. Falling back to regular tex.\n");
        FUNC_6(VAR_2);
        return;
    }

    VAR_8 = VAR_2->src[1].reg.idx[0].offset;

    FUNC_3(VAR_2->ctx, VAR_8, VAR_8, VAR_1, &VAR_7);
    FUNC_1(VAR_2, &VAR_2->src[0], VAR_7.coord_mask, &VAR_4);
    FUNC_1(VAR_2, &VAR_2->src[2], VAR_7.deriv_mask, &VAR_5);
    FUNC_1(VAR_2, &VAR_2->src[3], VAR_7.deriv_mask, &VAR_6);

    FUNC_2(VAR_2, VAR_8, &VAR_7, VAR_9, VAR_5.param_str, VAR_6.param_str,
            ((void*)0), ((void*)0), "%s", VAR_4.param_str);
    FUNC_5(VAR_2->ctx, &VAR_7);
}

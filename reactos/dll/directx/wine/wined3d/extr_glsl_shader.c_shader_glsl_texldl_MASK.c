
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wined3d_shader_version {scalar_t__ type; } ;
struct wined3d_shader_instruction {TYPE_5__* ctx; TYPE_7__* src; } ;
struct wined3d_gl_info {int * supported; } ;
struct glsl_src_param {int param_str; } ;
struct glsl_sample_function {TYPE_4__* name; int coord_mask; } ;
struct TYPE_10__ {TYPE_2__* idx; } ;
struct TYPE_13__ {TYPE_3__ reg; int swizzle; } ;
struct TYPE_12__ {struct wined3d_gl_info* gl_info; TYPE_1__* reg_maps; } ;
struct TYPE_11__ {int buffer; } ;
struct TYPE_9__ {int offset; } ;
struct TYPE_8__ {struct wined3d_shader_version shader_version; } ;
typedef int DWORD ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct wined3d_shader_instruction const*,TYPE_7__*,int ,struct glsl_src_param*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int ,struct glsl_sample_function*,int ,int *,int *,int ,int *,char*,int ) ;
 int FUNC_3 (TYPE_5__*,int ,int ,int ,struct glsl_sample_function*) ;
 int FUNC_4 (struct wined3d_gl_info const*) ;
 int FUNC_5 (TYPE_5__*,struct glsl_sample_function*) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_shader_instruction *VAR_4)
{
    const struct wined3d_shader_version *VAR_5 = &VAR_4->ctx->reg_maps->shader_version;
    const struct wined3d_gl_info *VAR_6 = VAR_4->ctx->gl_info;
    struct glsl_src_param VAR_7, VAR_8;
    struct glsl_sample_function VAR_9;
    DWORD VAR_10 = VAR_4->src[1].swizzle;
    DWORD VAR_11;

    VAR_11 = VAR_4->src[1].reg.idx[0].offset;

    FUNC_3(VAR_4->ctx, VAR_11, VAR_11, VAR_2, &VAR_9);
    FUNC_1(VAR_4, &VAR_4->src[0], VAR_9.coord_mask, &VAR_7);

    FUNC_1(VAR_4, &VAR_4->src[0], VAR_1, &VAR_8);

    if (VAR_5->type == VAR_3 && !FUNC_4(VAR_6)
            && !VAR_6->supported[VAR_0])
    {



        FUNC_0("Using %s in fragment shader.\n", VAR_9.name->buffer);
    }
    FUNC_2(VAR_4, VAR_11, &VAR_9, VAR_10, ((void*)0), ((void*)0), VAR_8.param_str, ((void*)0),
            "%s", VAR_7.param_str);
    FUNC_5(VAR_4->ctx, &VAR_9);
}

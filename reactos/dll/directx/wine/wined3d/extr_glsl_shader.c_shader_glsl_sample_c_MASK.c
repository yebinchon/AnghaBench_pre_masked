
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_shader_resource_info {scalar_t__ type; } ;
struct wined3d_shader_instruction {scalar_t__ handler_idx; TYPE_3__* ctx; int texel_offset; TYPE_6__* src; } ;
struct glsl_src_param {int param_str; } ;
struct glsl_sample_function {int coord_mask; } ;
struct TYPE_10__ {TYPE_1__* idx; } ;
struct TYPE_11__ {TYPE_5__ reg; } ;
struct TYPE_9__ {TYPE_2__* reg_maps; } ;
struct TYPE_8__ {int sampler_map; } ;
struct TYPE_7__ {unsigned int offset; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct wined3d_shader_instruction const*,TYPE_6__*,int,struct glsl_src_param*) ;
 unsigned int FUNC_1 (int *,unsigned int,unsigned int) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,unsigned int,struct glsl_sample_function*,unsigned int,int ,int ) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,unsigned int,struct glsl_sample_function*,int ,int *,int *,char const*,int *,char*,unsigned int,int ,int ) ;
 struct wined3d_shader_resource_info* FUNC_4 (struct wined3d_shader_instruction const*,TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*,unsigned int,unsigned int,int ,struct glsl_sample_function*) ;
 unsigned int FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*,struct glsl_sample_function*) ;
 scalar_t__ FUNC_8 (struct wined3d_shader_instruction const*) ;

__attribute__((used)) static void FUNC_9(const struct wined3d_shader_instruction *VAR_7)
{
    unsigned int VAR_8, VAR_9, VAR_10;
    const struct wined3d_shader_resource_info *VAR_11;
    struct glsl_src_param VAR_12, VAR_13;
    struct glsl_sample_function VAR_14;
    const char *VAR_15 = ((void*)0);
    unsigned int VAR_16;
    DWORD VAR_17 = 0;

    if (VAR_7->handler_idx == VAR_0)
    {
        VAR_15 = "0";
        VAR_17 |= VAR_3;
    }

    if (FUNC_8(VAR_7))
        VAR_17 |= VAR_4;

    if (!(VAR_11 = FUNC_4(VAR_7, &VAR_7->src[1].reg)))
        return;
    VAR_8 = VAR_7->src[1].reg.idx[0].offset;
    VAR_9 = VAR_7->src[2].reg.idx[0].offset;

    FUNC_5(VAR_7->ctx, VAR_8, VAR_9, VAR_17, &VAR_14);
    VAR_16 = FUNC_6(VAR_14.coord_mask);
    FUNC_0(VAR_7, &VAR_7->src[0], VAR_14.coord_mask >> 1, &VAR_12);
    FUNC_0(VAR_7, &VAR_7->src[3], VAR_2, &VAR_13);
    VAR_10 = FUNC_1(&VAR_7->ctx->reg_maps->sampler_map, VAR_8, VAR_9);
    if (VAR_7->handler_idx == VAR_0
            && (VAR_11->type == VAR_5
            || VAR_11->type == VAR_6))
    {
        FUNC_2(VAR_7, VAR_10, &VAR_14,
                VAR_16, VAR_12.param_str, VAR_13.param_str);
    }
    else
    {
        FUNC_3(VAR_7, VAR_10, &VAR_14, VAR_1,
                ((void*)0), ((void*)0), VAR_15, &VAR_7->texel_offset, "vec%u(%s, %s)",
                VAR_16, VAR_12.param_str, VAR_13.param_str);
    }
    FUNC_7(VAR_7->ctx, &VAR_14);
}

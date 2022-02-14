
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_shader_reg_maps {TYPE_6__* resource_info; int sampler_map; } ;
struct wined3d_shader_instruction {TYPE_3__* ctx; int texel_offset; TYPE_5__* src; } ;
struct glsl_src_param {int * param_str; } ;
struct glsl_sample_function {int coord_mask; } ;
struct TYPE_11__ {int type; } ;
struct TYPE_8__ {TYPE_1__* idx; } ;
struct TYPE_10__ {int swizzle; TYPE_2__ reg; } ;
struct TYPE_9__ {struct wined3d_shader_reg_maps* reg_maps; } ;
struct TYPE_7__ {unsigned int offset; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 unsigned int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct wined3d_shader_instruction const*,TYPE_5__*,int ,struct glsl_src_param*) ;
 unsigned int FUNC_5 (int *,unsigned int,unsigned int) ;
 int FUNC_6 (struct wined3d_shader_instruction const*,unsigned int,struct glsl_sample_function*,int ,int *,int *,int *,int *,char*,int *,...) ;
 int FUNC_7 (TYPE_3__*,unsigned int,unsigned int,int ,struct glsl_sample_function*) ;
 int FUNC_8 (TYPE_3__*,struct glsl_sample_function*) ;
 scalar_t__ FUNC_9 (struct wined3d_shader_instruction const*) ;

__attribute__((used)) static void FUNC_10(const struct wined3d_shader_instruction *VAR_5)
{
    const struct wined3d_shader_reg_maps *VAR_6 = VAR_5->ctx->reg_maps;
    struct glsl_src_param VAR_7, VAR_8, VAR_9;
    unsigned int VAR_10, VAR_11, VAR_12;
    struct glsl_sample_function VAR_13;
    DWORD VAR_14 = VAR_2;
    BOOL VAR_15;

    if (FUNC_9(VAR_5))
        VAR_14 |= VAR_3;

    VAR_10 = VAR_5->src[1].reg.idx[0].offset;
    VAR_11 = VAR_4;

    if (VAR_10 >= FUNC_0(VAR_6->resource_info))
    {
        FUNC_1("Invalid resource index %u.\n", VAR_10);
        return;
    }
    VAR_15 = FUNC_2(VAR_6->resource_info[VAR_10].type);

    FUNC_7(VAR_5->ctx, VAR_10, VAR_11, VAR_14, &VAR_13);
    FUNC_4(VAR_5, &VAR_5->src[0], VAR_13.coord_mask, &VAR_7);
    FUNC_4(VAR_5, &VAR_5->src[0], VAR_1, &VAR_8);
    VAR_12 = FUNC_5(&VAR_6->sampler_map, VAR_10, VAR_11);
    if (FUNC_3(VAR_6->resource_info[VAR_10].type))
    {
        FUNC_4(VAR_5, &VAR_5->src[2], VAR_0, &VAR_9);
        FUNC_6(VAR_5, VAR_12, &VAR_13, VAR_5->src[1].swizzle,
                ((void*)0), ((void*)0), ((void*)0), &VAR_5->texel_offset, "%s, %s", VAR_7.param_str, VAR_9.param_str);
    }
    else
    {
        FUNC_6(VAR_5, VAR_12, &VAR_13, VAR_5->src[1].swizzle,
                ((void*)0), ((void*)0), VAR_15 ? VAR_8.param_str : ((void*)0), &VAR_5->texel_offset,
                "%s", VAR_7.param_str);
    }
    FUNC_8(VAR_5->ctx, &VAR_13);
}

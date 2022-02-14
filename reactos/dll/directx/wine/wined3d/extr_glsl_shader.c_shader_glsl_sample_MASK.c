
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_shader_instruction {int handler_idx; TYPE_4__* ctx; int texel_offset; TYPE_6__* src; } ;
struct glsl_src_param {char* param_str; } ;
struct glsl_sample_function {int deriv_mask; int coord_mask; } ;
struct TYPE_8__ {TYPE_1__* idx; } ;
struct TYPE_11__ {int swizzle; TYPE_2__ reg; } ;
struct TYPE_10__ {TYPE_3__* reg_maps; } ;
struct TYPE_9__ {int sampler_map; } ;
struct TYPE_7__ {unsigned int offset; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,TYPE_6__*,int ,struct glsl_src_param*) ;
 unsigned int FUNC_3 (int *,unsigned int,unsigned int) ;
 int FUNC_4 (struct wined3d_shader_instruction const*,unsigned int,struct glsl_sample_function*,int ,char const*,char const*,char const*,int *,char*,char*) ;
 int FUNC_5 (TYPE_4__*,unsigned int,unsigned int,int ,struct glsl_sample_function*) ;
 int FUNC_6 (TYPE_4__*,struct glsl_sample_function*) ;
 scalar_t__ FUNC_7 (struct wined3d_shader_instruction const*) ;

__attribute__((used)) static void FUNC_8(const struct wined3d_shader_instruction *VAR_4)
{
    const char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    struct glsl_src_param VAR_8, VAR_9, VAR_10, VAR_11;
    unsigned int VAR_12, VAR_13, VAR_14;
    struct glsl_sample_function VAR_15;
    DWORD VAR_16 = 0;

    if (VAR_4->handler_idx == 129)
        VAR_16 |= VAR_1;
    if (VAR_4->handler_idx == 128)
        VAR_16 |= VAR_2;
    if (FUNC_7(VAR_4))
        VAR_16 |= VAR_3;

    VAR_12 = VAR_4->src[1].reg.idx[0].offset;
    VAR_13 = VAR_4->src[2].reg.idx[0].offset;

    FUNC_5(VAR_4->ctx, VAR_12, VAR_13, VAR_16, &VAR_15);
    FUNC_2(VAR_4, &VAR_4->src[0], VAR_15.coord_mask, &VAR_8);

    switch (VAR_4->handler_idx)
    {
        case 131:
            break;
        case 130:
            FUNC_2(VAR_4, &VAR_4->src[3], VAR_0, &VAR_9);
            VAR_5 = VAR_9.param_str;
            break;
        case 129:
            FUNC_2(VAR_4, &VAR_4->src[3], VAR_15.deriv_mask, &VAR_10);
            FUNC_2(VAR_4, &VAR_4->src[4], VAR_15.deriv_mask, &VAR_11);
            VAR_6 = VAR_10.param_str;
            VAR_7 = VAR_11.param_str;
            break;
        case 128:
            FUNC_2(VAR_4, &VAR_4->src[3], VAR_0, &VAR_9);
            VAR_5 = VAR_9.param_str;
            break;
        default:
            FUNC_0("Unhandled opcode %s.\n", FUNC_1(VAR_4->handler_idx));
            break;
    }

    VAR_14 = FUNC_3(&VAR_4->ctx->reg_maps->sampler_map, VAR_12, VAR_13);
    FUNC_4(VAR_4, VAR_14, &VAR_15, VAR_4->src[1].swizzle,
            VAR_6, VAR_7, VAR_5, &VAR_4->texel_offset, "%s", VAR_8.param_str);
    FUNC_6(VAR_4->ctx, &VAR_15);
}

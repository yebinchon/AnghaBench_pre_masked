
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct wined3d_shader_instruction {int flags; TYPE_10__* ctx; TYPE_12__* src; TYPE_4__* dst; } ;
struct shader_glsl_ctx_priv {TYPE_7__* cur_ps_args; } ;
struct glsl_src_param {int * param_str; } ;
struct glsl_sample_function {size_t coord_mask; } ;
typedef enum wined3d_shader_src_modifier { ____Placeholder_wined3d_shader_src_modifier } wined3d_shader_src_modifier ;
typedef enum wined3d_shader_resource_type { ____Placeholder_wined3d_shader_resource_type } wined3d_shader_resource_type ;
struct TYPE_15__ {int major; int minor; } ;
struct TYPE_23__ {TYPE_8__* resource_info; TYPE_1__ shader_version; } ;
struct TYPE_22__ {int type; } ;
struct TYPE_21__ {size_t tex_transform; } ;
struct TYPE_20__ {TYPE_5__* idx; } ;
struct TYPE_19__ {size_t offset; } ;
struct TYPE_17__ {TYPE_2__* idx; } ;
struct TYPE_18__ {TYPE_3__ reg; } ;
struct TYPE_16__ {size_t offset; } ;
struct TYPE_14__ {int modifiers; size_t swizzle; TYPE_6__ reg; } ;
struct TYPE_13__ {TYPE_9__* reg_maps; struct shader_glsl_ctx_priv* backend_data; } ;
typedef size_t DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t FUNC_1 (int,int) ;





 int FUNC_2 (struct wined3d_shader_instruction const*,TYPE_12__*,size_t,struct glsl_src_param*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,size_t,struct glsl_sample_function*,size_t,int *,int *,int *,int *,char*,size_t,...) ;
 int FUNC_4 (TYPE_10__*,size_t,size_t,size_t,struct glsl_sample_function*) ;
 int FUNC_5 (TYPE_10__*,struct glsl_sample_function*) ;
 int FUNC_6 (size_t,char*) ;

__attribute__((used)) static void FUNC_7(const struct wined3d_shader_instruction *VAR_13)
{
    DWORD VAR_14 = FUNC_1(VAR_13->ctx->reg_maps->shader_version.major,
            VAR_13->ctx->reg_maps->shader_version.minor);
    struct glsl_sample_function VAR_15;
    DWORD VAR_16 = 0;
    DWORD VAR_17;
    DWORD VAR_18 = 0, VAR_19;
    const struct shader_glsl_ctx_priv *VAR_20 = VAR_13->ctx->backend_data;



    if (VAR_14 < FUNC_1(2,0))
        VAR_17 = VAR_13->dst[0].reg.idx[0].offset;
    else
        VAR_17 = VAR_13->src[1].reg.idx[0].offset;

    if (VAR_14 < FUNC_1(1,4))
    {
        DWORD VAR_21 = (VAR_20->cur_ps_args->tex_transform >> VAR_17 * VAR_11)
                & VAR_10;
        enum wined3d_shader_resource_type VAR_22 = VAR_13->ctx->reg_maps->resource_info[VAR_17].type;


        if (VAR_21 & VAR_9 && VAR_22 != VAR_12)
        {
            VAR_16 |= VAR_8;
            switch (VAR_21 & ~VAR_9)
            {
                case 132:
                    FUNC_0("WINED3D_TTFF_PROJECTED with WINED3D_TTFF_COUNT1?\n");
                    break;
                case 131:
                    VAR_18 = VAR_5;
                    break;
                case 130:
                    VAR_18 = VAR_6;
                    break;
                case 129:
                case 128:
                    VAR_18 = VAR_7;
                    break;
            }
        }
    }
    else if (VAR_14 < FUNC_1(2,0))
    {
        enum wined3d_shader_src_modifier VAR_23 = VAR_13->src[0].modifiers;

        if (VAR_23 == VAR_3) {
            VAR_16 |= VAR_8;
            VAR_18 = VAR_6;
        } else if (VAR_23 == VAR_2) {
            VAR_16 |= VAR_8;
            VAR_18 = VAR_7;
        }
    }
    else
    {
        if ((VAR_13->flags & VAR_1)
                && VAR_13->ctx->reg_maps->resource_info[VAR_17].type != VAR_12)
        {

            VAR_16 |= VAR_8;
            VAR_18 = VAR_7;
        }
    }

    FUNC_4(VAR_13->ctx, VAR_17, VAR_17, VAR_16, &VAR_15);
    VAR_18 |= VAR_15.coord_mask;
    VAR_15.coord_mask = VAR_18;

    if (VAR_14 < FUNC_1(2,0)) VAR_19 = VAR_4;
    else VAR_19 = VAR_13->src[1].swizzle;



    if (VAR_14 < FUNC_1(1,4))
    {
        char VAR_24[6];
        FUNC_6(VAR_18, VAR_24);
        FUNC_3(VAR_13, VAR_17, &VAR_15, VAR_19, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                "T%u%s", VAR_17, VAR_24);
    }
    else
    {
        struct glsl_src_param VAR_25;
        FUNC_2(VAR_13, &VAR_13->src[0], VAR_18, &VAR_25);
        if (VAR_13->flags & VAR_0)
        {
            struct glsl_src_param VAR_26;
            FUNC_2(VAR_13, &VAR_13->src[0], VAR_7, &VAR_26);
            FUNC_3(VAR_13, VAR_17, &VAR_15, VAR_19, ((void*)0), ((void*)0), VAR_26.param_str,
                    ((void*)0), "%s", VAR_25.param_str);
        } else {
            FUNC_3(VAR_13, VAR_17, &VAR_15, VAR_19, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                    "%s", VAR_25.param_str);
        }
    }
    FUNC_5(VAR_13->ctx, &VAR_15);
}

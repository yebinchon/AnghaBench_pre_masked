
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_shader_instruction {scalar_t__ handler_idx; TYPE_4__* ctx; TYPE_6__* dst; int * src; } ;
struct shader_glsl_ctx_priv {TYPE_3__* cur_ps_args; } ;
struct glsl_src_param {int param_str; } ;
struct glsl_sample_function {int coord_mask; } ;
struct glsl_dst_param {int mask_str; int reg_name; } ;
struct TYPE_8__ {TYPE_1__* idx; } ;
struct TYPE_11__ {TYPE_2__ reg; } ;
struct TYPE_10__ {int buffer; struct shader_glsl_ctx_priv* backend_data; } ;
struct TYPE_9__ {int tex_transform; } ;
struct TYPE_7__ {int offset; } ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int FUNC_1 (int ,char*,int,char*,int,...) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,TYPE_6__*,struct glsl_dst_param*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,int *,int,struct glsl_src_param*) ;
 int FUNC_4 (struct wined3d_shader_instruction const*,int,struct glsl_sample_function*,int ,int *,int *,int *,int *,char*,int,char*,int,int ,char*) ;
 int FUNC_5 (TYPE_4__*,int,int,int ,struct glsl_sample_function*) ;
 int FUNC_6 (TYPE_4__*,struct glsl_sample_function*) ;
 int FUNC_7 (int,char*) ;

__attribute__((used)) static void FUNC_8(const struct wined3d_shader_instruction *VAR_9)
{
    const struct shader_glsl_ctx_priv *VAR_10 = VAR_9->ctx->backend_data;
    struct glsl_sample_function VAR_11;
    struct glsl_src_param VAR_12;
    DWORD VAR_13;
    DWORD VAR_14;
    DWORD VAR_15;
    char VAR_16[6];

    VAR_13 = VAR_9->dst[0].reg.idx[0].offset;
    VAR_15 = (VAR_10->cur_ps_args->tex_transform >> VAR_13 * VAR_8)
            & VAR_7;


    FUNC_5(VAR_9->ctx, VAR_13, VAR_13, 0, &VAR_11);
    VAR_14 = VAR_11.coord_mask;

    FUNC_7(VAR_14, VAR_16);



    if (VAR_15 & VAR_6)
    {
        DWORD VAR_17=0;
        char VAR_18[3];
        switch (VAR_15 & ~VAR_6)
        {
            case 132:
                FUNC_0("WINED3D_TTFF_PROJECTED with WINED3D_TTFF_COUNT1?\n");
                break;
            case 131:
                VAR_17 = VAR_3;
                break;
            case 130:
                VAR_17 = VAR_4;
                break;
            case 129:
            case 128:
                VAR_17 = VAR_5;
                break;
        }
        FUNC_7(VAR_17, VAR_18);
        FUNC_1(VAR_9->ctx->buffer, "T%u%s /= T%u%s;\n", VAR_13, VAR_16, VAR_13, VAR_18);
    }

    FUNC_3(VAR_9, &VAR_9->src[0], VAR_2 | VAR_3, &VAR_12);

    FUNC_4(VAR_9, VAR_13, &VAR_11, VAR_1, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
            "T%u%s + vec4(bumpenv_mat%u * %s, 0.0, 0.0)%s", VAR_13, VAR_16, VAR_13,
            VAR_12.param_str, VAR_16);

    if (VAR_9->handler_idx == VAR_0)
    {
        struct glsl_src_param VAR_19;
        struct glsl_dst_param VAR_20;

        FUNC_3(VAR_9, &VAR_9->src[0], VAR_4, &VAR_19);
        FUNC_2(VAR_9, &VAR_9->dst[0], &VAR_20);

        FUNC_1(VAR_9->ctx->buffer, "%s%s *= (%s * bumpenv_lum_scale%u + bumpenv_lum_offset%u);\n",
                VAR_20.reg_name, VAR_20.mask_str,
                VAR_19.param_str, VAR_13, VAR_13);
    }
    FUNC_6(VAR_9->ctx, &VAR_11);
}

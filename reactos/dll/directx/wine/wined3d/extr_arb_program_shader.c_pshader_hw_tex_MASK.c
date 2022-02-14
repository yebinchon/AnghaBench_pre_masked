
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_5__* idx; } ;
struct wined3d_shader_src_param {scalar_t__ modifiers; TYPE_6__ reg; } ;
struct wined3d_shader_instruction {int flags; TYPE_9__* ctx; struct wined3d_shader_src_param* src; struct wined3d_shader_dst_param* dst; } ;
struct TYPE_13__ {TYPE_3__* idx; } ;
struct wined3d_shader_dst_param {TYPE_4__ reg; } ;
struct shader_arb_ctx_priv {TYPE_8__* cur_ps_args; } ;
typedef enum wined3d_shader_src_modifier { ____Placeholder_wined3d_shader_src_modifier } wined3d_shader_src_modifier ;
typedef int WORD ;
struct TYPE_18__ {int buffer; TYPE_2__* reg_maps; struct shader_arb_ctx_priv* backend_data; } ;
struct TYPE_16__ {int tex_transform; } ;
struct TYPE_17__ {TYPE_7__ super; } ;
struct TYPE_14__ {int offset; } ;
struct TYPE_12__ {int offset; } ;
struct TYPE_10__ {int major; int minor; } ;
struct TYPE_11__ {TYPE_1__ shader_version; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int) ;
 int VAR_12 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,struct wined3d_shader_dst_param const*,char*) ;
 int FUNC_3 (struct wined3d_shader_instruction const*,struct wined3d_shader_src_param*,int ,char*) ;
 int FUNC_4 (struct wined3d_shader_instruction const*,int,char*,char*,int ,int *,int *) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(const struct wined3d_shader_instruction *VAR_13)
{
    struct shader_arb_ctx_priv *VAR_14 = VAR_13->ctx->backend_data;
    const struct wined3d_shader_dst_param *VAR_15 = &VAR_13->dst[0];
    DWORD VAR_16 = FUNC_0(VAR_13->ctx->reg_maps->shader_version.major,
            VAR_13->ctx->reg_maps->shader_version.minor);
    struct wined3d_shader_src_param VAR_17;

    char VAR_18[40];
    char VAR_19[40];
    DWORD VAR_20;
    WORD VAR_21 = 0;
    BOOL VAR_22 = VAR_0;


    FUNC_2(VAR_13, VAR_15, VAR_18);



    if (VAR_16 < FUNC_0(2,0))
        VAR_20 = VAR_15->reg.idx[0].offset;
    else
        VAR_20 = VAR_13->src[1].reg.idx[0].offset;



    if (VAR_16 < FUNC_0(1,4))
        FUNC_5(VAR_19, "fragment.texcoord[%u]", VAR_20);
    else {

        VAR_17 = VAR_13->src[0];
        if(VAR_17.modifiers == VAR_7) VAR_17.modifiers = VAR_9;
        if(VAR_17.modifiers == VAR_8) VAR_17.modifiers = VAR_9;
        FUNC_3(VAR_13, &VAR_17, 0, VAR_19);
    }






    if (VAR_16 < FUNC_0(1,4))
    {
        DWORD VAR_23 = 0;
        if (VAR_20 < VAR_1)
            VAR_23 = VAR_14->cur_ps_args->super.tex_transform >> VAR_20 * VAR_11;
        if (VAR_23 & VAR_10)
        {
            VAR_21 |= VAR_3;
            if ((VAR_23 & ~VAR_10) == VAR_12)
                VAR_22 = VAR_4;
        }
    }
    else if (VAR_16 < FUNC_0(2,0))
    {
        enum wined3d_shader_src_modifier VAR_24 = VAR_13->src[0].modifiers;
        if (VAR_24 == VAR_8)
        {
            VAR_22 = VAR_4;
            VAR_21 |= VAR_3;
        } else if(VAR_24 == VAR_7) {
            VAR_21 |= VAR_3;
        }
    } else {
        if (VAR_13->flags & VAR_6) VAR_21 |= VAR_3;
        if (VAR_13->flags & VAR_5) VAR_21 |= VAR_2;
    }

    if (VAR_22)
    {


        FUNC_1(VAR_13->ctx->buffer, "SWZ TA, %s, x, y, z, z;\n", VAR_19);
        FUNC_6(VAR_19, "TA");
    }

    FUNC_4(VAR_13, VAR_20, VAR_18, VAR_19, VAR_21, ((void*)0), ((void*)0));
}

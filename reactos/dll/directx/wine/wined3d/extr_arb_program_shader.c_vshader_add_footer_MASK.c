
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct TYPE_6__ {int type; } ;
struct wined3d_shader_reg_maps {TYPE_1__ shader_version; int fog; } ;
struct TYPE_8__ {unsigned int user_clip_distances; } ;
struct wined3d_gl_info {int * supported; TYPE_3__ limits; } ;
struct shader_arb_ctx_priv {scalar_t__ target_version; unsigned int vs_clipplanes; int footer_written; } ;
struct arb_vshader_private {int dummy; } ;
struct TYPE_9__ {unsigned int clipplane_mask; int clip_texcoord; } ;
struct TYPE_10__ {TYPE_4__ boolclip; } ;
struct TYPE_7__ {scalar_t__ fog_src; scalar_t__ clip_enabled; } ;
struct arb_vs_compile_args {TYPE_5__ clip; TYPE_2__ super; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct arb_vshader_private const*,struct wined3d_shader_reg_maps const*,struct wined3d_gl_info const*) ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,...) ;
 scalar_t__ FUNC_3 (struct wined3d_gl_info const*) ;

__attribute__((used)) static void FUNC_4(struct shader_arb_ctx_priv *VAR_8,
        const struct arb_vshader_private *VAR_9, const struct arb_vs_compile_args *VAR_10,
        const struct wined3d_shader_reg_maps *VAR_11, const struct wined3d_gl_info *VAR_12,
        struct wined3d_string_buffer *VAR_13)
{
    unsigned int VAR_14;






    if (VAR_10->super.fog_src == VAR_6)
    {
        FUNC_2(VAR_13, "MOV result.fogcoord, TMP_OUT.z;\n");
    }
    else
    {
        if (!VAR_11->fog)
        {

            FUNC_2(VAR_13, "ADD result.fogcoord, posFixup.x, -posFixup.x;\n");
        }
        else
        {

            const char *VAR_15 = FUNC_0(VAR_11->shader_version.type, VAR_3);
            const char *VAR_16 = FUNC_0(VAR_11->shader_version.type, VAR_1);

            FUNC_2(VAR_13, "MIN TMP_FOGCOORD.x, TMP_FOGCOORD.x, %s;\n", VAR_16);
            FUNC_2(VAR_13, "MAX result.fogcoord.x, TMP_FOGCOORD.x, %s;\n", VAR_15);
        }
    }


    if (FUNC_3(VAR_12) && VAR_8->target_version >= VAR_4)
    {
        if (VAR_10->super.clip_enabled)
        {
            for (VAR_14 = 0; VAR_14 < VAR_8->vs_clipplanes; VAR_14++)
            {
                FUNC_2(VAR_13, "DP4 result.clip[%u].x, TMP_OUT, state.clip[%u].plane;\n", VAR_14, VAR_14);
            }
        }
    }
    else if (VAR_10->clip.boolclip.clip_texcoord)
    {
        static const char VAR_17[4] = {'x', 'y', 'z', 'w'};
        unsigned int VAR_18 = 0;
        const char *VAR_19 = FUNC_0(VAR_7, VAR_3);

        for (VAR_14 = 0; VAR_14 < VAR_12->limits.user_clip_distances; ++VAR_14)
        {
            if (VAR_10->clip.boolclip.clipplane_mask & (1u << VAR_14))
            {
                FUNC_2(VAR_13, "DP4 TA.%c, TMP_OUT, state.clip[%u].plane;\n",
                               VAR_17[VAR_18++], VAR_14);
            }
        }
        switch (VAR_18)
        {
            case 0:
                FUNC_2(VAR_13, "MOV TA, %s;\n", VAR_19);
                break;
            case 1:
                FUNC_2(VAR_13, "MOV TA.yzw, %s;\n", VAR_19);
                break;
            case 2:
                FUNC_2(VAR_13, "MOV TA.zw, %s;\n", VAR_19);
                break;
            case 3:
                FUNC_2(VAR_13, "MOV TA.w, %s;\n", VAR_19);
                break;
        }
        FUNC_2(VAR_13, "MOV result.texcoord[%u], TA;\n",
                       VAR_10->clip.boolclip.clip_texcoord - 1);
    }
    if (!VAR_12->supported[VAR_0])
    {
        FUNC_2(VAR_13, "MUL TA, posFixup, TMP_OUT.w;\n");
        FUNC_2(VAR_13, "ADD TMP_OUT.x, TMP_OUT.x, TA.z;\n");
        FUNC_2(VAR_13, "MAD TMP_OUT.y, TMP_OUT.y, posFixup.y, TA.w;\n");



        if (FUNC_1(VAR_9, VAR_11, VAR_12))
        {
            const char *VAR_20 = FUNC_0(VAR_7, VAR_2);
            FUNC_2(VAR_13, "MAD TMP_OUT.z, TMP_OUT.z, %s, -TMP_OUT.w;\n", VAR_20);
        }
        else
        {
            FUNC_2(VAR_13, "ADD TMP_OUT.z, TMP_OUT.z, TMP_OUT.z;\n");
            FUNC_2(VAR_13, "ADD TMP_OUT.z, TMP_OUT.z, -TMP_OUT.w;\n");
        }
    }

    FUNC_2(VAR_13, "MOV result.position, TMP_OUT;\n");

    VAR_8->footer_written = VAR_5;
}

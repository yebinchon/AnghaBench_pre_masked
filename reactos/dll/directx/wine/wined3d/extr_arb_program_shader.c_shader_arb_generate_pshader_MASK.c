
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct wined3d_string_buffer {int buffer; } ;
struct TYPE_9__ {int major; } ;
struct wined3d_shader_reg_maps {int temporary; scalar_t__ loop_depth; int rt_mask; int bumpmat; unsigned int luminanceparams; unsigned int integer_constants; scalar_t__ vpos; scalar_t__ usesdsy; TYPE_1__ shader_version; scalar_t__ usescall; scalar_t__ usesifc; scalar_t__ usesfacing; scalar_t__ usestexldl; scalar_t__ usestexldd; scalar_t__ usesdsx; } ;
struct TYPE_10__ {unsigned int color0_reg; scalar_t__ color0_mov; } ;
struct TYPE_11__ {TYPE_2__ ps; } ;
struct wined3d_shader {TYPE_3__ u; struct arb_pshader_private* backend_data; struct wined3d_shader_reg_maps reg_maps; } ;
struct TYPE_14__ {scalar_t__ arb_ps_local_constants; } ;
struct wined3d_gl_info {int quirks; TYPE_6__ limits; scalar_t__* supported; } ;
struct shader_arb_ctx_priv {scalar_t__ target_version; struct arb_ps_compile_args const* cur_ps_args; struct arb_ps_np2fixup_info* cur_np2fixup_info; void* ps_post_process; int control_frames; struct arb_ps_compiled_shader* compiled_fprog; } ;
struct arb_pshader_private {unsigned int clipplane_emulation; } ;
struct TYPE_15__ {unsigned int active; unsigned char num_consts; int * idx; } ;
struct arb_ps_np2fixup_info {int offset; TYPE_7__ super; } ;
struct arb_ps_compiled_shader {unsigned char numbumpenvmatconsts; int* int_consts; int ycorrection; int num_int_consts; TYPE_5__* luminanceconst; TYPE_4__* bumpenvmatconst; struct arb_ps_np2fixup_info np2fixup_info; } ;
struct TYPE_16__ {int fog; unsigned int np2_fixup; void* srgb_correction; } ;
struct arb_ps_compile_args {TYPE_8__ super; scalar_t__ clip; } ;
typedef int priv_ctx ;
typedef unsigned int WORD ;
typedef scalar_t__ UINT ;
struct TYPE_13__ {unsigned int texunit; void* const_num; } ;
struct TYPE_12__ {unsigned int texunit; void* const_num; } ;
typedef int GLuint ;
typedef int DWORD ;
typedef void* BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 void* VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_4 (char*,int ) ;
 void* VAR_8 ;
 void* VAR_9 ;




 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct wined3d_string_buffer*,char*,char*) ;
 int FUNC_6 (struct wined3d_string_buffer*,char*,char*,char*,char*,char*,int) ;
 int VAR_12 ;
 int* FUNC_7 (struct wined3d_shader const*,unsigned int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (struct wined3d_shader const*,struct arb_ps_compile_args const*,struct shader_arb_ctx_priv*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct shader_arb_ctx_priv*,int ,int) ;
 int FUNC_13 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_14 (struct wined3d_string_buffer*,int ) ;
 int FUNC_15 (struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_16 (struct wined3d_shader const*,struct wined3d_shader_reg_maps const*,struct wined3d_string_buffer*,struct wined3d_gl_info const*,int *,struct shader_arb_ctx_priv*) ;
 int FUNC_17 (struct wined3d_shader const*,struct wined3d_string_buffer*,struct wined3d_shader_reg_maps const*,struct shader_arb_ctx_priv*,int *,int *) ;
 int FUNC_18 (char*,char*,...) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 int FUNC_20 (char*,char*) ;
 int FUNC_21 (int ,char*) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static GLuint FUNC_22(const struct wined3d_shader *VAR_15,
        const struct wined3d_gl_info *VAR_16, struct wined3d_string_buffer *VAR_17,
        const struct arb_ps_compile_args *VAR_18, struct arb_ps_compiled_shader *VAR_19)
{
    const struct wined3d_shader_reg_maps *VAR_20 = &VAR_15->reg_maps;
    GLuint VAR_21;
    char VAR_22[16];
    DWORD VAR_23 = 0;
    struct shader_arb_ctx_priv VAR_24;
    BOOL VAR_25 = VAR_1;
    BOOL VAR_26 = VAR_1;
    struct arb_pshader_private *VAR_27 = VAR_15->backend_data;
    DWORD VAR_28;
    BOOL VAR_29 = VAR_1;

    char VAR_30[4][4];
    char VAR_31[17];
    unsigned int VAR_32, VAR_33 = 0;

    for (VAR_32 = 0, VAR_28 = VAR_20->temporary; VAR_28; VAR_28 >>= 1, ++VAR_32)
    {
        if (!(VAR_28 & 1)
                || (VAR_15->u.ps.color0_mov && VAR_32 == VAR_15->u.ps.color0_reg)
                || (VAR_20->shader_version.major < 2 && !VAR_32))
            continue;

        FUNC_18(VAR_30[VAR_33], "R%u", VAR_32);
        ++VAR_33;
        if (VAR_33 == 4) break;
    }

    switch(VAR_33) {
        case 0:
            FUNC_18(VAR_30[0], "TA");
            FUNC_18(VAR_30[1], "TB");
            FUNC_18(VAR_30[2], "TC");
            FUNC_18(VAR_30[3], "TD");
            VAR_25 = VAR_8;
            break;
        case 1:
            FUNC_18(VAR_30[1], "TA");
            FUNC_18(VAR_30[2], "TB");
            FUNC_18(VAR_30[3], "TC");
            break;
        case 2:
            FUNC_18(VAR_30[2], "TA");
            FUNC_18(VAR_30[3], "TB");
            break;
        case 3:
            FUNC_18(VAR_30[3], "TA");
            break;
        case 4:
            break;
    }


    FUNC_12(&VAR_24, 0, sizeof(VAR_24));
    VAR_24.cur_ps_args = VAR_18;
    VAR_24.compiled_fprog = VAR_19;
    VAR_24.cur_np2fixup_info = &VAR_19->np2fixup_info;
    FUNC_10(VAR_15, VAR_18, &VAR_24);
    FUNC_11(&VAR_24.control_frames);
    VAR_24.ps_post_process = VAR_18->super.srgb_correction;
    if(VAR_20->usesdsx || VAR_20->usesdsy || VAR_20->loop_depth > 0 || VAR_20->usestexldd ||
       VAR_20->usestexldl || VAR_20->usesfacing || VAR_20->usesifc || VAR_20->usescall)
    {
        VAR_26 = VAR_8;
    }

    FUNC_13(VAR_17, "!!ARBfp1.0\n");
    if (VAR_26 && VAR_16->supported[VAR_6])
    {
        FUNC_13(VAR_17, "OPTION NV_fragment_program2;\n");
        VAR_24.target_version = VAR_5;
    }
    else if (VAR_26 && VAR_16->supported[VAR_7])
    {
        FUNC_13(VAR_17, "OPTION NV_fragment_program;\n");
        VAR_24.target_version = VAR_4;
    } else {
        if(VAR_26)
        {



            FUNC_0("The shader requires instructions that are not available in plain GL_ARB_fragment_program\n");
            FUNC_0("Try GLSL\n");
        }
        VAR_24.target_version = VAR_0;
    }

    if (VAR_20->rt_mask > 1)
    {
        FUNC_13(VAR_17, "OPTION ARB_draw_buffers;\n");
    }

    if (VAR_20->shader_version.major < 3)
    {
        switch (VAR_18->super.fog)
        {
            case 128:
                break;
            case 129:
                if (VAR_16->quirks & VAR_11)
                {
                    VAR_29 = VAR_8;
                    VAR_24.ps_post_process = VAR_8;
                    break;
                }
                FUNC_13(VAR_17, "OPTION ARB_fog_linear;\n");
                break;
            case 131:
                FUNC_13(VAR_17, "OPTION ARB_fog_exp;\n");
                break;
            case 130:
                FUNC_13(VAR_17, "OPTION ARB_fog_exp2;\n");
                break;
        }
    }





    FUNC_13(VAR_17, "TEMP TA;\n");
    FUNC_13(VAR_17, "TEMP TB;\n");
    FUNC_13(VAR_17, "TEMP TC;\n");
    if(VAR_25) FUNC_13(VAR_17, "TEMP TD;\n");
    FUNC_13(VAR_17, "PARAM coefdiv = { 0.5, 0.25, 0.125, 0.0625 };\n");
    FUNC_13(VAR_17, "PARAM coefmul = { 2, 4, 8, 16 };\n");
    FUNC_21(VAR_12, VAR_31);
    FUNC_13(VAR_17, "PARAM ps_helper_const = { 0.0, 1.0, %s, 0.0 };\n", VAR_31);

    if (VAR_20->shader_version.major < 2)
    {
        FUNC_20(VAR_22, "R0");
    }
    else
    {
        if (VAR_24.ps_post_process)
        {
            if (VAR_15->u.ps.color0_mov)
            {
                FUNC_18(VAR_22, "R%u", VAR_15->u.ps.color0_reg);
            }
            else
            {
                FUNC_13(VAR_17, "TEMP TMP_COLOR;\n");
                FUNC_20(VAR_22, "TMP_COLOR");
            }
        } else {
            FUNC_20(VAR_22, "result.color");
        }
    }

    if (VAR_18->super.srgb_correction)
    {
        FUNC_13(VAR_17, "PARAM srgb_consts0 = ");
        FUNC_14(VAR_17, VAR_13);
        FUNC_13(VAR_17, ";\n");
        FUNC_13(VAR_17, "PARAM srgb_consts1 = ");
        FUNC_14(VAR_17, VAR_14);
        FUNC_13(VAR_17, ";\n");
    }


    FUNC_16(VAR_15, VAR_20, VAR_17, VAR_16, ((void*)0), &VAR_24);

    for (VAR_32 = 0, VAR_28 = VAR_20->bumpmat; VAR_28; VAR_28 >>= 1, ++VAR_32)
    {
        unsigned char VAR_34;

        if (!(VAR_28 & 1)) continue;

        VAR_34 = VAR_19->numbumpenvmatconsts;
        VAR_19->bumpenvmatconst[VAR_34].const_num = VAR_9;
        VAR_19->bumpenvmatconst[VAR_34].texunit = VAR_32;
        VAR_19->luminanceconst[VAR_34].const_num = VAR_9;
        VAR_19->luminanceconst[VAR_34].texunit = VAR_32;
        VAR_19->bumpenvmatconst[VAR_34].const_num = VAR_23++;
        FUNC_13(VAR_17, "PARAM bumpenvmat%d = program.local[%d];\n",
                       VAR_32, VAR_19->bumpenvmatconst[VAR_34].const_num);
        VAR_19->numbumpenvmatconsts = VAR_34 + 1;

        if (!(VAR_20->luminanceparams & (1u << VAR_32)))
            continue;

        VAR_19->luminanceconst[VAR_34].const_num = VAR_23++;
        FUNC_13(VAR_17, "PARAM luminance%d = program.local[%d];\n",
                       VAR_32, VAR_19->luminanceconst[VAR_34].const_num);
    }

    for (VAR_32 = 0; VAR_32 < VAR_10; ++VAR_32)
    {
        VAR_19->int_consts[VAR_32] = VAR_9;
        if (VAR_20->integer_constants & (1u << VAR_32) && VAR_24.target_version >= VAR_4)
        {
            const DWORD *VAR_35 = FUNC_7(VAR_15, VAR_32);

            if(VAR_35)
            {
                FUNC_13(VAR_17, "PARAM I%u = {%u, %u, %u, -1};\n", VAR_32,
                                VAR_35[0], VAR_35[1], VAR_35[2]);
            }
            else
            {
                VAR_19->int_consts[VAR_32] = VAR_23;
                VAR_19->num_int_consts++;
                FUNC_13(VAR_17, "PARAM I%u = program.local[%u];\n", VAR_32, VAR_23++);
            }
        }
    }

    if(VAR_20->vpos || VAR_20->usesdsy)
    {
        VAR_19->ycorrection = VAR_23;
        FUNC_13(VAR_17, "PARAM ycorrection = program.local[%u];\n", VAR_23++);

        if(VAR_20->vpos)
        {
            FUNC_13(VAR_17, "TEMP vpos;\n");





            FUNC_13(VAR_17, "MAD vpos, fragment.position, ycorrection.zyww, ycorrection.wxww;\n");
            FUNC_13(VAR_17, "FLR vpos.xy, vpos;\n");
        }
    }
    else
    {
        VAR_19->ycorrection = VAR_9;
    }







    if (VAR_24.cur_ps_args->super.np2_fixup) {
        unsigned char VAR_36 = 0;

        struct arb_ps_np2fixup_info* const VAR_37 = VAR_24.cur_np2fixup_info;
        const WORD VAR_38 = VAR_24.cur_ps_args->super.np2_fixup;
        const UINT VAR_39 = VAR_16->limits.arb_ps_local_constants;

        VAR_37->offset = VAR_23;
        VAR_37->super.active = 0;

        for (VAR_32 = 0; VAR_32 < VAR_3; ++VAR_32)
        {
            if (!(VAR_38 & (1u << VAR_32)))
                continue;

            if (VAR_37->offset + (VAR_36 >> 1) < VAR_39)
            {
                VAR_37->super.active |= (1u << VAR_32);
                VAR_37->super.idx[VAR_32] = VAR_36++;
            }
            else
            {
                FUNC_2("No free constant found to load NP2 fixup data into shader. "
                      "Sampling from this texture will probably look wrong.\n");
                break;
            }
        }

        VAR_37->super.num_consts = (VAR_36 + 1) >> 1;
        if (VAR_37->super.num_consts) {
            FUNC_13(VAR_17, "PARAM np2fixup[%u] = { program.env[%u..%u] };\n",
                           VAR_37->super.num_consts, VAR_37->offset, VAR_37->super.num_consts + VAR_37->offset - 1);
        }
    }

    if (VAR_27->clipplane_emulation != ~0U && VAR_18->clip)
    {
        FUNC_13(VAR_17, "KIL fragment.texcoord[%u];\n", VAR_27->clipplane_emulation);
    }


    if (FUNC_1(FUNC_17(VAR_15, VAR_17, VAR_20, &VAR_24, ((void*)0), ((void*)0))))
        return 0;

    if(VAR_18->super.srgb_correction) {
        FUNC_6(VAR_17, VAR_22, VAR_30[0], VAR_30[1], VAR_30[2], VAR_30[3],
                                  VAR_24.target_version >= VAR_4);
    }

    if (VAR_29)
        FUNC_5(VAR_17, VAR_22, "TA");

    if(FUNC_19(VAR_22, "result.color")) {
        FUNC_13(VAR_17, "MOV result.color, %s;\n", VAR_22);
    }
    FUNC_13(VAR_17, "END\n");


    FUNC_3(FUNC_9(1, &VAR_21));

    FUNC_4("Creating a hw pixel shader, prg=%d\n", VAR_21);
    FUNC_3(FUNC_8(VAR_2, VAR_21));

    FUNC_4("Created hw pixel shader, prg=%d\n", VAR_21);
    if (!FUNC_15(VAR_16, VAR_2, VAR_17->buffer))
        return 0;

    return VAR_21;
}

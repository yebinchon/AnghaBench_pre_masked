
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {TYPE_8__* dst; TYPE_5__* ctx; } ;
struct wined3d_shader {struct wined3d_device* device; } ;
struct wined3d_gl_info {int * supported; } ;
struct wined3d_device {TYPE_2__* adapter; } ;
struct shader_arb_ctx_priv {TYPE_12__* cur_ps_args; TYPE_10__* cur_np2fixup_info; TYPE_7__* cur_vs_args; } ;
struct color_fixup_masks {scalar_t__ sign; scalar_t__ source; } ;
typedef enum wined3d_shader_resource_type { ____Placeholder_wined3d_shader_resource_type } wined3d_shader_resource_type ;
typedef int WORD ;
struct TYPE_24__ {unsigned int active; unsigned char* idx; } ;
struct TYPE_23__ {int modifiers; int write_mask; } ;
struct TYPE_21__ {size_t* samplers; } ;
struct TYPE_22__ {TYPE_6__ vertex; } ;
struct TYPE_20__ {TYPE_4__* reg_maps; struct wined3d_shader* shader; struct shader_arb_ctx_priv* backend_data; struct wined3d_string_buffer* buffer; } ;
struct TYPE_18__ {int type; } ;
struct TYPE_19__ {TYPE_3__ shader_version; TYPE_1__* resource_info; } ;
struct TYPE_17__ {struct wined3d_gl_info gl_info; } ;
struct TYPE_16__ {int type; } ;
struct TYPE_14__ {unsigned int np2_fixup; int * color_fixup; } ;
struct TYPE_15__ {TYPE_11__ super; } ;
struct TYPE_13__ {TYPE_9__ super; } ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;




 int VAR_11 ;
 int FUNC_2 (int ,int ) ;
 struct color_fixup_masks FUNC_3 (int ,int ) ;
 int FUNC_4 (struct wined3d_string_buffer*,char const*,char const*,int ,int ,int ,struct color_fixup_masks) ;
 int FUNC_5 (struct wined3d_string_buffer*,char*,...) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(const struct wined3d_shader_instruction *VAR_12, DWORD VAR_13,
        const char *VAR_14, const char *VAR_15, WORD VAR_16, const char *VAR_17, const char *VAR_18)
{
    enum wined3d_shader_resource_type VAR_19 = VAR_12->ctx->reg_maps->resource_info[VAR_13].type;
    struct wined3d_string_buffer *VAR_20 = VAR_12->ctx->buffer;
    const char *VAR_21;
    BOOL VAR_22 = VAR_3;
    struct shader_arb_ctx_priv *VAR_23 = VAR_12->ctx->backend_data;
    const char *VAR_24;
    BOOL VAR_25 = FUNC_6(VAR_12->ctx->reg_maps->shader_version.type);
    const struct wined3d_shader *VAR_26;
    const struct wined3d_device *VAR_27;
    const struct wined3d_gl_info *VAR_28;
    const char *VAR_29 = VAR_14;
    struct color_fixup_masks VAR_30;


    if(!VAR_25) VAR_13 += VAR_4;

    switch (VAR_19)
    {
        case 131:
            VAR_21 = "1D";
            break;

        case 130:
            VAR_26 = VAR_12->ctx->shader;
            VAR_27 = VAR_26->device;
            VAR_28 = &VAR_27->adapter->gl_info;

            if (VAR_25 && VAR_23->cur_ps_args->super.np2_fixup & (1u << VAR_13)
                    && VAR_28->supported[VAR_1])
                VAR_21 = "RECT";
            else
                VAR_21 = "2D";
            if (FUNC_6(VAR_12->ctx->reg_maps->shader_version.type))
            {
                if (VAR_23->cur_np2fixup_info->super.active & (1u << VAR_13))
                {
                    if (VAR_16) FUNC_1("Only ordinary sampling from NP2 textures is supported.\n");
                    else VAR_22 = VAR_9;
                }
            }
            break;

        case 129:
            VAR_21 = "3D";
            break;

        case 128:
            VAR_21 = "CUBE";
            break;

        default:
            FUNC_0("Unexpected resource type %#x.\n", VAR_19);
            VAR_21 = "";
    }




    if(VAR_12->dst[0].modifiers & VAR_10) VAR_24 = "_SAT";
    else VAR_24 = "";


    if(VAR_13 >= VAR_4)
    {
        VAR_13 = VAR_23->cur_vs_args->vertex.samplers[VAR_13 - VAR_4];
    }

    if (VAR_25)
    {
        VAR_30 = FUNC_3(VAR_23->cur_ps_args->super.color_fixup[VAR_13],
                VAR_12->dst[0].write_mask);

        if (VAR_30.source || VAR_30.sign)
            VAR_29 = "TA";
    }

    if (VAR_16 & VAR_6)
    {
        if(VAR_16 & VAR_8) FUNC_1("Projected texture sampling with custom derivatives\n");
        if(VAR_16 & VAR_5) FUNC_1("Biased texture sampling with custom derivatives\n");
        FUNC_5(VAR_20, "TXD%s %s, %s, %s, %s, texture[%u], %s;\n", VAR_24, VAR_29, VAR_15,
                       VAR_17, VAR_18, VAR_13, VAR_21);
    }
    else if(VAR_16 & VAR_7)
    {
        if(VAR_16 & VAR_8) FUNC_1("Projected texture sampling with explicit lod\n");
        if(VAR_16 & VAR_5) FUNC_1("Biased texture sampling with explicit lod\n");
        FUNC_5(VAR_20, "TXL%s %s, %s, texture[%u], %s;\n", VAR_24, VAR_29, VAR_15,
                       VAR_13, VAR_21);
    }
    else if (VAR_16 & VAR_5)
    {

        if(VAR_16 & VAR_8) FUNC_1("Biased and Projected texture sampling\n");

        FUNC_5(VAR_20, "TXB%s %s, %s, texture[%u], %s;\n", VAR_24, VAR_29, VAR_15, VAR_13, VAR_21);
    }
    else if (VAR_16 & VAR_8)
    {
        FUNC_5(VAR_20, "TXP%s %s, %s, texture[%u], %s;\n", VAR_24, VAR_29, VAR_15, VAR_13, VAR_21);
    }
    else
    {
        if (VAR_22)
        {
            const unsigned char VAR_31 = VAR_23->cur_np2fixup_info->super.idx[VAR_13];
            FUNC_5(VAR_20, "MUL TA, np2fixup[%u].%s, %s;\n", VAR_31 >> 1,
                           (VAR_31 % 2) ? "zwxy" : "xyzw", VAR_15);

            FUNC_5(VAR_20, "TEX%s %s, TA, texture[%u], %s;\n", VAR_24, VAR_29, VAR_13, VAR_21);
        }
        else
            FUNC_5(VAR_20, "TEX%s %s, %s, texture[%u], %s;\n", VAR_24, VAR_29, VAR_15, VAR_13, VAR_21);
    }

    if (VAR_25)
    {
        FUNC_4(VAR_20, VAR_14, VAR_29,
                FUNC_2(VAR_11, VAR_0),
                FUNC_2(VAR_11, VAR_2),
                VAR_23->cur_ps_args->super.color_fixup[VAR_13], VAR_30);
    }
}

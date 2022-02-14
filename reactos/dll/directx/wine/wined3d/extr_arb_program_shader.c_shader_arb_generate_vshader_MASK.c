
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int buffer; } ;
struct wined3d_shader_signature {int dummy; } ;
struct TYPE_4__ {scalar_t__* texcoord_mask; } ;
struct wined3d_shader_reg_maps {unsigned int integer_constants; TYPE_2__ u; scalar_t__ fog; } ;
struct wined3d_shader {TYPE_1__* device; struct wined3d_shader_reg_maps reg_maps; struct arb_vshader_private* backend_data; } ;
struct wined3d_gl_info {int quirks; scalar_t__* supported; } ;
struct shader_arb_priv {int ffp_proj_control; } ;
struct shader_arb_ctx_priv {scalar_t__ target_version; int footer_written; int in_main_func; int vs_clipplanes; int control_frames; struct arb_vs_compile_args const* cur_vs_args; } ;
struct arb_vshader_private {int rel_offset; } ;
struct arb_vs_compiled_shader {int pos_fixup; int num_int_consts; int * int_consts; } ;
struct arb_vs_compile_args {int dummy; } ;
typedef int priv_ctx ;
struct TYPE_3__ {struct shader_arb_priv* shader_priv; } ;
typedef int GLuint ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_2 (char*,int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char* FUNC_3 (int ,int ) ;
 int VAR_16 ;
 int * FUNC_4 (struct wined3d_shader const*,unsigned int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,int*) ;
 int FUNC_7 (struct wined3d_shader const*,struct wined3d_shader_signature const*,struct shader_arb_ctx_priv*,struct arb_vs_compiled_shader*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct shader_arb_ctx_priv*,int ,int) ;
 scalar_t__ FUNC_10 (struct arb_vshader_private const*,struct wined3d_shader_reg_maps const*,struct wined3d_gl_info const*) ;
 scalar_t__ FUNC_11 (struct arb_vshader_private const*,struct wined3d_shader_reg_maps const*,struct wined3d_gl_info const*) ;
 int FUNC_12 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_13 (struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_14 (struct wined3d_shader const*,struct wined3d_shader_reg_maps const*,struct wined3d_string_buffer*,struct wined3d_gl_info const*,int *,struct shader_arb_ctx_priv*) ;
 int FUNC_15 (struct wined3d_shader const*,struct wined3d_string_buffer*,struct wined3d_shader_reg_maps const*,struct shader_arb_ctx_priv*,int *,int *) ;
 int FUNC_16 (struct shader_arb_ctx_priv*,struct arb_vshader_private const*,struct arb_vs_compile_args const*,struct wined3d_shader_reg_maps const*,struct wined3d_gl_info const*,struct wined3d_string_buffer*) ;
 int FUNC_17 (int ,char*) ;

__attribute__((used)) static GLuint FUNC_18(const struct wined3d_shader *VAR_17,
        const struct wined3d_gl_info *VAR_18, struct wined3d_string_buffer *VAR_19,
        const struct arb_vs_compile_args *VAR_20, struct arb_vs_compiled_shader *VAR_21,
        const struct wined3d_shader_signature *VAR_22)
{
    const struct arb_vshader_private *VAR_23 = VAR_17->backend_data;
    const struct wined3d_shader_reg_maps *VAR_24 = &VAR_17->reg_maps;
    struct shader_arb_priv *VAR_25 = VAR_17->device->shader_priv;
    GLuint VAR_26;
    DWORD VAR_27 = 0;
    struct shader_arb_ctx_priv VAR_28;
    unsigned int VAR_29;

    FUNC_9(&VAR_28, 0, sizeof(VAR_28));
    VAR_28.cur_vs_args = VAR_20;
    FUNC_8(&VAR_28.control_frames);
    FUNC_7(VAR_17, VAR_22, &VAR_28, VAR_21);


    FUNC_12(VAR_19, "!!ARBvp1.0\n");




    if (VAR_18->supported[VAR_9])
    {
        FUNC_12(VAR_19, "OPTION NV_vertex_program3;\n");
        VAR_28.target_version = VAR_6;
        FUNC_12(VAR_19, "ADDRESS aL;\n");
    }
    else if (VAR_18->supported[VAR_8])
    {
        FUNC_12(VAR_19, "OPTION NV_vertex_program2;\n");
        VAR_28.target_version = VAR_5;
        FUNC_12(VAR_19, "ADDRESS aL;\n");
    } else {
        VAR_28.target_version = VAR_0;
    }

    FUNC_12(VAR_19, "TEMP TMP_OUT;\n");
    if (VAR_24->fog)
        FUNC_12(VAR_19, "TEMP TMP_FOGCOORD;\n");
    if (FUNC_10(VAR_23, VAR_24, VAR_18))
    {
        char VAR_30[17];
        FUNC_17(VAR_16, VAR_30);
        FUNC_12(VAR_19, "PARAM helper_const = { 0.0, 1.0, 2.0, %s};\n", VAR_30);
    }
    if (FUNC_11(VAR_23, VAR_24, VAR_18))
    {
        FUNC_12(VAR_19, "PARAM rel_addr_const = { 0.5, %d.0, 0.0, 0.0 };\n", VAR_23->rel_offset);
        FUNC_12(VAR_19, "TEMP A0_SHADOW;\n");
    }

    FUNC_12(VAR_19, "TEMP TA;\n");
    FUNC_12(VAR_19, "TEMP TB;\n");


    FUNC_14(VAR_17, VAR_24, VAR_19, VAR_18,
            &VAR_28.vs_clipplanes, &VAR_28);

    for (VAR_29 = 0; VAR_29 < VAR_13; ++VAR_29)
    {
        VAR_21->int_consts[VAR_29] = VAR_12;
        if (VAR_24->integer_constants & (1u << VAR_29) && VAR_28.target_version >= VAR_5)
        {
            const DWORD *VAR_31 = FUNC_4(VAR_17, VAR_29);

            if(VAR_31)
            {
                FUNC_12(VAR_19, "PARAM I%u = {%u, %u, %u, -1};\n", VAR_29,
                                VAR_31[0], VAR_31[1], VAR_31[2]);
            }
            else
            {
                VAR_21->int_consts[VAR_29] = VAR_27;
                VAR_21->num_int_consts++;
                FUNC_12(VAR_19, "PARAM I%u = program.local[%u];\n", VAR_29, VAR_27++);
            }
        }
    }


    FUNC_12(VAR_19, "PARAM posFixup = program.local[%u];\n", VAR_27);
    VAR_21->pos_fixup = VAR_27++;
    if (!VAR_18->supported[VAR_7])
    {
        const char *VAR_32 = FUNC_3(VAR_15, VAR_1);
        FUNC_12(VAR_19, "MOV result.color.secondary, %s;\n", VAR_32);

        if (VAR_18->quirks & VAR_14 && !VAR_25->ffp_proj_control)
        {
            int VAR_33;
            const char *VAR_34 = FUNC_3(VAR_15, VAR_2);
            for(VAR_33 = 0; VAR_33 < VAR_4; VAR_33++)
            {
                if (VAR_24->u.texcoord_mask[VAR_33] && VAR_24->u.texcoord_mask[VAR_33] != VAR_11)
                    FUNC_12(VAR_19, "MOV result.texcoord[%u].w, %s\n", VAR_33, VAR_34);
            }
        }
    }


    VAR_28.in_main_func = VAR_10;

    if (FUNC_0(FUNC_15(VAR_17, VAR_19, VAR_24, &VAR_28, ((void*)0), ((void*)0))))
        return -1;

    if (!VAR_28.footer_written) FUNC_16(&VAR_28,
            VAR_23, VAR_20, VAR_24, VAR_18, VAR_19);

    FUNC_12(VAR_19, "END\n");


    FUNC_1(FUNC_6(1, &VAR_26));

    FUNC_2("Creating a hw vertex shader, prg=%d\n", VAR_26);
    FUNC_1(FUNC_5(VAR_3, VAR_26));

    FUNC_2("Created hw vertex shader, prg=%d\n", VAR_26);
    if (!FUNC_13(VAR_18, VAR_3, VAR_19->buffer))
        return -1;

    return VAR_26;
}

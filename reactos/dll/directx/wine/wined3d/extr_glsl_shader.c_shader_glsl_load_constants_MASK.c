
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct wined3d_vec4 {float member_0; float member_1; float member_2; float member_3; float x; } ;
struct wined3d_state {int** texture_states; int* render_states; TYPE_8__* fb; int ps_consts_b; int ps_consts_i; int ps_consts_f; struct wined3d_light_info** lights; struct wined3d_shader** shader; int vs_consts_b; int vs_consts_i; int vs_consts_f; } ;
struct TYPE_16__ {int boolean_constants; int integer_constants; } ;
struct wined3d_shader {TYPE_6__ reg_maps; } ;
struct wined3d_matrix {int _11; } ;
struct TYPE_15__ {int type; } ;
struct wined3d_light_info {TYPE_5__ OriginalParms; } ;
struct TYPE_11__ {int user_clip_distances; } ;
struct wined3d_gl_info {TYPE_1__ limits; } ;
struct wined3d_context {int constant_update_mask; int render_offscreen; struct wined3d_gl_info* gl_info; struct glsl_context_data* shader_backend_data; } ;
struct wined3d_color {float r; } ;
struct shader_glsl_priv {int next_constant_version; int program_lookup; int stack; int pconst_heap; int vconst_heap; } ;
struct TYPE_19__ {int* bumpenv_mat_location; int* bumpenv_lum_scale_location; int* bumpenv_lum_offset_location; int ycorrection_location; int tex_factor_location; int* tss_constant_location; int alpha_test_ref_location; int specular_enable_location; int uniform_b_locations; int uniform_i_locations; int uniform_f_locations; } ;
struct TYPE_14__ {int pos_fixup_location; int* modelview_matrix_location; int projection_matrix_location; int * normal_matrix_location; int uniform_b_locations; int uniform_i_locations; int uniform_f_locations; } ;
struct TYPE_13__ {int pos_fixup_location; } ;
struct TYPE_12__ {int pos_fixup_location; } ;
struct glsl_shader_prog_link {int constant_update_mask; int constant_version; TYPE_9__ ps; TYPE_4__ vs; TYPE_3__ ds; TYPE_2__ gs; } ;
struct glsl_context_data {struct glsl_shader_prog_link* glsl_program; } ;
typedef int UINT ;
struct TYPE_18__ {TYPE_7__** render_targets; } ;
struct TYPE_17__ {scalar_t__ height; } ;
typedef int GLfloat ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;




 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct wined3d_context*,struct wined3d_state const*,int,struct wined3d_matrix*) ;
 int FUNC_6 (struct wined3d_context*,struct wined3d_matrix*,float*) ;
 int FUNC_7 (struct wined3d_context*,struct wined3d_state const*,struct wined3d_matrix*) ;
 int FUNC_8 (int ,float) ;
 int FUNC_9 (int,int,int const*) ;
 int FUNC_10 (int ,float,float,float,float) ;
 int FUNC_11 (int,int,float*) ;
 int FUNC_12 (int,int,int ,int const*) ;
 int FUNC_13 (int ,int,int ,float*) ;
 int FUNC_14 (int,int,int ,int *) ;
 int VAR_38 ;
 int FUNC_15 (struct wined3d_context*,struct wined3d_state const*,float*) ;
 int FUNC_16 (struct wined3d_context*,struct wined3d_state const*,int,struct glsl_shader_prog_link*) ;
 int FUNC_17 (struct wined3d_context*,struct wined3d_state const*,unsigned int,struct wined3d_light_info const*,struct glsl_shader_prog_link*) ;
 int FUNC_18 (struct wined3d_context*,struct wined3d_state const*,struct glsl_shader_prog_link*) ;
 int FUNC_19 (struct wined3d_context*,struct wined3d_state const*,struct glsl_shader_prog_link*) ;
 int FUNC_20 (struct wined3d_context*,struct wined3d_state const*,int,struct glsl_shader_prog_link*) ;
 int FUNC_21 (TYPE_9__*,struct wined3d_gl_info const*,struct wined3d_state const*) ;
 int FUNC_22 (struct wined3d_shader const*,struct wined3d_gl_info const*,int ,int ,int ) ;
 int FUNC_23 (struct wined3d_shader const*,struct wined3d_gl_info const*,int ,int ,int *,int ,int ) ;
 int FUNC_24 (struct wined3d_shader const*,struct wined3d_gl_info const*,int ,int ,int ) ;
 int FUNC_25 (struct wined3d_context*,struct wined3d_state const*,struct glsl_shader_prog_link*) ;
 int FUNC_26 (TYPE_9__*,struct wined3d_gl_info const*,struct wined3d_state const*) ;
 int FUNC_27 (struct wined3d_context*,struct wined3d_state const*,struct glsl_shader_prog_link*) ;
 int FUNC_28 (int *,int ,int *) ;
 int FUNC_29 (struct wined3d_color*,int) ;

__attribute__((used)) static void FUNC_30(void *VAR_39, struct wined3d_context *VAR_40,
        const struct wined3d_state *VAR_41)
{
    const struct glsl_context_data *VAR_42 = VAR_40->shader_backend_data;
    const struct wined3d_shader *VAR_43 = VAR_41->shader[VAR_33];
    const struct wined3d_shader *VAR_44 = VAR_41->shader[VAR_32];
    const struct wined3d_gl_info *VAR_45 = VAR_40->gl_info;
    struct shader_glsl_priv *VAR_46 = VAR_39;
    float VAR_47[4];
    float VAR_48[3 * 3];
    DWORD VAR_49;

    struct glsl_shader_prog_link *VAR_50 = VAR_42->glsl_program;
    UINT VAR_51;
    int VAR_52;

    if (!VAR_50) {

        return;
    }
    VAR_51 = VAR_50->constant_version;
    VAR_49 = VAR_40->constant_update_mask & VAR_50->constant_update_mask;

    if (VAR_49 & VAR_27)
        FUNC_23(VAR_43, VAR_45, VAR_41->vs_consts_f,
                VAR_50->vs.uniform_f_locations, &VAR_46->vconst_heap, VAR_46->stack, VAR_51);

    if (VAR_49 & VAR_28)
        FUNC_24(VAR_43, VAR_45, VAR_41->vs_consts_i,
                VAR_50->vs.uniform_i_locations, VAR_43->reg_maps.integer_constants);

    if (VAR_49 & VAR_25)
        FUNC_22(VAR_43, VAR_45, VAR_50->vs.uniform_b_locations, VAR_41->vs_consts_b,
                VAR_43->reg_maps.boolean_constants);

    if (VAR_49 & VAR_26)
    {
        for (VAR_52 = 0; VAR_52 < VAR_45->limits.user_clip_distances; ++VAR_52)
            FUNC_16(VAR_40, VAR_41, VAR_52, VAR_50);
    }

    if (VAR_49 & VAR_29)
        FUNC_27(VAR_40, VAR_41, VAR_50);

    if (VAR_49 & VAR_16)
    {
        FUNC_15(VAR_40, VAR_41, VAR_47);
        if (VAR_41->shader[VAR_31])
            FUNC_1(FUNC_11(VAR_50->gs.pos_fixup_location, 1, VAR_47));
        else if (VAR_41->shader[VAR_30])
            FUNC_1(FUNC_11(VAR_50->ds.pos_fixup_location, 1, VAR_47));
        else
            FUNC_1(FUNC_11(VAR_50->vs.pos_fixup_location, 1, VAR_47));
        FUNC_4("glUniform4fv");
    }

    if (VAR_49 & VAR_11)
    {
        struct wined3d_matrix VAR_53;

        FUNC_5(VAR_40, VAR_41, 0, &VAR_53);
        FUNC_1(FUNC_14(VAR_50->vs.modelview_matrix_location[0], 1, VAR_0, &VAR_53._11));
        FUNC_4("glUniformMatrix4fv");

        FUNC_6(VAR_40, &VAR_53, VAR_48);
        FUNC_1(FUNC_13(VAR_50->vs.normal_matrix_location[0], 1, VAR_0, VAR_48));
        FUNC_4("glUniformMatrix3fv");
    }

    if (VAR_49 & VAR_15)
    {
        struct wined3d_matrix VAR_54;

        for (VAR_52 = 1; VAR_52 < VAR_3; ++VAR_52)
        {
            if (VAR_50->vs.modelview_matrix_location[VAR_52] == -1)
                break;
            if (!(VAR_49 & FUNC_3(VAR_52)))
                continue;

            FUNC_5(VAR_40, VAR_41, VAR_52, &VAR_54);
            FUNC_1(FUNC_14(VAR_50->vs.modelview_matrix_location[VAR_52], 1, VAR_0, &VAR_54._11));
            FUNC_4("glUniformMatrix4fv");

            FUNC_6(VAR_40, &VAR_54, VAR_48);
            FUNC_1(FUNC_13(VAR_50->vs.normal_matrix_location[VAR_52], 1, VAR_0, VAR_48));
            FUNC_4("glUniformMatrix3fv");
        }
    }

    if (VAR_49 & VAR_12)
    {
        struct wined3d_matrix VAR_55;

        FUNC_7(VAR_40, VAR_41, &VAR_55);
        FUNC_1(FUNC_14(VAR_50->vs.projection_matrix_location, 1, VAR_0, &VAR_55._11));
        FUNC_4("glUniformMatrix4fv");
    }

    if (VAR_49 & VAR_14)
    {
        for (VAR_52 = 0; VAR_52 < VAR_2; ++VAR_52)
            FUNC_20(VAR_40, VAR_41, VAR_52, VAR_50);
    }

    if (VAR_49 & VAR_10)
        FUNC_19(VAR_40, VAR_41, VAR_50);

    if (VAR_49 & VAR_9)
    {
        unsigned int VAR_56, VAR_57, VAR_58, VAR_59;
        DWORD VAR_60 = 0;
        DWORD VAR_61 = 0;
        DWORD VAR_62 = 0;
        DWORD VAR_63 = 0;

        for (VAR_52 = 0; VAR_52 < VAR_1; ++VAR_52)
        {
            if (!VAR_41->lights[VAR_52])
                continue;

            switch (VAR_41->lights[VAR_52]->OriginalParms.type)
            {
                case 129:
                    ++VAR_60;
                    break;
                case 128:
                    ++VAR_61;
                    break;
                case 131:
                    ++VAR_62;
                    break;
                case 130:
                    ++VAR_63;
                    break;
                default:
                    FUNC_0("Unhandled light type %#x.\n", VAR_41->lights[VAR_52]->OriginalParms.type);
                    break;
            }
        }
        VAR_56 = 0;
        VAR_57 = VAR_56 + VAR_60;
        VAR_58 = VAR_57 + VAR_61;
        VAR_59 = VAR_58 + VAR_62;

        FUNC_18(VAR_40, VAR_41, VAR_50);
        for (VAR_52 = 0; VAR_52 < VAR_1; ++VAR_52)
        {
            const struct wined3d_light_info *VAR_64 = VAR_41->lights[VAR_52];
            unsigned int VAR_65;

            if (!VAR_64)
                continue;

            switch (VAR_64->OriginalParms.type)
            {
                case 129:
                    VAR_65 = VAR_56++;
                    break;
                case 128:
                    VAR_65 = VAR_57++;
                    break;
                case 131:
                    VAR_65 = VAR_58++;
                    break;
                case 130:
                    VAR_65 = VAR_59++;
                    break;
                default:
                    FUNC_0("Unhandled light type %#x.\n", VAR_64->OriginalParms.type);
                    continue;
            }
            FUNC_17(VAR_40, VAR_41, VAR_65, VAR_64, VAR_50);
        }
    }

    if (VAR_49 & VAR_20)
        FUNC_23(VAR_44, VAR_45, VAR_41->ps_consts_f,
                VAR_50->ps.uniform_f_locations, &VAR_46->pconst_heap, VAR_46->stack, VAR_51);

    if (VAR_49 & VAR_22)
        FUNC_24(VAR_44, VAR_45, VAR_41->ps_consts_i,
                VAR_50->ps.uniform_i_locations, VAR_44->reg_maps.integer_constants);

    if (VAR_49 & VAR_18)
        FUNC_22(VAR_44, VAR_45, VAR_50->ps.uniform_b_locations, VAR_41->ps_consts_b,
                VAR_44->reg_maps.boolean_constants);

    if (VAR_49 & VAR_19)
    {
        for (VAR_52 = 0; VAR_52 < VAR_2; ++VAR_52)
        {
            if (VAR_50->ps.bumpenv_mat_location[VAR_52] == -1)
                continue;

            FUNC_1(FUNC_12(VAR_50->ps.bumpenv_mat_location[VAR_52], 1, 0,
                    (const GLfloat *)&VAR_41->texture_states[VAR_52][VAR_36]));

            if (VAR_50->ps.bumpenv_lum_scale_location[VAR_52] != -1)
            {
                FUNC_1(FUNC_9(VAR_50->ps.bumpenv_lum_scale_location[VAR_52], 1,
                        (const GLfloat *)&VAR_41->texture_states[VAR_52][VAR_35]));
                FUNC_1(FUNC_9(VAR_50->ps.bumpenv_lum_offset_location[VAR_52], 1,
                        (const GLfloat *)&VAR_41->texture_states[VAR_52][VAR_34]));
            }
        }

        FUNC_4("bump env uniforms");
    }

    if (VAR_49 & VAR_24)
    {
        const struct wined3d_vec4 VAR_66 =
        {

            VAR_40->render_offscreen ? 0.0f : (float)VAR_41->fb->render_targets[0]->height,
            VAR_40->render_offscreen ? 1.0f : -1.0f,
            0.0f,
            0.0f,
        };

        FUNC_1(FUNC_11(VAR_50->ps.ycorrection_location, 1, &VAR_66.x));
    }

    if (VAR_49 & VAR_23)
        FUNC_26(&VAR_50->ps, VAR_45, VAR_41);
    if (VAR_49 & VAR_8)
        FUNC_21(&VAR_50->ps, VAR_45, VAR_41);

    if (VAR_49 & VAR_13)
    {
        struct wined3d_color VAR_67;

        if (VAR_50->ps.tex_factor_location != -1)
        {
            FUNC_29(&VAR_67, VAR_41->render_states[VAR_7]);
            FUNC_1(FUNC_11(VAR_50->ps.tex_factor_location, 1, &VAR_67.r));
        }

        if (VAR_41->render_states[VAR_6])
            FUNC_1(FUNC_10(VAR_50->ps.specular_enable_location, 1.0f, 1.0f, 1.0f, 0.0f));
        else
            FUNC_1(FUNC_10(VAR_50->ps.specular_enable_location, 0.0f, 0.0f, 0.0f, 0.0f));

        for (VAR_52 = 0; VAR_52 < VAR_2; ++VAR_52)
        {
            if (VAR_50->ps.tss_constant_location[VAR_52] == -1)
                continue;

            FUNC_29(&VAR_67, VAR_41->texture_states[VAR_52][VAR_37]);
            FUNC_1(FUNC_11(VAR_50->ps.tss_constant_location[VAR_52], 1, &VAR_67.r));
        }

        FUNC_4("fixed function uniforms");
    }

    if (VAR_49 & VAR_21)
        FUNC_25(VAR_40, VAR_41, VAR_50);

    if (VAR_49 & VAR_17)
    {
        float VAR_68 = VAR_41->render_states[VAR_5] / 255.0f;

        FUNC_1(FUNC_8(VAR_50->ps.alpha_test_ref_location, VAR_68));
        FUNC_4("alpha test emulation uniform");
    }

    if (VAR_46->next_constant_version == VAR_4)
    {
        FUNC_2("Max constant version reached, resetting to 0.\n");
        FUNC_28(&VAR_46->program_lookup, VAR_38, ((void*)0));
        VAR_46->next_constant_version = 1;
    }
    else
    {
        VAR_50->constant_version = VAR_46->next_constant_version++;
    }
}

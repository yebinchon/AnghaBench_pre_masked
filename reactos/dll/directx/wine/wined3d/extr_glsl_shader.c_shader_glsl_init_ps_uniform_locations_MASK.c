
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {char* buffer; } ;
struct wined3d_gl_info {int dummy; } ;
struct shader_glsl_priv {int string_buffers; } ;
struct glsl_ps_program {void* color_key_location; void* ycorrection_location; void* np2_fixup_location; void* alpha_test_ref_location; void* fog_scale_location; void* fog_end_location; void* fog_density_location; void* fog_color_location; void* specular_enable_location; void* tex_factor_location; void** tss_constant_location; void** bumpenv_lum_offset_location; void** bumpenv_lum_scale_location; void** bumpenv_mat_location; void** uniform_b_locations; void** uniform_i_locations; void** uniform_f_locations; } ;
typedef int GLuint ;


 void* FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (void**,int,unsigned int) ;
 struct wined3d_string_buffer* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct wined3d_string_buffer*) ;
 int FUNC_5 (struct wined3d_string_buffer*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_gl_info *VAR_4,
        struct shader_glsl_priv *VAR_5, GLuint VAR_6, struct glsl_ps_program *VAR_7, unsigned int VAR_8)
{
    unsigned int VAR_9;
    struct wined3d_string_buffer *VAR_10 = FUNC_3(&VAR_5->string_buffers);

    for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9)
    {
        FUNC_5(VAR_10, "ps_c[%u]", VAR_9);
        VAR_7->uniform_f_locations[VAR_9] = FUNC_0(FUNC_1(VAR_6, VAR_10->buffer));
    }
    FUNC_2(&VAR_7->uniform_f_locations[VAR_8], 0xff, (VAR_3 - VAR_8) * sizeof(GLuint));

    for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9)
    {
        FUNC_5(VAR_10, "ps_i[%u]", VAR_9);
        VAR_7->uniform_i_locations[VAR_9] = FUNC_0(FUNC_1(VAR_6, VAR_10->buffer));
    }

    for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9)
    {
        FUNC_5(VAR_10, "ps_b[%u]", VAR_9);
        VAR_7->uniform_b_locations[VAR_9] = FUNC_0(FUNC_1(VAR_6, VAR_10->buffer));
    }

    for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9)
    {
        FUNC_5(VAR_10, "bumpenv_mat%u", VAR_9);
        VAR_7->bumpenv_mat_location[VAR_9] = FUNC_0(FUNC_1(VAR_6, VAR_10->buffer));
        FUNC_5(VAR_10, "bumpenv_lum_scale%u", VAR_9);
        VAR_7->bumpenv_lum_scale_location[VAR_9] = FUNC_0(FUNC_1(VAR_6, VAR_10->buffer));
        FUNC_5(VAR_10, "bumpenv_lum_offset%u", VAR_9);
        VAR_7->bumpenv_lum_offset_location[VAR_9] = FUNC_0(FUNC_1(VAR_6, VAR_10->buffer));
        FUNC_5(VAR_10, "tss_const%u", VAR_9);
        VAR_7->tss_constant_location[VAR_9] = FUNC_0(FUNC_1(VAR_6, VAR_10->buffer));
    }

    VAR_7->tex_factor_location = FUNC_0(FUNC_1(VAR_6, "tex_factor"));
    VAR_7->specular_enable_location = FUNC_0(FUNC_1(VAR_6, "specular_enable"));

    VAR_7->fog_color_location = FUNC_0(FUNC_1(VAR_6, "ffp_fog.color"));
    VAR_7->fog_density_location = FUNC_0(FUNC_1(VAR_6, "ffp_fog.density"));
    VAR_7->fog_end_location = FUNC_0(FUNC_1(VAR_6, "ffp_fog.end"));
    VAR_7->fog_scale_location = FUNC_0(FUNC_1(VAR_6, "ffp_fog.scale"));

    VAR_7->alpha_test_ref_location = FUNC_0(FUNC_1(VAR_6, "alpha_test_ref"));

    VAR_7->np2_fixup_location = FUNC_0(FUNC_1(VAR_6, "ps_samplerNP2Fixup"));
    VAR_7->ycorrection_location = FUNC_0(FUNC_1(VAR_6, "ycorrection"));
    VAR_7->color_key_location = FUNC_0(FUNC_1(VAR_6, "color_key"));

    FUNC_4(&VAR_5->string_buffers, VAR_10);
}

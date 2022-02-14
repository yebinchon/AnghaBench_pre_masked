
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {char* buffer; } ;
struct wined3d_gl_info {int dummy; } ;
struct shader_glsl_priv {int string_buffers; } ;
struct glsl_vs_program {void* clip_planes_location; void* pointsize_q_att_location; void* pointsize_l_att_location; void* pointsize_c_att_location; void* pointsize_max_location; void* pointsize_min_location; void* pointsize_location; TYPE_1__* light_location; void* light_ambient_location; void* material_shininess_location; void* material_emissive_location; void* material_specular_location; void* material_diffuse_location; void* material_ambient_location; void** texture_matrix_location; void* projection_matrix_location; void** normal_matrix_location; void** modelview_matrix_location; void* pos_fixup_location; void** uniform_b_locations; void** uniform_i_locations; void** uniform_f_locations; } ;
struct TYPE_2__ {void* cos_hphi; void* cos_htheta; void* q_att; void* l_att; void* c_att; void* falloff; void* range; void* direction; void* position; void* ambient; void* specular; void* diffuse; } ;
typedef int GLuint ;


 void* FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (void**,int,unsigned int) ;
 struct wined3d_string_buffer* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct wined3d_string_buffer*) ;
 int FUNC_5 (struct wined3d_string_buffer*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_6(const struct wined3d_gl_info *VAR_6,
        struct shader_glsl_priv *VAR_7, GLuint VAR_8, struct glsl_vs_program *VAR_9, unsigned int VAR_10)
{
    unsigned int VAR_11;
    struct wined3d_string_buffer *VAR_12 = FUNC_3(&VAR_7->string_buffers);

    for (VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11)
    {
        FUNC_5(VAR_12, "vs_c[%u]", VAR_11);
        VAR_9->uniform_f_locations[VAR_11] = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
    }
    FUNC_2(&VAR_9->uniform_f_locations[VAR_10], 0xff, (VAR_5 - VAR_10) * sizeof(GLuint));

    for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11)
    {
        FUNC_5(VAR_12, "vs_i[%u]", VAR_11);
        VAR_9->uniform_i_locations[VAR_11] = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
    }

    for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11)
    {
        FUNC_5(VAR_12, "vs_b[%u]", VAR_11);
        VAR_9->uniform_b_locations[VAR_11] = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
    }

    VAR_9->pos_fixup_location = FUNC_0(FUNC_1(VAR_8, "pos_fixup"));

    for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11)
    {
        FUNC_5(VAR_12, "ffp_modelview_matrix[%u]", VAR_11);
        VAR_9->modelview_matrix_location[VAR_11] = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
    }
    for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11)
    {
        FUNC_5(VAR_12, "ffp_normal_matrix[%u]", VAR_11);
        VAR_9->normal_matrix_location[VAR_11] = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
    }
    VAR_9->projection_matrix_location = FUNC_0(FUNC_1(VAR_8, "ffp_projection_matrix"));
    for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11)
    {
        FUNC_5(VAR_12, "ffp_texture_matrix[%u]", VAR_11);
        VAR_9->texture_matrix_location[VAR_11] = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
    }
    VAR_9->material_ambient_location = FUNC_0(FUNC_1(VAR_8, "ffp_material.ambient"));
    VAR_9->material_diffuse_location = FUNC_0(FUNC_1(VAR_8, "ffp_material.diffuse"));
    VAR_9->material_specular_location = FUNC_0(FUNC_1(VAR_8, "ffp_material.specular"));
    VAR_9->material_emissive_location = FUNC_0(FUNC_1(VAR_8, "ffp_material.emissive"));
    VAR_9->material_shininess_location = FUNC_0(FUNC_1(VAR_8, "ffp_material.shininess"));
    VAR_9->light_ambient_location = FUNC_0(FUNC_1(VAR_8, "ffp_light_ambient"));
    for (VAR_11 = 0; VAR_11 < VAR_0; ++VAR_11)
    {
        FUNC_5(VAR_12, "ffp_light[%u].diffuse", VAR_11);
        VAR_9->light_location[VAR_11].diffuse = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
        FUNC_5(VAR_12, "ffp_light[%u].specular", VAR_11);
        VAR_9->light_location[VAR_11].specular = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
        FUNC_5(VAR_12, "ffp_light[%u].ambient", VAR_11);
        VAR_9->light_location[VAR_11].ambient = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
        FUNC_5(VAR_12, "ffp_light[%u].position", VAR_11);
        VAR_9->light_location[VAR_11].position = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
        FUNC_5(VAR_12, "ffp_light[%u].direction", VAR_11);
        VAR_9->light_location[VAR_11].direction = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
        FUNC_5(VAR_12, "ffp_light[%u].range", VAR_11);
        VAR_9->light_location[VAR_11].range = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
        FUNC_5(VAR_12, "ffp_light[%u].falloff", VAR_11);
        VAR_9->light_location[VAR_11].falloff = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
        FUNC_5(VAR_12, "ffp_light[%u].c_att", VAR_11);
        VAR_9->light_location[VAR_11].c_att = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
        FUNC_5(VAR_12, "ffp_light[%u].l_att", VAR_11);
        VAR_9->light_location[VAR_11].l_att = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
        FUNC_5(VAR_12, "ffp_light[%u].q_att", VAR_11);
        VAR_9->light_location[VAR_11].q_att = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
        FUNC_5(VAR_12, "ffp_light[%u].cos_htheta", VAR_11);
        VAR_9->light_location[VAR_11].cos_htheta = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
        FUNC_5(VAR_12, "ffp_light[%u].cos_hphi", VAR_11);
        VAR_9->light_location[VAR_11].cos_hphi = FUNC_0(FUNC_1(VAR_8, VAR_12->buffer));
    }
    VAR_9->pointsize_location = FUNC_0(FUNC_1(VAR_8, "ffp_point.size"));
    VAR_9->pointsize_min_location = FUNC_0(FUNC_1(VAR_8, "ffp_point.size_min"));
    VAR_9->pointsize_max_location = FUNC_0(FUNC_1(VAR_8, "ffp_point.size_max"));
    VAR_9->pointsize_c_att_location = FUNC_0(FUNC_1(VAR_8, "ffp_point.c_att"));
    VAR_9->pointsize_l_att_location = FUNC_0(FUNC_1(VAR_8, "ffp_point.l_att"));
    VAR_9->pointsize_q_att_location = FUNC_0(FUNC_1(VAR_8, "ffp_point.q_att"));
    VAR_9->clip_planes_location = FUNC_0(FUNC_1(VAR_8, "clip_planes"));

    FUNC_4(&VAR_7->string_buffers, VAR_12);
}

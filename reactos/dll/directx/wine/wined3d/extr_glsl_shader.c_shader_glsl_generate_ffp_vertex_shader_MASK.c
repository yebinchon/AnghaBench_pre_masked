
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct attrib_info TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int buffer; } ;
struct TYPE_3__ {unsigned int user_clip_distances; int glsl_varyings; } ;
struct wined3d_gl_info {int * supported; TYPE_1__ limits; } ;
struct wined3d_ffp_vs_settings {unsigned int swizzle_map; int* texgen; unsigned int texcoords; unsigned int vertexblends; int fog_mode; scalar_t__ per_vertex_point_size; scalar_t__ point_size; scalar_t__ transformed; int ortho_fog; scalar_t__ normalize; scalar_t__ vb_indices; int sw_blending; scalar_t__ normal; scalar_t__ clipping; scalar_t__ flatshading; } ;
struct shader_glsl_priv {scalar_t__ legacy_lighting; struct wined3d_string_buffer shader_buffer; } ;
struct attrib_info {char const* type; char const* name; } ;
typedef int GLuint ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 unsigned int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;





 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;




 int FUNC_3 (struct wined3d_gl_info const*,struct wined3d_string_buffer*,scalar_t__,char*,...) ;
 int FUNC_4 (struct wined3d_gl_info const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct wined3d_gl_info const*) ;
 int FUNC_7 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_8 (struct wined3d_string_buffer*,struct wined3d_gl_info const*) ;
 int FUNC_9 (struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_10 (struct wined3d_string_buffer*,struct wined3d_ffp_vs_settings const*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct wined3d_gl_info const*) ;
 int FUNC_12 (char*,char*,unsigned int) ;
 int FUNC_13 (struct wined3d_string_buffer*) ;
 int FUNC_14 (struct wined3d_gl_info const*) ;

__attribute__((used)) static GLuint FUNC_15(struct shader_glsl_priv *VAR_8,
        const struct wined3d_ffp_vs_settings *VAR_9, const struct wined3d_gl_info *VAR_10)
{
    static const struct attrib_info
    {
        const char type[6];
        const char name[24];
    }
    VAR_11[] =
    {
        {"vec4", "ffp_attrib_position"},
        {"vec4", "ffp_attrib_blendweight"},
        {"vec4", "ffp_attrib_blendindices"},
        {"vec3", "ffp_attrib_normal"},
        {"float", "ffp_attrib_psize"},
        {"vec4", "ffp_attrib_diffuse"},
        {"vec4", "ffp_attrib_specular"},
    };
    const BOOL VAR_12 = FUNC_6(VAR_10);
    struct wined3d_string_buffer *VAR_13 = &VAR_8->shader_buffer;
    BOOL VAR_14 = VAR_12;
    BOOL VAR_15 = VAR_8->legacy_lighting;
    GLuint VAR_16;
    unsigned int VAR_17;
    char VAR_18[64];

    FUNC_13(VAR_13);

    FUNC_8(VAR_13, VAR_10);

    if (FUNC_11(VAR_10))
        FUNC_7(VAR_13, "#extension GL_ARB_explicit_attrib_location : enable\n");

    for (VAR_17 = 0; VAR_17 < VAR_6; ++VAR_17)
    {
        const char *VAR_19 = VAR_17 < FUNC_0(VAR_11) ? VAR_11[VAR_17].type : "vec4";

        if (FUNC_11(VAR_10))
            FUNC_7(VAR_13, "layout(location = %u) ", VAR_17);
        FUNC_7(VAR_13, "%s %s vs_in%u;\n", FUNC_4(VAR_10), VAR_19, VAR_17);
    }
    FUNC_7(VAR_13, "\n");

    FUNC_7(VAR_13, "uniform mat4 ffp_modelview_matrix[%u];\n", VAR_5);
    FUNC_7(VAR_13, "uniform mat3 ffp_normal_matrix[%u];\n", VAR_5);
    FUNC_7(VAR_13, "uniform mat4 ffp_projection_matrix;\n");
    FUNC_7(VAR_13, "uniform mat4 ffp_texture_matrix[%u];\n", VAR_4);

    FUNC_7(VAR_13, "uniform struct\n{\n");
    FUNC_7(VAR_13, "    vec4 emissive;\n");
    FUNC_7(VAR_13, "    vec4 ambient;\n");
    FUNC_7(VAR_13, "    vec4 diffuse;\n");
    FUNC_7(VAR_13, "    vec4 specular;\n");
    FUNC_7(VAR_13, "    float shininess;\n");
    FUNC_7(VAR_13, "} ffp_material;\n");

    FUNC_7(VAR_13, "uniform vec3 ffp_light_ambient;\n");
    FUNC_7(VAR_13, "uniform struct\n{\n");
    FUNC_7(VAR_13, "    vec4 diffuse;\n");
    FUNC_7(VAR_13, "    vec4 specular;\n");
    FUNC_7(VAR_13, "    vec4 ambient;\n");
    FUNC_7(VAR_13, "    vec4 position;\n");
    FUNC_7(VAR_13, "    vec3 direction;\n");
    FUNC_7(VAR_13, "    float range;\n");
    FUNC_7(VAR_13, "    float falloff;\n");
    FUNC_7(VAR_13, "    float c_att;\n");
    FUNC_7(VAR_13, "    float l_att;\n");
    FUNC_7(VAR_13, "    float q_att;\n");
    FUNC_7(VAR_13, "    float cos_htheta;\n");
    FUNC_7(VAR_13, "    float cos_hphi;\n");
    FUNC_7(VAR_13, "} ffp_light[%u];\n", VAR_3);

    if (VAR_9->point_size)
    {
        FUNC_7(VAR_13, "uniform struct\n{\n");
        FUNC_7(VAR_13, "    float size;\n");
        FUNC_7(VAR_13, "    float size_min;\n");
        FUNC_7(VAR_13, "    float size_max;\n");
        FUNC_7(VAR_13, "    float c_att;\n");
        FUNC_7(VAR_13, "    float l_att;\n");
        FUNC_7(VAR_13, "    float q_att;\n");
        FUNC_7(VAR_13, "} ffp_point;\n");
    }

    if (VAR_12)
    {
        FUNC_7(VAR_13, "vec4 ffp_varying_diffuse;\n");
        FUNC_7(VAR_13, "vec4 ffp_varying_specular;\n");
        FUNC_7(VAR_13, "vec4 ffp_varying_texcoord[%u];\n", VAR_4);
        FUNC_7(VAR_13, "float ffp_varying_fogcoord;\n");
    }
    else
    {
        if (VAR_9->clipping)
            FUNC_7(VAR_13, "uniform vec4 clip_planes[%u];\n", VAR_10->limits.user_clip_distances);

        FUNC_3(VAR_10, VAR_13, VAR_9->flatshading, "vec4 ffp_varying_diffuse;\n");
        FUNC_3(VAR_10, VAR_13, VAR_9->flatshading, "vec4 ffp_varying_specular;\n");
        FUNC_3(VAR_10, VAR_13, VAR_1, "vec4 ffp_varying_texcoord[%u];\n", VAR_4);
        FUNC_3(VAR_10, VAR_13, VAR_1, "float ffp_varying_fogcoord;\n");
    }

    FUNC_7(VAR_13, "\nvoid main()\n{\n");
    FUNC_7(VAR_13, "float m;\n");
    FUNC_7(VAR_13, "vec3 r;\n");

    for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_11); ++VAR_17)
    {
        if (VAR_11[VAR_17].name[0])
            FUNC_7(VAR_13, "%s %s = vs_in%u%s;\n", VAR_11[VAR_17].type, VAR_11[VAR_17].name,
                    VAR_17, VAR_9->swizzle_map & (1u << VAR_17) ? ".zyxw" : "");
    }
    for (VAR_17 = 0; VAR_17 < VAR_4; ++VAR_17)
    {
        unsigned int VAR_20 = VAR_9->texgen[VAR_17] & 0x0000ffff;
        if ((VAR_9->texgen[VAR_17] & 0xffff0000) == 133
                && VAR_9->texcoords & (1u << VAR_17))
            FUNC_7(VAR_13, "vec4 ffp_attrib_texcoord%u = vs_in%u;\n", VAR_17, VAR_20 + VAR_7);
    }

    FUNC_7(VAR_13, "ffp_attrib_blendweight[%u] = 1.0;\n", VAR_9->vertexblends);

    if (VAR_9->transformed)
    {
        FUNC_7(VAR_13, "vec4 ec_pos = vec4(ffp_attrib_position.xyz, 1.0);\n");
        FUNC_7(VAR_13, "gl_Position = ffp_projection_matrix * ec_pos;\n");
        FUNC_7(VAR_13, "if (ffp_attrib_position.w != 0.0) gl_Position /= ffp_attrib_position.w;\n");
    }
    else
    {
        if (!VAR_9->sw_blending)
        {
            for (VAR_17 = 0; VAR_17 < VAR_9->vertexblends; ++VAR_17)
                FUNC_7(VAR_13, "ffp_attrib_blendweight[%u] -= ffp_attrib_blendweight[%u];\n", VAR_9->vertexblends, VAR_17);

            FUNC_7(VAR_13, "vec4 ec_pos = vec4(0.0);\n");
            for (VAR_17 = 0; VAR_17 < VAR_9->vertexblends + 1; ++VAR_17)
            {
                FUNC_12(VAR_18, VAR_9->vb_indices ? "int(ffp_attrib_blendindices[%u] + 0.1)" : "%u", VAR_17);
                FUNC_7(VAR_13, "ec_pos += ffp_attrib_blendweight[%u] * (ffp_modelview_matrix[%s] * ffp_attrib_position);\n", VAR_17, VAR_18);
            }
        }
        else
        {
            FUNC_7(VAR_13, "vec4 ec_pos = ffp_attrib_position;\n");
        }

        FUNC_7(VAR_13, "gl_Position = ffp_projection_matrix * ec_pos;\n");
        if (VAR_9->clipping)
        {
            if (VAR_12)
                FUNC_7(VAR_13, "gl_ClipVertex = ec_pos;\n");
            else
                for (VAR_17 = 0; VAR_17 < VAR_10->limits.user_clip_distances; ++VAR_17)
                    FUNC_7(VAR_13, "gl_ClipDistance[%u] = dot(ec_pos, clip_planes[%u]);\n", VAR_17, VAR_17);
        }
        FUNC_7(VAR_13, "ec_pos /= ec_pos.w;\n");
    }

    FUNC_7(VAR_13, "vec3 normal = vec3(0.0);\n");
    if (VAR_9->normal)
    {
        if (!VAR_9->sw_blending)
        {
            for (VAR_17 = 0; VAR_17 < VAR_9->vertexblends + 1; ++VAR_17)
            {
                FUNC_12(VAR_18, VAR_9->vb_indices ? "int(ffp_attrib_blendindices[%u] + 0.1)" : "%u", VAR_17);
                FUNC_7(VAR_13, "normal += ffp_attrib_blendweight[%u] * (ffp_normal_matrix[%s] * ffp_attrib_normal);\n", VAR_17, VAR_18);
            }
        }
        else
        {
            FUNC_7(VAR_13, "normal = ffp_attrib_normal;\n");
        }

        if (VAR_9->normalize)
            FUNC_7(VAR_13, "normal = normalize(normal);\n");
    }

    FUNC_10(VAR_13, VAR_9, VAR_15);
    if (VAR_12)
    {
        FUNC_7(VAR_13, "gl_FrontColor = ffp_varying_diffuse;\n");
        FUNC_7(VAR_13, "gl_FrontSecondaryColor = ffp_varying_specular;\n");
    }
    else
    {
        FUNC_7(VAR_13, "ffp_varying_diffuse = clamp(ffp_varying_diffuse, 0.0, 1.0);\n");
        FUNC_7(VAR_13, "ffp_varying_specular = clamp(ffp_varying_specular, 0.0, 1.0);\n");
    }

    for (VAR_17 = 0; VAR_17 < VAR_4; ++VAR_17)
    {
        BOOL VAR_21 = VAR_12;

        switch (VAR_9->texgen[VAR_17] & 0xffff0000)
        {
            case 133:
                if (VAR_9->texcoords & (1u << VAR_17))
                    FUNC_7(VAR_13, "ffp_varying_texcoord[%u] = ffp_texture_matrix[%u] * ffp_attrib_texcoord%u;\n",
                            VAR_17, VAR_17, VAR_17);
                else if (VAR_10->limits.glsl_varyings >= FUNC_14(VAR_10))
                    FUNC_7(VAR_13, "ffp_varying_texcoord[%u] = vec4(0.0);\n", VAR_17);
                else
                    VAR_21 = VAR_1;
                break;

            case 136:
                FUNC_7(VAR_13, "ffp_varying_texcoord[%u] = ffp_texture_matrix[%u] * vec4(normal, 1.0);\n", VAR_17, VAR_17);
                break;

            case 135:
                FUNC_7(VAR_13, "ffp_varying_texcoord[%u] = ffp_texture_matrix[%u] * ec_pos;\n", VAR_17, VAR_17);
                break;

            case 134:
                FUNC_7(VAR_13, "ffp_varying_texcoord[%u] = ffp_texture_matrix[%u]"
                        " * vec4(reflect(normalize(ec_pos.xyz), normal), 1.0);\n", VAR_17, VAR_17);
                break;

            case 132:
                FUNC_7(VAR_13, "r = reflect(normalize(ec_pos.xyz), normal);\n");
                FUNC_7(VAR_13, "m = 2.0 * length(vec3(r.x, r.y, r.z + 1.0));\n");
                FUNC_7(VAR_13, "ffp_varying_texcoord[%u] = ffp_texture_matrix[%u]"
                        " * vec4(r.x / m + 0.5, r.y / m + 0.5, 0.0, 1.0);\n", VAR_17, VAR_17);
                break;

            default:
                FUNC_1("Unhandled texgen %#x.\n", VAR_9->texgen[VAR_17]);
                break;
        }
        if (VAR_21)
            FUNC_7(VAR_13, "gl_TexCoord[%u] = ffp_varying_texcoord[%u];\n", VAR_17, VAR_17);
    }

    switch (VAR_9->fog_mode)
    {
        case 129:
            VAR_14 = VAR_1;
            break;

        case 130:
            FUNC_7(VAR_13, "ffp_varying_fogcoord = ffp_attrib_specular.w * 255.0;\n");
            break;

        case 128:
            FUNC_7(VAR_13, "ffp_varying_fogcoord = length(ec_pos.xyz);\n");
            break;

        case 131:
            if (VAR_9->ortho_fog)
            {
                if (VAR_10->supported[VAR_0])
                    FUNC_7(VAR_13, "ffp_varying_fogcoord = gl_Position.z;\n");
                else

                    FUNC_7(VAR_13, "ffp_varying_fogcoord = gl_Position.z * 0.5 + 0.5;\n");
            }
            else if (VAR_9->transformed)
            {
                FUNC_7(VAR_13, "ffp_varying_fogcoord = ec_pos.z;\n");
            }
            else
            {
                FUNC_7(VAR_13, "ffp_varying_fogcoord = abs(ec_pos.z);\n");
            }
            break;

        default:
            FUNC_1("Unhandled fog mode %#x.\n", VAR_9->fog_mode);
            break;
    }
    if (VAR_14)
        FUNC_7(VAR_13, "gl_FogFragCoord = ffp_varying_fogcoord;\n");

    if (VAR_9->point_size)
    {
        FUNC_7(VAR_13, "gl_PointSize = %s / sqrt(ffp_point.c_att"
                " + ffp_point.l_att * length(ec_pos.xyz)"
                " + ffp_point.q_att * dot(ec_pos.xyz, ec_pos.xyz));\n",
                VAR_9->per_vertex_point_size ? "ffp_attrib_psize" : "ffp_point.size");
        FUNC_7(VAR_13, "gl_PointSize = clamp(gl_PointSize, ffp_point.size_min, ffp_point.size_max);\n");
    }

    FUNC_7(VAR_13, "}\n");

    VAR_16 = FUNC_2(FUNC_5(VAR_2));
    FUNC_9(VAR_10, VAR_16, VAR_13->buffer);

    return VAR_16;
}

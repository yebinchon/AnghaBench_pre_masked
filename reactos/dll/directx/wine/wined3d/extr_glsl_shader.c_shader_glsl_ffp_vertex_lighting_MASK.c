
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_ffp_vs_settings {unsigned int point_light_count; unsigned int spot_light_count; unsigned int directional_light_count; unsigned int parallel_point_light_count; int normal; int emissive_source; int specular_source; int diffuse_source; int ambient_source; int lighting; } ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wined3d_string_buffer*,struct wined3d_ffp_vs_settings const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct wined3d_string_buffer *VAR_0,
        const struct wined3d_ffp_vs_settings *VAR_1, BOOL VAR_2)
{
    const char *VAR_3, *VAR_4, *VAR_5, *VAR_6;
    unsigned int VAR_7, VAR_8;

    if (!VAR_1->lighting)
    {
        FUNC_0(VAR_0, "ffp_varying_diffuse = ffp_attrib_diffuse;\n");
        FUNC_0(VAR_0, "ffp_varying_specular = ffp_attrib_specular;\n");
        return;
    }

    FUNC_0(VAR_0, "vec3 ambient = ffp_light_ambient;\n");
    FUNC_0(VAR_0, "vec3 diffuse = vec3(0.0);\n");
    FUNC_0(VAR_0, "vec4 specular = vec4(0.0);\n");
    FUNC_0(VAR_0, "vec3 dir, dst;\n");
    FUNC_0(VAR_0, "float att, t;\n");

    VAR_6 = FUNC_1(VAR_1->ambient_source, "ffp_material.ambient");
    VAR_3 = FUNC_1(VAR_1->diffuse_source, "ffp_material.diffuse");
    VAR_4 = FUNC_1(VAR_1->specular_source, "ffp_material.specular");
    VAR_5 = FUNC_1(VAR_1->emissive_source, "ffp_material.emissive");

    VAR_8 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_1->point_light_count; ++VAR_7, ++VAR_8)
    {
        FUNC_0(VAR_0, "dir = ffp_light[%u].position.xyz - ec_pos.xyz;\n", VAR_8);
        FUNC_0(VAR_0, "dst.z = dot(dir, dir);\n");
        FUNC_0(VAR_0, "dst.y = sqrt(dst.z);\n");
        FUNC_0(VAR_0, "dst.x = 1.0;\n");
        if (VAR_2)
        {
            FUNC_0(VAR_0, "dst.y = (ffp_light[%u].range - dst.y) / ffp_light[%u].range;\n", VAR_8, VAR_8);
            FUNC_0(VAR_0, "dst.z = dst.y * dst.y;\n");
            FUNC_0(VAR_0, "if (dst.y > 0.0)\n{\n");
        }
        else
        {
            FUNC_0(VAR_0, "if (dst.y <= ffp_light[%u].range)\n{\n", VAR_8);
        }
        FUNC_0(VAR_0, "att = dot(dst.xyz, vec3(ffp_light[%u].c_att,"
                " ffp_light[%u].l_att, ffp_light[%u].q_att));\n", VAR_8, VAR_8, VAR_8);
        if (!VAR_2)
            FUNC_0(VAR_0, "att = 1.0 / att;\n");
        FUNC_0(VAR_0, "ambient += ffp_light[%u].ambient.xyz * att;\n", VAR_8);
        if (!VAR_1->normal)
        {
            FUNC_0(VAR_0, "}\n");
            continue;
        }
        FUNC_0(VAR_0, "dir = normalize(dir);\n");
        FUNC_2(VAR_0, VAR_1, VAR_8);
        FUNC_0(VAR_0, "}\n");
    }

    for (VAR_7 = 0; VAR_7 < VAR_1->spot_light_count; ++VAR_7, ++VAR_8)
    {
        FUNC_0(VAR_0, "dir = ffp_light[%u].position.xyz - ec_pos.xyz;\n", VAR_8);
        FUNC_0(VAR_0, "dst.z = dot(dir, dir);\n");
        FUNC_0(VAR_0, "dst.y = sqrt(dst.z);\n");
        FUNC_0(VAR_0, "dst.x = 1.0;\n");
        if (VAR_2)
        {
            FUNC_0(VAR_0, "dst.y = (ffp_light[%u].range - dst.y) / ffp_light[%u].range;\n", VAR_8, VAR_8);
            FUNC_0(VAR_0, "dst.z = dst.y * dst.y;\n");
            FUNC_0(VAR_0, "if (dst.y > 0.0)\n{\n");
        }
        else
        {
            FUNC_0(VAR_0, "if (dst.y <= ffp_light[%u].range)\n{\n", VAR_8);
        }
        FUNC_0(VAR_0, "dir = normalize(dir);\n");
        FUNC_0(VAR_0, "t = dot(-dir, normalize(ffp_light[%u].direction));\n", VAR_8);
        FUNC_0(VAR_0, "if (t > ffp_light[%u].cos_htheta) att = 1.0;\n", VAR_8);
        FUNC_0(VAR_0, "else if (t <= ffp_light[%u].cos_hphi) att = 0.0;\n", VAR_8);
        FUNC_0(VAR_0, "else att = pow((t - ffp_light[%u].cos_hphi)"
                " / (ffp_light[%u].cos_htheta - ffp_light[%u].cos_hphi), ffp_light[%u].falloff);\n",
                VAR_8, VAR_8, VAR_8, VAR_8);
        if (VAR_2)
            FUNC_0(VAR_0, "att *= dot(dst.xyz, vec3(ffp_light[%u].c_att,"
                    " ffp_light[%u].l_att, ffp_light[%u].q_att));\n",
                    VAR_8, VAR_8, VAR_8);
        else
            FUNC_0(VAR_0, "att /= dot(dst.xyz, vec3(ffp_light[%u].c_att,"
                    " ffp_light[%u].l_att, ffp_light[%u].q_att));\n",
                    VAR_8, VAR_8, VAR_8);
        FUNC_0(VAR_0, "ambient += ffp_light[%u].ambient.xyz * att;\n", VAR_8);
        if (!VAR_1->normal)
        {
            FUNC_0(VAR_0, "}\n");
            continue;
        }
        FUNC_2(VAR_0, VAR_1, VAR_8);
        FUNC_0(VAR_0, "}\n");
    }

    for (VAR_7 = 0; VAR_7 < VAR_1->directional_light_count; ++VAR_7, ++VAR_8)
    {
        FUNC_0(VAR_0, "ambient += ffp_light[%u].ambient.xyz;\n", VAR_8);
        if (!VAR_1->normal)
            continue;
        FUNC_0(VAR_0, "att = 1.0;\n");
        FUNC_0(VAR_0, "dir = normalize(ffp_light[%u].direction.xyz);\n", VAR_8);
        FUNC_2(VAR_0, VAR_1, VAR_8);
    }

    for (VAR_7 = 0; VAR_7 < VAR_1->parallel_point_light_count; ++VAR_7, ++VAR_8)
    {
        FUNC_0(VAR_0, "ambient += ffp_light[%u].ambient.xyz;\n", VAR_8);
        if (!VAR_1->normal)
            continue;
        FUNC_0(VAR_0, "att = 1.0;\n");
        FUNC_0(VAR_0, "dir = normalize(ffp_light[%u].position.xyz);\n", VAR_8);
        FUNC_2(VAR_0, VAR_1, VAR_8);
    }

    FUNC_0(VAR_0, "ffp_varying_diffuse.xyz = %s.xyz * ambient + %s.xyz * diffuse + %s.xyz;\n",
            VAR_6, VAR_3, VAR_5);
    FUNC_0(VAR_0, "ffp_varying_diffuse.w = %s.w;\n", VAR_3);
    FUNC_0(VAR_0, "ffp_varying_specular = %s * specular;\n", VAR_4);
}

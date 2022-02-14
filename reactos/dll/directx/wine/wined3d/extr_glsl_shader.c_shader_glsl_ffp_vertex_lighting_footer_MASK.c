
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_ffp_vs_settings {scalar_t__ localviewer; } ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct wined3d_string_buffer *VAR_0,
        const struct wined3d_ffp_vs_settings *VAR_1, unsigned int VAR_2)
{
    FUNC_0(VAR_0, "diffuse += clamp(dot(dir, normal), 0.0, 1.0)"
            " * ffp_light[%u].diffuse.xyz * att;\n", VAR_2);
    if (VAR_1->localviewer)
        FUNC_0(VAR_0, "t = dot(normal, normalize(dir - normalize(ec_pos.xyz)));\n");
    else
        FUNC_0(VAR_0, "t = dot(normal, normalize(dir + vec3(0.0, 0.0, -1.0)));\n");
    FUNC_0(VAR_0, "if (dot(dir, normal) > 0.0 && t > 0.0) specular +="
            " pow(t, ffp_material.shininess) * ffp_light[%u].specular * att;\n", VAR_2);
}

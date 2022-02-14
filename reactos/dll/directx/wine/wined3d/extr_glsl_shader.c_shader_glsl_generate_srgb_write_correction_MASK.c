
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct wined3d_gl_info const*) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct wined3d_string_buffer *VAR_0,
        const struct wined3d_gl_info *VAR_1)
{
    const char *VAR_2 = FUNC_0(VAR_1) ? "gl_FragData[0]" : "ps_out0";

    FUNC_1(VAR_0, "tmp0.xyz = pow(%s.xyz, vec3(srgb_const0.x));\n", VAR_2);
    FUNC_1(VAR_0, "tmp0.xyz = tmp0.xyz * vec3(srgb_const0.y) - vec3(srgb_const0.z);\n");
    FUNC_1(VAR_0, "tmp1.xyz = %s.xyz * vec3(srgb_const0.w);\n", VAR_2);
    FUNC_1(VAR_0, "bvec3 srgb_compare = lessThan(%s.xyz, vec3(srgb_const1.x));\n", VAR_2);
    FUNC_1(VAR_0, "%s.xyz = mix(tmp0.xyz, tmp1.xyz, vec3(srgb_compare));\n", VAR_2);
    FUNC_1(VAR_0, "%s = clamp(%s, 0.0, 1.0);\n", VAR_2, VAR_2);
}

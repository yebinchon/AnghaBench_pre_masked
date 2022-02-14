
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
typedef enum wined3d_ffp_ps_fog_mode { ____Placeholder_wined3d_ffp_ps_fog_mode } wined3d_ffp_ps_fog_mode ;


 int FUNC_0 (char*,int) ;




 scalar_t__ FUNC_1 (struct wined3d_gl_info const*) ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct wined3d_string_buffer *VAR_0,
        const struct wined3d_gl_info *VAR_1, enum wined3d_ffp_ps_fog_mode VAR_2)
{
    const char *VAR_3 = FUNC_1(VAR_1) ? "gl_FragData[0]" : "ps_out0";

    switch (VAR_2)
    {
        case 128:
            return;

        case 129:
            FUNC_2(VAR_0, "float fog = (ffp_fog.end - ffp_varying_fogcoord) * ffp_fog.scale;\n");
            break;

        case 131:
            FUNC_2(VAR_0, "float fog = exp(-ffp_fog.density * ffp_varying_fogcoord);\n");
            break;

        case 130:
            FUNC_2(VAR_0, "float fog = exp(-ffp_fog.density * ffp_fog.density"
                    " * ffp_varying_fogcoord * ffp_varying_fogcoord);\n");
            break;

        default:
            FUNC_0("Invalid fog mode %#x.\n", VAR_2);
            return;
    }

    FUNC_2(VAR_0, "%s.xyz = mix(ffp_fog.color.xyz, %s.xyz, clamp(fog, 0.0, 1.0));\n",
            VAR_3, VAR_3);
}

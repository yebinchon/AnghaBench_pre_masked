
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
typedef enum wined3d_shader_interpolation_mode { ____Placeholder_wined3d_shader_interpolation_mode } wined3d_shader_interpolation_mode ;
 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct wined3d_string_buffer *VAR_0,
        enum wined3d_shader_interpolation_mode VAR_1)
{
    switch (VAR_1)
    {
        case 134:
            FUNC_0(VAR_0, "constant");
            break;
        case 133:
            FUNC_0(VAR_0, "linear");
            break;
        case 132:
            FUNC_0(VAR_0, "linear centroid");
            break;
        case 131:
            FUNC_0(VAR_0, "linear noperspective");
            break;
        case 128:
            FUNC_0(VAR_0, "linear sample");
            break;
        case 130:
            FUNC_0(VAR_0, "linear noperspective centroid");
            break;
        case 129:
            FUNC_0(VAR_0, "linear noperspective sample");
            break;
        default:
            FUNC_0(VAR_0, "<unrecognized_interpolation_mode %#x>", VAR_1);
            break;
    }
}

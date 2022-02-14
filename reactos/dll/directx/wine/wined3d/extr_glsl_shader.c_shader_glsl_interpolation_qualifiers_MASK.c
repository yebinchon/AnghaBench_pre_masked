
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_shader_interpolation_mode { ____Placeholder_wined3d_shader_interpolation_mode } wined3d_shader_interpolation_mode ;


 int FUNC_0 (char*,int) ;





__attribute__((used)) static const char *FUNC_1(enum wined3d_shader_interpolation_mode VAR_0)
{
    switch (VAR_0)
    {
        case 131:
            return "flat";
        case 129:
            return "noperspective";
        default:
            FUNC_0("Unhandled interpolation mode %#x.\n", VAR_0);
        case 128:
        case 130:
            return "";
    }
}

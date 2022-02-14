
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_shader_type { ____Placeholder_wined3d_shader_type } wined3d_shader_type ;


 int FUNC_0 (char*,int) ;







__attribute__((used)) static const char *FUNC_1(enum wined3d_shader_type VAR_0)
{
    switch (VAR_0)
    {
        case 128:
            return "vs";

        case 130:
            return "hs";

        case 132:
            return "ds";

        case 131:
            return "gs";

        case 129:
            return "ps";

        case 133:
            return "cs";

        default:
            FUNC_0("Unhandled shader type %#x.\n", VAR_0);
            return "unknown";
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wined3d_shader_type { ____Placeholder_wined3d_shader_type } wined3d_shader_type ;
typedef enum arb_helper_value { ____Placeholder_arb_helper_value } arb_helper_value ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static const char *FUNC_3(enum wined3d_shader_type VAR_2, enum arb_helper_value VAR_3)
{
    if (VAR_2 != VAR_1 && VAR_2 != VAR_0)
    {
        FUNC_0("Unsupported shader type '%s'.\n", FUNC_2(VAR_2));
        return "bad";
    }

    if (VAR_2 == VAR_0)
    {
        switch (VAR_3)
        {
            case 128: return "ps_helper_const.x";
            case 131: return "ps_helper_const.y";
            case 130: return "coefmul.x";
            case 133: return "ps_helper_const.xxxy";
            case 132: return "ps_helper_const.z";
            default: break;
        }
    }
    else
    {
        switch (VAR_3)
        {
            case 128: return "helper_const.x";
            case 131: return "helper_const.y";
            case 130: return "helper_const.z";
            case 132: return "helper_const.w";
            case 133: return "helper_const.xxxy";
            case 129: return "rel_addr_const.y";
        }
    }
    FUNC_1("Unmanaged %s shader helper constant requested: %u.\n",
          VAR_2 == VAR_0 ? "pixel" : "vertex", VAR_3);
    switch (VAR_3)
    {
        case 128: return "0.0";
        case 131: return "1.0";
        case 130: return "2.0";
        case 133: return "{0.0, 0.0, 0.0, 1.0}";
        case 132: return "1e-8";
        default: return "bad";
    }
}

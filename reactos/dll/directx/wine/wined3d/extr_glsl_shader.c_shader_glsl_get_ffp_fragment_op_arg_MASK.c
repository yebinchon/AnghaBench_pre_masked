
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;




 int FUNC_0 (struct wined3d_string_buffer*,char*,int,char const*) ;

__attribute__((used)) static const char *FUNC_1(struct wined3d_string_buffer *VAR_4,
        DWORD VAR_5, unsigned int VAR_6, DWORD VAR_7)
{
    const char *VAR_8;

    if (VAR_7 == VAR_0)
        return "<unused arg>";

    switch (VAR_7 & VAR_3)
    {
        case 132:
            VAR_8 = "ffp_varying_diffuse";
            break;

        case 133:
            VAR_8 = "ret";
            break;

        case 129:
            switch (VAR_6)
            {
                case 0: VAR_8 = "tex0"; break;
                case 1: VAR_8 = "tex1"; break;
                case 2: VAR_8 = "tex2"; break;
                case 3: VAR_8 = "tex3"; break;
                case 4: VAR_8 = "tex4"; break;
                case 5: VAR_8 = "tex5"; break;
                case 6: VAR_8 = "tex6"; break;
                case 7: VAR_8 = "tex7"; break;
                default:
                    VAR_8 = "<invalid texture>";
                    break;
            }
            break;

        case 128:
            VAR_8 = "tex_factor";
            break;

        case 131:
            VAR_8 = "ffp_varying_specular";
            break;

        case 130:
            VAR_8 = "temp_reg";
            break;

        case 134:
            switch (VAR_6)
            {
                case 0: VAR_8 = "tss_const0"; break;
                case 1: VAR_8 = "tss_const1"; break;
                case 2: VAR_8 = "tss_const2"; break;
                case 3: VAR_8 = "tss_const3"; break;
                case 4: VAR_8 = "tss_const4"; break;
                case 5: VAR_8 = "tss_const5"; break;
                case 6: VAR_8 = "tss_const6"; break;
                case 7: VAR_8 = "tss_const7"; break;
                default:
                    VAR_8 = "<invalid constant>";
                    break;
            }
            break;

        default:
            return "<unhandled arg>";
    }

    if (VAR_7 & VAR_2)
    {
        FUNC_0(VAR_4, "arg%u = vec4(1.0) - %s;\n", VAR_5, VAR_8);
        if (VAR_5 == 0)
            VAR_8 = "arg0";
        else if (VAR_5 == 1)
            VAR_8 = "arg1";
        else if (VAR_5 == 2)
            VAR_8 = "arg2";
    }

    if (VAR_7 & VAR_1)
    {
        FUNC_0(VAR_4, "arg%u = vec4(%s.w);\n", VAR_5, VAR_8);
        if (VAR_5 == 0)
            VAR_8 = "arg0";
        else if (VAR_5 == 1)
            VAR_8 = "arg1";
        else if (VAR_5 == 2)
            VAR_8 = "arg2";
    }

    return VAR_8;
}

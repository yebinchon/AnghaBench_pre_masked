
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_matrix {float _14; float _12; float _24; float _22; float _34; float _32; float _44; float _42; float _13; float _23; float _33; float _43; int _31; int _41; int _21; } ;
struct wined3d_gl_info {int dummy; } ;
typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;





 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct wined3d_matrix*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_gl_info *VAR_3, const struct wined3d_matrix *VAR_4,
        DWORD VAR_5, BOOL VAR_6, BOOL VAR_7, enum wined3d_format_id VAR_8,
        BOOL VAR_9, struct wined3d_matrix *VAR_10)
{
    struct wined3d_matrix VAR_11;

    if (VAR_5 == VAR_1 || VAR_5 == VAR_0 || VAR_7)
    {
        FUNC_2(VAR_10);
        return;
    }

    if (VAR_5 == (VAR_0 | VAR_2))
    {
        FUNC_0("Invalid texture transform flags: WINED3D_TTFF_COUNT1 | WINED3D_TTFF_PROJECTED.\n");
        return;
    }

    VAR_11 = *VAR_4;

    if (VAR_5 & VAR_2)
    {
        if (!VAR_9)
        {
            switch (VAR_5 & ~VAR_2)
            {
                case 129:
                    VAR_11._14 = VAR_11._12;
                    VAR_11._24 = VAR_11._22;
                    VAR_11._34 = VAR_11._32;
                    VAR_11._44 = VAR_11._42;
                    VAR_11._12 = VAR_11._22 = VAR_11._32 = VAR_11._42 = 0.0f;
                    break;
                case 128:
                    VAR_11._14 = VAR_11._13;
                    VAR_11._24 = VAR_11._23;
                    VAR_11._34 = VAR_11._33;
                    VAR_11._44 = VAR_11._43;
                    VAR_11._13 = VAR_11._23 = VAR_11._33 = VAR_11._43 = 0.0f;
                    break;
            }
        }
    }
    else
    {


        if (!VAR_6)
        {
            switch (VAR_8)
            {





                case 131:
                    VAR_11._41 = VAR_11._21;
                    VAR_11._42 = VAR_11._22;
                    VAR_11._43 = VAR_11._23;
                    VAR_11._44 = VAR_11._24;
                    break;

                case 132:
                    VAR_11._41 = VAR_11._31;
                    VAR_11._42 = VAR_11._32;
                    VAR_11._43 = VAR_11._33;
                    VAR_11._44 = VAR_11._34;
                    break;
                case 133:
                case 134:





                case 130:
                    break;
                default:
                    FUNC_1("Unexpected fixed function texture coord input\n");
            }
        }
        if (!VAR_9)
        {
            switch (VAR_5 & ~VAR_2)
            {

                case 129:
                    VAR_11._13 = VAR_11._23 = VAR_11._33 = VAR_11._43 = 0.0f;
                default:
                    VAR_11._14 = VAR_11._24 = VAR_11._34 = 0.0f; VAR_11._44 = 1.0f;
            }
        }
    }

    *VAR_10 = VAR_11;
}

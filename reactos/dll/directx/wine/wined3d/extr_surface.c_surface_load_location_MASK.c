
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_surface {int dummy; } ;
struct wined3d_context {int dummy; } ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct wined3d_surface*,int ) ;
 int FUNC_2 (struct wined3d_surface*,struct wined3d_context*) ;
 int FUNC_3 (struct wined3d_surface*,struct wined3d_context*,int) ;
 int FUNC_4 (struct wined3d_surface*,struct wined3d_context*,int) ;
 int FUNC_5 (struct wined3d_surface*,struct wined3d_context*,int) ;
 int FUNC_6 (int) ;

BOOL FUNC_7(struct wined3d_surface *VAR_1, struct wined3d_context *VAR_2, DWORD VAR_3)
{
    FUNC_1("surface %p, location %s.\n", VAR_1, FUNC_6(VAR_3));

    switch (VAR_3)
    {
        case 128:
        case 131:
        case 135:
            return FUNC_4(VAR_1, VAR_2, VAR_3);

        case 134:
            return FUNC_2(VAR_1, VAR_2);

        case 132:
        case 133:
            return FUNC_3(VAR_1, VAR_2, VAR_3);

        case 130:
        case 129:
            return FUNC_5(VAR_1, VAR_2,
                    VAR_3 == 129);

        default:
            FUNC_0("Don't know how to handle location %#x.\n", VAR_3);
            return VAR_0;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int dummy; } ;
struct wined3d_context {int dummy; } ;
typedef int DWORD ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct wined3d_context*,struct wined3d_state const*,int) ;
 int FUNC_3 (struct wined3d_context*,int) ;

__attribute__((used)) static void FUNC_4(struct wined3d_context *VAR_3, const struct wined3d_state *VAR_4, DWORD VAR_5)
{
    DWORD VAR_6 = (VAR_5 - FUNC_0(0, 0)) / (VAR_0 + 1);

    FUNC_1("Setting result arg for stage %u.\n", VAR_6);

    if (!FUNC_3(VAR_3, FUNC_0(VAR_6, VAR_2)))
    {
        FUNC_2(VAR_3, VAR_4, FUNC_0(VAR_6, VAR_2));
    }
    if (!FUNC_3(VAR_3, FUNC_0(VAR_6, VAR_1)))
    {
        FUNC_2(VAR_3, VAR_4, FUNC_0(VAR_6, VAR_1));
    }
}

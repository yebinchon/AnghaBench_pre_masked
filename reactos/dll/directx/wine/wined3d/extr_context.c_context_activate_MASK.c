
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture {int dummy; } ;
struct wined3d_context {scalar_t__ needs_set; int valid; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct wined3d_context*) ;
 struct wined3d_context* FUNC_2 () ;
 int FUNC_3 (struct wined3d_context*) ;
 int FUNC_4 (struct wined3d_context*) ;
 int FUNC_5 (struct wined3d_context*,struct wined3d_texture*,unsigned int) ;
 int FUNC_6 (struct wined3d_context*) ;

__attribute__((used)) static void FUNC_7(struct wined3d_context *VAR_0,
        struct wined3d_texture *VAR_1, unsigned int VAR_2)
{
    FUNC_1(VAR_0);
    FUNC_6(VAR_0);
    FUNC_5(VAR_0, VAR_1, VAR_2);
    if (!VAR_0->valid)
        return;

    if (VAR_0 != FUNC_2())
    {
        if (!FUNC_3(VAR_0))
            FUNC_0("Failed to activate the new context.\n");
    }
    else if (VAR_0->needs_set)
    {
        FUNC_4(VAR_0);
    }
}

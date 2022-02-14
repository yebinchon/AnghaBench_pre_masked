
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_color {int a; int b; int g; int r; } ;


 char const* FUNC_0 (char*,int ,int ,int ,int ) ;

const char *FUNC_1(const struct wined3d_color *VAR_0)
{
    if (!VAR_0)
        return "(null)";
    return FUNC_0("{%.8e, %.8e, %.8e, %.8e}",
            VAR_0->r, VAR_0->g, VAR_0->b, VAR_0->a);
}

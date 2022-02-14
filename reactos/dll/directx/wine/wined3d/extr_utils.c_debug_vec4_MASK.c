
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_vec4 {int w; int z; int y; int x; } ;


 char const* FUNC_0 (char*,int ,int ,int ,int ) ;

const char *FUNC_1(const struct wined3d_vec4 *VAR_0)
{
    if (!VAR_0)
        return "(null)";
    return FUNC_0("{%.8e, %.8e, %.8e, %.8e}",
            VAR_0->x, VAR_0->y, VAR_0->z, VAR_0->w);
}

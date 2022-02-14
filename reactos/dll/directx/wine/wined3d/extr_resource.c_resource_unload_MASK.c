
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_resource {scalar_t__ map_count; } ;


 int FUNC_0 (char*,struct wined3d_resource*) ;

void FUNC_1(struct wined3d_resource *VAR_0)
{
    if (VAR_0->map_count)
        FUNC_0("Resource %p is being unloaded while mapped.\n", VAR_0);
}

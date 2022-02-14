
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int map_count; } ;
struct wined3d_texture {TYPE_1__ resource; int update_map_binding; } ;
typedef int DWORD ;


 int FUNC_0 (struct wined3d_texture*) ;

void FUNC_1(struct wined3d_texture *VAR_0, DWORD VAR_1)
{
    VAR_0->update_map_binding = VAR_1;
    if (!VAR_0->resource.map_count)
        FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_unordered_access_view {int resource; } ;
struct TYPE_4__ {TYPE_1__* uav_resource_info; } ;
struct wined3d_shader {TYPE_2__ reg_maps; } ;
struct TYPE_3__ {int type; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const struct wined3d_shader *VAR_1,
        struct wined3d_unordered_access_view * const *VAR_2)
{
    unsigned int VAR_3;

    if (!VAR_1)
        return;

    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
    {
        if (!VAR_1->reg_maps.uav_resource_info[VAR_3].type)
            continue;

        if (!VAR_2[VAR_3])
            continue;

        FUNC_0(VAR_2[VAR_3]->resource);
    }
}

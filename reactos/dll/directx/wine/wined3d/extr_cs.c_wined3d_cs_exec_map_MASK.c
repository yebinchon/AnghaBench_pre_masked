
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_resource {TYPE_1__* resource_ops; } ;
struct wined3d_cs_map {int flags; int box; int map_desc; int sub_resource_idx; int * hr; struct wined3d_resource* resource; } ;
struct wined3d_cs {int dummy; } ;
struct TYPE_2__ {int (* resource_sub_resource_map ) (struct wined3d_resource*,int ,int ,int ,int ) ;} ;


 int FUNC_0 (struct wined3d_resource*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_map *VAR_2 = VAR_1;
    struct wined3d_resource *VAR_3 = VAR_2->resource;

    *VAR_2->hr = VAR_3->resource_ops->resource_sub_resource_map(VAR_3,
            VAR_2->sub_resource_idx, VAR_2->map_desc, VAR_2->box, VAR_2->flags);
}

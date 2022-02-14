
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_resource {TYPE_1__* resource_ops; } ;
struct wined3d_cs_unload_resource {struct wined3d_resource* resource; } ;
struct wined3d_cs {int dummy; } ;
struct TYPE_2__ {int (* resource_unload ) (struct wined3d_resource*) ;} ;


 int FUNC_0 (struct wined3d_resource*) ;
 int FUNC_1 (struct wined3d_resource*) ;

__attribute__((used)) static void FUNC_2(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_unload_resource *VAR_2 = VAR_1;
    struct wined3d_resource *VAR_3 = VAR_2->resource;

    VAR_3->resource_ops->resource_unload(VAR_3);
    FUNC_1(VAR_3);
}

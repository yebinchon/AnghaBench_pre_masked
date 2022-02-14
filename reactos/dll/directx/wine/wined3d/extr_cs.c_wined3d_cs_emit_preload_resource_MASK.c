
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_resource {int dummy; } ;
struct wined3d_cs_preload_resource {struct wined3d_resource* resource; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_preload_resource* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_preload_resource* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;
 int FUNC_2 (struct wined3d_resource*) ;

void FUNC_3(struct wined3d_cs *VAR_2, struct wined3d_resource *VAR_3)
{
    struct wined3d_cs_preload_resource *VAR_4;

    VAR_4 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_4), VAR_1);
    VAR_4->opcode = VAR_0;
    VAR_4->resource = VAR_3;

    FUNC_2(VAR_3);

    VAR_2->ops->submit(VAR_2, VAR_1);
}

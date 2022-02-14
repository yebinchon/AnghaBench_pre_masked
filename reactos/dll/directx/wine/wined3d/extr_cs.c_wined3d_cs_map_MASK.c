
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_resource {int dummy; } ;
struct wined3d_map_desc {int dummy; } ;
struct wined3d_cs_map {unsigned int sub_resource_idx; unsigned int flags; int * hr; struct wined3d_box const* box; struct wined3d_map_desc* map_desc; struct wined3d_resource* resource; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
struct wined3d_box {int dummy; } ;
struct TYPE_2__ {int (* finish ) (struct wined3d_cs*,int ) ;int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_map* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_map* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;
 int FUNC_2 (struct wined3d_cs*,int ) ;
 int FUNC_3 (struct wined3d_cs*) ;

HRESULT FUNC_4(struct wined3d_cs *VAR_2, struct wined3d_resource *VAR_3, unsigned int VAR_4,
        struct wined3d_map_desc *VAR_5, const struct wined3d_box *VAR_6, unsigned int VAR_7)
{
    struct wined3d_cs_map *VAR_8;
    HRESULT VAR_9;



    FUNC_3(VAR_2);

    VAR_8 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_8), VAR_1);
    VAR_8->opcode = VAR_0;
    VAR_8->resource = VAR_3;
    VAR_8->sub_resource_idx = VAR_4;
    VAR_8->map_desc = VAR_5;
    VAR_8->box = VAR_6;
    VAR_8->flags = VAR_7;
    VAR_8->hr = &VAR_9;

    VAR_2->ops->submit(VAR_2, VAR_1);
    VAR_2->ops->finish(VAR_2, VAR_1);

    return VAR_9;
}

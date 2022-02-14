
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_texture {int resource; } ;
struct wined3d_cs_add_dirty_texture_region {unsigned int layer; struct wined3d_texture* texture; int opcode; } ;
struct wined3d_cs {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_add_dirty_texture_region* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_add_dirty_texture_region* FUNC_0 (struct wined3d_cs*,int,int ) ;
 int FUNC_1 (struct wined3d_cs*,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct wined3d_cs *VAR_2,
        struct wined3d_texture *VAR_3, unsigned int VAR_4)
{
    struct wined3d_cs_add_dirty_texture_region *VAR_5;

    VAR_5 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_5), VAR_1);
    VAR_5->opcode = VAR_0;
    VAR_5->texture = VAR_3;
    VAR_5->layer = VAR_4;

    FUNC_2(&VAR_3->resource);

    VAR_2->ops->submit(VAR_2, VAR_1);
}

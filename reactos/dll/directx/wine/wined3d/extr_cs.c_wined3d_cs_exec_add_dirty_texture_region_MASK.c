
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int map_binding; } ;
struct wined3d_texture {unsigned int level_count; TYPE_1__ resource; } ;
struct wined3d_cs_add_dirty_texture_region {unsigned int layer; struct wined3d_texture* texture; } ;
struct wined3d_cs {int device; } ;
struct wined3d_context {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 struct wined3d_context* FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct wined3d_context*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct wined3d_texture*,unsigned int,int ) ;
 scalar_t__ FUNC_6 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int ) ;

__attribute__((used)) static void FUNC_7(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_add_dirty_texture_region *VAR_2 = VAR_1;
    struct wined3d_texture *VAR_3 = VAR_2->texture;
    unsigned int VAR_4, VAR_5;
    struct wined3d_context *VAR_6;

    VAR_6 = FUNC_1(VAR_0->device, ((void*)0), 0);
    VAR_4 = VAR_2->layer * VAR_3->level_count;
    for (VAR_5 = 0; VAR_5 < VAR_3->level_count; ++VAR_5, ++VAR_4)
    {
        if (FUNC_6(VAR_3, VAR_4, VAR_6, VAR_3->resource.map_binding))
            FUNC_5(VAR_3, VAR_4, ~VAR_3->resource.map_binding);
        else
            FUNC_0("Failed to load location %s.\n", FUNC_3(VAR_3->resource.map_binding));
    }
    FUNC_2(VAR_6);

    FUNC_4(&VAR_3->resource);
}

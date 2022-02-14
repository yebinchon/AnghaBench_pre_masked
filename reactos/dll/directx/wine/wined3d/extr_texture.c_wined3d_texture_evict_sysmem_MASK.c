
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture_sub_resource {int locations; } ;
struct wined3d_texture {int flags; scalar_t__ download_count; unsigned int level_count; unsigned int layer_count; int resource; struct wined3d_texture_sub_resource* sub_resources; } ;


 int FUNC_0 (char*,unsigned int,struct wined3d_texture*) ;
 int FUNC_1 (char*,struct wined3d_texture*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wined3d_texture *VAR_4)
{
    struct wined3d_texture_sub_resource *VAR_5;
    unsigned int VAR_6, VAR_7;

    if (VAR_4->flags & (VAR_1 | VAR_3)
            || VAR_4->download_count > VAR_2)
    {
        FUNC_1("Not evicting system memory for texture %p.\n", VAR_4);
        return;
    }

    FUNC_1("Evicting system memory for texture %p.\n", VAR_4);

    VAR_7 = VAR_4->level_count * VAR_4->layer_count;
    for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
    {
        VAR_5 = &VAR_4->sub_resources[VAR_6];
        if (VAR_5->locations == VAR_0)
            FUNC_0("WINED3D_LOCATION_SYSMEM is the only location for sub-resource %u of texture %p.\n",
                    VAR_6, VAR_4);
        VAR_5->locations &= ~VAR_0;
    }
    FUNC_2(&VAR_4->resource);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_texture {int flags; TYPE_1__* sub_resources; } ;
struct wined3d_resource {scalar_t__ type; int access; int map_binding; } ;
struct wined3d_rendertarget_view {size_t sub_resource_idx; struct wined3d_resource* resource; } ;
struct TYPE_2__ {int locations; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wined3d_texture* FUNC_0 (struct wined3d_resource*) ;

__attribute__((used)) static BOOL FUNC_1(struct wined3d_rendertarget_view *VAR_5)
{
    struct wined3d_resource *VAR_6;
    struct wined3d_texture *VAR_7;
    DWORD VAR_8;

    VAR_6 = VAR_5->resource;
    if (VAR_6->type == VAR_2)
        return !(VAR_6->access & VAR_1);

    VAR_7 = FUNC_0(VAR_6);
    VAR_8 = VAR_7->sub_resources[VAR_5->sub_resource_idx].locations;
    if (VAR_8 & (VAR_6->map_binding | VAR_0))
        return !(VAR_6->access & VAR_1)
                || (VAR_7->flags & VAR_4);

    return !(VAR_6->access & VAR_1)
            && !(VAR_7->flags & VAR_3);
}

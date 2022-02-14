
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int layer_count; scalar_t__ layer_idx; int level_count; scalar_t__ level_idx; } ;
struct TYPE_4__ {TYPE_1__ texture; } ;
struct wined3d_view_desc {TYPE_2__ u; scalar_t__ flags; int format_id; } ;
struct wined3d_sub_resource_desc {int usage; int format; } ;
struct wined3d_shader_resource_view {int dummy; } ;
struct d3d9_texture {struct wined3d_shader_resource_view* wined3d_srv; int wined3d_texture; } ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct wined3d_view_desc*,int ,struct d3d9_texture*,int *,struct wined3d_shader_resource_view**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,struct wined3d_sub_resource_desc*) ;

__attribute__((used)) static struct wined3d_shader_resource_view *FUNC_6(struct d3d9_texture *VAR_2)
{
    struct wined3d_sub_resource_desc VAR_3;
    struct wined3d_view_desc VAR_4;
    HRESULT VAR_5;

    if (VAR_2->wined3d_srv)
        return VAR_2->wined3d_srv;

    FUNC_5(VAR_2->wined3d_texture, 0, &VAR_3);
    VAR_4.format_id = VAR_3.format;
    VAR_4.flags = 0;
    VAR_4.u.texture.level_idx = 0;
    VAR_4.u.texture.level_count = FUNC_3(VAR_2->wined3d_texture);
    VAR_4.u.texture.layer_idx = 0;
    VAR_4.u.texture.layer_count = VAR_3.usage & VAR_0 ? 6 : 1;
    if (FUNC_1(VAR_5 = FUNC_2(&VAR_4,
            FUNC_4(VAR_2->wined3d_texture), VAR_2,
            &VAR_1, &VAR_2->wined3d_srv)))
    {
        FUNC_0("Failed to create shader resource view, hr %#x.\n", VAR_5);
        return ((void*)0);
    }

    return VAR_2->wined3d_srv;
}

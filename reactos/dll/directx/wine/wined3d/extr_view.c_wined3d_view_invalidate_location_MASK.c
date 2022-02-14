
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int layer_idx; unsigned int level_idx; int layer_count; } ;
struct TYPE_4__ {TYPE_1__ texture; } ;
struct wined3d_view_desc {TYPE_2__ u; } ;
struct wined3d_texture {unsigned int level_count; } ;
struct wined3d_resource {scalar_t__ type; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wined3d_resource*) ;
 struct wined3d_texture* FUNC_1 (struct wined3d_resource*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct wined3d_texture*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct wined3d_resource *VAR_2,
        const struct wined3d_view_desc *VAR_3, DWORD VAR_4)
{
    unsigned int VAR_5, VAR_6, VAR_7;
    struct wined3d_texture *VAR_8;

    if (VAR_2->type == VAR_0)
    {
        FUNC_2(FUNC_0(VAR_2), VAR_4);
        return;
    }

    VAR_8 = FUNC_1(VAR_2);

    VAR_6 = VAR_3->u.texture.layer_idx * VAR_8->level_count + VAR_3->u.texture.level_idx;
    VAR_7 = VAR_2->type != VAR_1 ? VAR_3->u.texture.layer_count : 1;
    for (VAR_5 = 0; VAR_5 < VAR_7; ++VAR_5, VAR_6 += VAR_8->level_count)
        FUNC_3(VAR_8, VAR_6, VAR_4);
}

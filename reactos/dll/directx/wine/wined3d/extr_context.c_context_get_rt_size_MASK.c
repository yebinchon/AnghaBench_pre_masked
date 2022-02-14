
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_texture {unsigned int level_count; scalar_t__ swapchain; } ;
struct TYPE_6__ {unsigned int sub_resource_idx; struct wined3d_texture* texture; } ;
struct wined3d_context {TYPE_1__ current_rt; int win_handle; } ;
struct TYPE_8__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_7__ {scalar_t__ cy; scalar_t__ cx; } ;
typedef TYPE_2__ SIZE ;
typedef TYPE_3__ RECT ;


 int FUNC_0 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (struct wined3d_texture const*,unsigned int) ;
 scalar_t__ FUNC_2 (struct wined3d_texture const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_context *VAR_0, SIZE *VAR_1)
{
    const struct wined3d_texture *VAR_2 = VAR_0->current_rt.texture;
    unsigned int VAR_3;

    if (VAR_2->swapchain)
    {
        RECT VAR_4;

        FUNC_0(VAR_0->win_handle, &VAR_4);
        VAR_1->cx = VAR_4.right - VAR_4.left;
        VAR_1->cy = VAR_4.bottom - VAR_4.top;

        return;
    }

    VAR_3 = VAR_0->current_rt.sub_resource_idx % VAR_2->level_count;
    VAR_1->cx = FUNC_2(VAR_2, VAR_3);
    VAR_1->cy = FUNC_1(VAR_2, VAR_3);
}

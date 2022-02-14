
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_device {TYPE_4__* blitter; } ;
struct wined3d_cs_clear {unsigned int rt_count; int flags; TYPE_5__* fb; int stencil; int depth; int color; int draw_rect; int rects; int rect_count; } ;
struct wined3d_cs {struct wined3d_device* device; } ;
struct TYPE_10__ {TYPE_3__* depth_stencil; TYPE_2__** render_targets; } ;
struct TYPE_9__ {TYPE_1__* ops; } ;
struct TYPE_8__ {int resource; } ;
struct TYPE_7__ {int resource; } ;
struct TYPE_6__ {int (* blitter_clear ) (TYPE_4__*,struct wined3d_device*,unsigned int,TYPE_5__*,int ,int ,int *,int,int *,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,struct wined3d_device*,unsigned int,TYPE_5__*,int ,int ,int *,int,int *,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wined3d_cs *VAR_3, const void *VAR_4)
{
    const struct wined3d_cs_clear *VAR_5 = VAR_4;
    struct wined3d_device *VAR_6;
    unsigned int VAR_7;

    VAR_6 = VAR_3->device;
    VAR_6->blitter->ops->blitter_clear(VAR_6->blitter, VAR_6, VAR_5->rt_count, VAR_5->fb,
            VAR_5->rect_count, VAR_5->rects, &VAR_5->draw_rect, VAR_5->flags, &VAR_5->color, VAR_5->depth, VAR_5->stencil);

    if (VAR_5->flags & VAR_1)
    {
        for (VAR_7 = 0; VAR_7 < VAR_5->rt_count; ++VAR_7)
        {
            if (VAR_5->fb->render_targets[VAR_7])
                FUNC_1(VAR_5->fb->render_targets[VAR_7]->resource);
        }
    }
    if (VAR_5->flags & (VAR_2 | VAR_0))
        FUNC_1(VAR_5->fb->depth_stencil->resource);
}

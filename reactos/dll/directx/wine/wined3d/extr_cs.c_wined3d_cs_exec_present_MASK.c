
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ swap_interval; unsigned int backbuffer_count; } ;
struct wined3d_swapchain {TYPE_4__** back_buffers; TYPE_3__ desc; TYPE_2__* front_buffer; TYPE_1__* swapchain_ops; } ;
struct wined3d_cs_present {scalar_t__ swap_interval; int flags; int dst_rect; int src_rect; int dst_window_override; struct wined3d_swapchain* swapchain; } ;
struct wined3d_cs {int pending_presents; } ;
struct TYPE_8__ {int resource; } ;
struct TYPE_6__ {int resource; } ;
struct TYPE_5__ {int (* swapchain_present ) (struct wined3d_swapchain*,int *,int *,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct wined3d_swapchain*,int *,int *,int ) ;
 int FUNC_2 (struct wined3d_swapchain*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wined3d_swapchain*,int ) ;

__attribute__((used)) static void FUNC_5(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_present *VAR_2 = VAR_1;
    struct wined3d_swapchain *VAR_3;
    unsigned int VAR_4;

    VAR_3 = VAR_2->swapchain;
    FUNC_4(VAR_3, VAR_2->dst_window_override);

    if (VAR_2->swap_interval && VAR_3->desc.swap_interval != VAR_2->swap_interval)
    {
        VAR_3->desc.swap_interval = VAR_2->swap_interval;
        FUNC_2(VAR_3);
    }

    VAR_3->swapchain_ops->swapchain_present(VAR_3, &VAR_2->src_rect, &VAR_2->dst_rect, VAR_2->flags);

    FUNC_3(&VAR_3->front_buffer->resource);
    for (VAR_4 = 0; VAR_4 < VAR_3->desc.backbuffer_count; ++VAR_4)
    {
        FUNC_3(&VAR_3->back_buffers[VAR_4]->resource);
    }

    FUNC_0(&VAR_0->pending_presents);
}

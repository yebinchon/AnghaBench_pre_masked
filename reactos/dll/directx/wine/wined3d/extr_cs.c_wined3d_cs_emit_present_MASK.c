
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int backbuffer_count; } ;
struct wined3d_swapchain {TYPE_3__** back_buffers; TYPE_2__ desc; TYPE_1__* front_buffer; } ;
struct wined3d_cs_present {void* flags; void* swap_interval; int dst_rect; int src_rect; struct wined3d_swapchain* swapchain; int dst_window_override; int opcode; } ;
struct wined3d_cs {int pending_presents; TYPE_4__* ops; } ;
struct TYPE_8__ {int (* submit ) (struct wined3d_cs*,int ) ;struct wined3d_cs_present* (* require_space ) (struct wined3d_cs*,int,int ) ;} ;
struct TYPE_7__ {int resource; } ;
struct TYPE_5__ {int resource; } ;
typedef int RECT ;
typedef int LONG ;
typedef int HWND ;
typedef void* DWORD ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct wined3d_cs_present* FUNC_2 (struct wined3d_cs*,int,int ) ;
 int FUNC_3 (struct wined3d_cs*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

void FUNC_6(struct wined3d_cs *VAR_2, struct wined3d_swapchain *VAR_3,
        const RECT *VAR_4, const RECT *VAR_5, HWND VAR_6,
        DWORD VAR_7, DWORD VAR_8)
{
    struct wined3d_cs_present *VAR_9;
    unsigned int VAR_10;
    LONG VAR_11;

    VAR_9 = VAR_2->ops->require_space(VAR_2, sizeof(*VAR_9), VAR_1);
    VAR_9->opcode = VAR_0;
    VAR_9->dst_window_override = VAR_6;
    VAR_9->swapchain = VAR_3;
    VAR_9->src_rect = *VAR_4;
    VAR_9->dst_rect = *VAR_5;
    VAR_9->swap_interval = VAR_7;
    VAR_9->flags = VAR_8;

    VAR_11 = FUNC_1(&VAR_2->pending_presents);

    FUNC_5(&VAR_3->front_buffer->resource);
    for (VAR_10 = 0; VAR_10 < VAR_3->desc.backbuffer_count; ++VAR_10)
    {
        FUNC_5(&VAR_3->back_buffers[VAR_10]->resource);
    }

    VAR_2->ops->submit(VAR_2, VAR_1);




    while (VAR_11 > 1)
    {
        FUNC_4();
        VAR_11 = FUNC_0(&VAR_2->pending_presents, 0, 0);
    }
}

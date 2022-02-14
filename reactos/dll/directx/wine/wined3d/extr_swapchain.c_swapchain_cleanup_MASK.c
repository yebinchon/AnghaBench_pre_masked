
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t backbuffer_count; int flags; scalar_t__ auto_restore_display_mode; int windowed; } ;
struct wined3d_swapchain {int backup_wnd; scalar_t__ backup_dc; TYPE_4__* device; int original_window_rect; int device_window; TYPE_3__ desc; int original_mode; int ** back_buffers; int * front_buffer; int orig_gamma; } ;
typedef size_t UINT ;
struct TYPE_12__ {TYPE_1__* ops; } ;
struct TYPE_11__ {TYPE_2__* adapter; int wined3d; TYPE_6__* cs; } ;
struct TYPE_9__ {int ordinal; } ;
struct TYPE_8__ {int (* finish ) (TYPE_6__*,int ) ;} ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,struct wined3d_swapchain*,...) ;
 int FUNC_4 (char*,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int **) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*,int ,struct wined3d_swapchain*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int ,int *) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_12 (struct wined3d_swapchain*,int ,int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;

__attribute__((used)) static void FUNC_15(struct wined3d_swapchain *VAR_3)
{
    HRESULT VAR_4;
    UINT VAR_5;

    FUNC_3("Destroying swapchain %p.\n", VAR_3);

    FUNC_12(VAR_3, 0, &VAR_3->orig_gamma);



    if (VAR_3->front_buffer)
    {
        FUNC_14(VAR_3->front_buffer, ((void*)0));
        if (FUNC_13(VAR_3->front_buffer))
            FUNC_4("Something's still holding the front buffer (%p).\n", VAR_3->front_buffer);
        VAR_3->front_buffer = ((void*)0);
    }

    if (VAR_3->back_buffers)
    {
        VAR_5 = VAR_3->desc.backbuffer_count;

        while (VAR_5--)
        {
            FUNC_14(VAR_3->back_buffers[VAR_5], ((void*)0));
            if (FUNC_13(VAR_3->back_buffers[VAR_5]))
                FUNC_4("Something's still holding back buffer %u (%p).\n", VAR_5, VAR_3->back_buffers[VAR_5]);
        }
        FUNC_5(VAR_3->back_buffers);
        VAR_3->back_buffers = ((void*)0);
    }

    FUNC_7(VAR_3->device->cs, VAR_2, VAR_3);
    VAR_3->device->cs->ops->finish(VAR_3->device->cs, VAR_0);







    if (!VAR_3->desc.windowed && VAR_3->desc.auto_restore_display_mode)
    {
        if (FUNC_2(VAR_4 = FUNC_11(VAR_3->device->wined3d,
                VAR_3->device->adapter->ordinal, &VAR_3->original_mode)))
            FUNC_1("Failed to restore display mode, hr %#x.\n", VAR_4);

        if (VAR_3->desc.flags & VAR_1)
        {
            FUNC_9(VAR_3->device, VAR_3->device_window,
                    &VAR_3->original_window_rect);
            FUNC_8(VAR_3->device);
        }
    }

    if (VAR_3->backup_dc)
    {
        FUNC_3("Destroying backup wined3d window %p, dc %p.\n", VAR_3->backup_wnd, VAR_3->backup_dc);

        FUNC_10(VAR_3->backup_wnd, VAR_3->backup_dc);
        FUNC_0(VAR_3->backup_wnd);
    }
}

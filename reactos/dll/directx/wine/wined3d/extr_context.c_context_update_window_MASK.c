
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_context {scalar_t__ win_handle; int needs_set; int valid; scalar_t__ hdc; void* hdc_has_format; void* hdc_is_private; TYPE_1__* swapchain; } ;
struct TYPE_2__ {scalar_t__ win_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 void* VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (char*,struct wined3d_context*,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct wined3d_context *VAR_3)
{
    if (!VAR_3->swapchain)
        return;

    if (VAR_3->win_handle == VAR_3->swapchain->win_handle)
        return;

    FUNC_2("Updating context %p window from %p to %p.\n",
            VAR_3, VAR_3->win_handle, VAR_3->swapchain->win_handle);

    if (VAR_3->hdc)
        FUNC_3(VAR_3->win_handle, VAR_3->hdc);

    VAR_3->win_handle = VAR_3->swapchain->win_handle;
    VAR_3->hdc_is_private = VAR_2;
    VAR_3->hdc_has_format = VAR_2;
    VAR_3->needs_set = 1;
    VAR_3->valid = 1;

    if (!(VAR_3->hdc = FUNC_1(VAR_3->win_handle, 0, VAR_1 | VAR_0)))
    {
        FUNC_0("Failed to get a device context for window %p.\n", VAR_3->win_handle);
        VAR_3->valid = 0;
    }
}

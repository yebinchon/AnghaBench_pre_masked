
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wined3d_texture {TYPE_1__* swapchain; } ;
struct wined3d_surface {struct wined3d_texture* container; } ;
typedef void* UINT ;
struct TYPE_10__ {int y; int x; int member_1; int member_0; } ;
struct TYPE_9__ {void* bottom; void* top; } ;
struct TYPE_8__ {struct wined3d_texture* front_buffer; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ POINT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;

void FUNC_3(const struct wined3d_surface *VAR_0, HWND VAR_1, RECT *VAR_2)
{
    struct wined3d_texture *VAR_3 = VAR_0->container;
    POINT VAR_4 = {0, 0};
    UINT VAR_5;
    RECT VAR_6;

    if (!VAR_3->swapchain)
        return;

    if (VAR_3 == VAR_3->swapchain->front_buffer)
    {
        FUNC_2(VAR_1, &VAR_4);
        FUNC_1(VAR_2, VAR_4.x, VAR_4.y);
    }

    FUNC_0(VAR_1, &VAR_6);
    VAR_5 = VAR_6.bottom - VAR_6.top;

    VAR_2->top = VAR_5 - VAR_2->top;
    VAR_2->bottom = VAR_5 - VAR_2->bottom;
}

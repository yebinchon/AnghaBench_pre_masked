
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ windowed; } ;
struct wined3d_swapchain {int front_buffer_update; TYPE_7__* front_buffer; TYPE_5__ desc; int win_handle; int dc; TYPE_4__* container; scalar_t__ palette; } ;
struct wined3d_surface {int front_buffer_update; TYPE_7__* front_buffer; TYPE_5__ desc; int win_handle; int dc; TYPE_4__* container; scalar_t__ palette; } ;
struct TYPE_23__ {scalar_t__ y; scalar_t__ x; int member_1; int member_0; } ;
struct TYPE_22__ {scalar_t__ top; scalar_t__ left; scalar_t__ bottom; scalar_t__ right; } ;
struct TYPE_20__ {int height; int width; } ;
struct TYPE_21__ {TYPE_6__ resource; TYPE_2__* sub_resources; } ;
struct TYPE_17__ {scalar_t__ map_count; } ;
struct TYPE_18__ {TYPE_3__ resource; } ;
struct TYPE_15__ {struct wined3d_swapchain* surface; } ;
struct TYPE_16__ {TYPE_1__ u; } ;
typedef TYPE_8__ RECT ;
typedef TYPE_9__ POINT ;
typedef int HWND ;
typedef int HDC ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int ,TYPE_9__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_8__*,TYPE_8__*,int *) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_8__*,int ,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,struct wined3d_swapchain*) ;
 struct wined3d_swapchain* FUNC_9 (TYPE_9__*) ;
 int FUNC_10 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_11(struct wined3d_swapchain *VAR_3)
{
    struct wined3d_surface *VAR_4;
    POINT VAR_5 = {0, 0};
    HDC VAR_6, VAR_7;
    RECT VAR_8;
    HWND VAR_9;

    FUNC_8("swapchain %p.\n", VAR_3);

    VAR_4 = VAR_3->front_buffer->sub_resources[0].u.surface;
    if (VAR_3->palette)
        FUNC_10(VAR_3->palette, VAR_4->dc);

    if (VAR_4->container->resource.map_count)
        FUNC_2("Trying to blit a mapped surface.\n");

    FUNC_8("Copying surface %p to screen.\n", VAR_4);

    VAR_6 = VAR_4->dc;
    VAR_9 = VAR_3->win_handle;
    VAR_7 = FUNC_3(VAR_9, 0, VAR_1 | VAR_0);



    if (VAR_3->desc.windowed)
        FUNC_1(VAR_9, &VAR_5);

    FUNC_8("offset %s.\n", FUNC_9(&VAR_5));

    FUNC_6(&VAR_8, 0, 0, VAR_3->front_buffer->resource.width,
            VAR_3->front_buffer->resource.height);
    FUNC_4(&VAR_8, &VAR_8, &VAR_3->front_buffer_update);

    FUNC_0(VAR_7, VAR_8.left - VAR_5.x, VAR_8.top - VAR_5.y,
            VAR_8.right - VAR_8.left, VAR_8.bottom - VAR_8.top,
            VAR_6, VAR_8.left, VAR_8.top, VAR_2);
    FUNC_5(VAR_9, VAR_7);

    FUNC_7(&VAR_3->front_buffer_update);
}

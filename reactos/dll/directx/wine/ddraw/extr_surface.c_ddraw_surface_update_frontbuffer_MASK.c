
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dwHeight; int dwWidth; } ;
struct ddraw_surface {int sub_resource_idx; int wined3d_texture; TYPE_2__* palette; TYPE_1__ surface_desc; struct ddraw* ddraw; } ;
struct ddraw {int flags; int wined3d_frontbuffer; scalar_t__ swapchain_window; } ;
struct TYPE_10__ {int left; int top; int right; int bottom; } ;
struct TYPE_9__ {int wined3d_palette; } ;
typedef TYPE_3__ RECT ;
typedef int HRESULT ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int,int,int,int,int ,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,TYPE_3__ const*,int ,int ,TYPE_3__ const*,int ,int *,int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;

HRESULT FUNC_10(struct ddraw_surface *VAR_5, const RECT *VAR_6, BOOL VAR_7)
{
    struct ddraw *VAR_8 = VAR_5->ddraw;
    HDC VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14;
    HRESULT VAR_15;
    BOOL VAR_16;
    RECT VAR_17;

    if (!VAR_6)
    {
        FUNC_5(&VAR_17, 0, 0, VAR_5->surface_desc.dwWidth, VAR_5->surface_desc.dwHeight);
        VAR_6 = &VAR_17;
    }

    VAR_11 = VAR_6->left;
    VAR_12 = VAR_6->top;
    VAR_13 = VAR_6->right - VAR_6->left;
    VAR_14 = VAR_6->bottom - VAR_6->top;

    if (VAR_13 <= 0 || VAR_14 <= 0)
        return VAR_1;

    if (VAR_8->swapchain_window && !(VAR_8->flags & VAR_0))
    {


        if (VAR_7)
            return VAR_1;

        return FUNC_7(VAR_8->wined3d_frontbuffer, 0, VAR_6,
                VAR_5->wined3d_texture, VAR_5->sub_resource_idx, VAR_6, 0, ((void*)0), VAR_4);
    }

    if (FUNC_2(VAR_15 = FUNC_8(VAR_5->wined3d_texture, VAR_5->sub_resource_idx, &VAR_9)))
    {
        FUNC_1("Failed to get surface DC, hr %#x.\n", VAR_15);
        return VAR_15;
    }
    if (VAR_5->palette)
        FUNC_6(VAR_5->palette->wined3d_palette, VAR_9);

    if (!(VAR_10 = FUNC_3(((void*)0))))
    {
        FUNC_9(VAR_5->wined3d_texture, VAR_5->sub_resource_idx, VAR_9);
        FUNC_1("Failed to get screen DC.\n");
        return VAR_2;
    }

    if (VAR_7)
        VAR_16 = FUNC_0(VAR_9, VAR_11, VAR_12, VAR_13, VAR_14,
                VAR_10, VAR_11, VAR_12, VAR_3);
    else
        VAR_16 = FUNC_0(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
                VAR_9, VAR_11, VAR_12, VAR_3);

    FUNC_4(((void*)0), VAR_10);
    FUNC_9(VAR_5->wined3d_texture, VAR_5->sub_resource_idx, VAR_9);

    if (!VAR_16)
    {
        FUNC_1("Failed to blit to/from screen.\n");
        return VAR_2;
    }

    return VAR_1;
}

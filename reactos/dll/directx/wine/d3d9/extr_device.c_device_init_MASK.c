
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct wined3d_swapchain_desc {int enable_auto_depth_stencil; } ;
struct wined3d {int dummy; } ;
struct TYPE_12__ {int * ops; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct d3d9_device {int refcount; struct d3d9* d3d_parent; int wined3d_device; int * render_targets; struct wined3d_swapchain_desc* implicit_swapchains; void* fvf_decls; int max_user_clip_planes; TYPE_6__ device_parent; TYPE_1__ IDirect3DDevice9Ex_iface; } ;
struct d3d9 {int IDirect3D9Ex_iface; int extended; } ;
struct TYPE_10__ {unsigned int NumberOfAdaptersInGroup; int MaxUserClipPlanes; } ;
typedef TYPE_2__ WINED3DCAPS ;
typedef int UINT ;
struct TYPE_11__ {int BackBufferHeight; int BackBufferWidth; scalar_t__ hDeviceWindow; int Windowed; } ;
typedef scalar_t__ HWND ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_3__ D3DPRESENT_PARAMETERS ;
typedef int D3DDISPLAYMODEEX ;
typedef int D3DDEVTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int VAR_6 ;
 int FUNC_5 (struct d3d9_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct wined3d_swapchain_desc*) ;
 int FUNC_8 (TYPE_3__*,struct wined3d_swapchain_desc*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (struct wined3d*,int ,int ,scalar_t__,int,int,TYPE_6__*,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,struct wined3d_swapchain_desc*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (int ,scalar_t__,int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct wined3d*,int ,int ,TYPE_2__*) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct wined3d_swapchain_desc*,TYPE_3__*,int ) ;

HRESULT FUNC_25(struct d3d9_device *VAR_9, struct d3d9 *VAR_10, struct wined3d *VAR_11,
        UINT VAR_12, D3DDEVTYPE VAR_13, HWND VAR_14, DWORD VAR_15,
        D3DPRESENT_PARAMETERS *VAR_16, D3DDISPLAYMODEEX *VAR_17)
{
    struct wined3d_swapchain_desc *VAR_18;
    unsigned VAR_19, VAR_20 = 1;
    WINED3DCAPS VAR_21;
    HRESULT VAR_22;

    if (VAR_17)
        FUNC_2("Ignoring display mode.\n");

    VAR_9->IDirect3DDevice9Ex_iface.lpVtbl = &VAR_7;
    VAR_9->device_parent.ops = &VAR_8;
    VAR_9->refcount = 1;

    if (!(VAR_15 & VAR_1)) FUNC_9();

    FUNC_21();
    if (FUNC_1(VAR_22 = FUNC_11(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, 4,
            &VAR_9->device_parent, &VAR_9->wined3d_device)))
    {
        FUNC_4("Failed to create wined3d device, hr %#x.\n", VAR_22);
        FUNC_22();
        return VAR_22;
    }

    FUNC_20(VAR_11, VAR_12, VAR_13, &VAR_21);
    VAR_9->max_user_clip_planes = VAR_21.MaxUserClipPlanes;
    if (VAR_15 & VAR_0)
        VAR_20 = VAR_21.NumberOfAdaptersInGroup;

    if (VAR_15 & VAR_2)
        FUNC_16(VAR_9->wined3d_device);

    if (!VAR_16->Windowed)
    {
        if (!VAR_14)
            VAR_14 = VAR_16->hDeviceWindow;
        if (FUNC_1(VAR_22 = FUNC_10(VAR_9->wined3d_device, VAR_14)))
        {
            FUNC_0("Failed to acquire focus window, hr %#x.\n", VAR_22);
            FUNC_12(VAR_9->wined3d_device);
            FUNC_22();
            return VAR_22;
        }

        for (VAR_19 = 0; VAR_19 < VAR_20; ++VAR_19)
        {
            HWND VAR_23 = VAR_16[VAR_19].hDeviceWindow;

            if (!VAR_23) VAR_23 = VAR_14;
            FUNC_18(VAR_9->wined3d_device, VAR_23,
                    VAR_16[VAR_19].BackBufferWidth,
                    VAR_16[VAR_19].BackBufferHeight);
        }
    }

    if (!(VAR_18 = FUNC_6(sizeof(*VAR_18) * VAR_20)))
    {
        FUNC_0("Failed to allocate wined3d parameters.\n");
        FUNC_15(VAR_9->wined3d_device);
        FUNC_12(VAR_9->wined3d_device);
        FUNC_22();
        return VAR_5;
    }

    for (VAR_19 = 0; VAR_19 < VAR_20; ++VAR_19)
    {
        if (!FUNC_24(&VAR_18[VAR_19], &VAR_16[VAR_19],
                VAR_10->extended))
        {
            FUNC_15(VAR_9->wined3d_device);
            FUNC_12(VAR_9->wined3d_device);
            FUNC_7(VAR_18);
            FUNC_22();
            return VAR_3;
        }
    }

    if (FUNC_1(VAR_22 = FUNC_14(VAR_9->wined3d_device, VAR_18)))
    {
        FUNC_4("Failed to initialize 3D, hr %#x.\n", VAR_22);
        FUNC_15(VAR_9->wined3d_device);
        FUNC_7(VAR_18);
        FUNC_12(VAR_9->wined3d_device);
        FUNC_22();
        return VAR_22;
    }

    FUNC_17(VAR_9->wined3d_device,
            VAR_6, !!VAR_18->enable_auto_depth_stencil);

    if (FUNC_1(VAR_22 = FUNC_5(VAR_9)))
    {
        FUNC_19(VAR_9->wined3d_device);
        FUNC_15(VAR_9->wined3d_device);
        FUNC_12(VAR_9->wined3d_device);
        FUNC_22();
        return VAR_5;
    }

    for (VAR_19 = 0; VAR_19 < VAR_20; ++VAR_19)
    {
        FUNC_8(&VAR_16[VAR_19], &VAR_18[VAR_19]);
    }

    FUNC_22();

    FUNC_7(VAR_18);



    if (!(VAR_9->fvf_decls = FUNC_6(0)))
    {
        FUNC_0("Failed to allocate FVF vertex declaration map memory.\n");
        FUNC_21();
        FUNC_7(VAR_9->implicit_swapchains);
        FUNC_19(VAR_9->wined3d_device);
        FUNC_15(VAR_9->wined3d_device);
        FUNC_12(VAR_9->wined3d_device);
        FUNC_22();
        return VAR_5;
    }




    FUNC_21();
    VAR_9->render_targets[0] = FUNC_23(
            FUNC_13(VAR_9->wined3d_device, 0));
    FUNC_22();

    FUNC_3(&VAR_10->IDirect3D9Ex_iface);
    VAR_9->d3d_parent = VAR_10;

    return VAR_4;
}

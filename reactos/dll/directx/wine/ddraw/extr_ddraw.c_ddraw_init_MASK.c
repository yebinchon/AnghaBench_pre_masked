
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
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_14__ {int * ops; } ;
struct TYPE_22__ {int * lpVtbl; } ;
struct TYPE_21__ {int * lpVtbl; } ;
struct TYPE_20__ {int * lpVtbl; } ;
struct TYPE_19__ {int * lpVtbl; } ;
struct TYPE_18__ {int * lpVtbl; } ;
struct TYPE_17__ {int * lpVtbl; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct ddraw {int numIfaces; int ref7; int surface_list; void* wined3d; int wined3d_device; TYPE_12__ device_parent; int flags; TYPE_8__ IDirect3D7_iface; TYPE_7__ IDirect3D3_iface; TYPE_6__ IDirect3D2_iface; TYPE_5__ IDirect3D_iface; TYPE_4__ IDirectDraw4_iface; TYPE_3__ IDirectDraw2_iface; TYPE_2__ IDirectDraw_iface; TYPE_1__ IDirectDraw7_iface; } ;
typedef enum wined3d_device_type { ____Placeholder_wined3d_device_type } wined3d_device_type ;
struct TYPE_23__ {int caps; } ;
struct TYPE_13__ {TYPE_9__ ddraw_caps; } ;
typedef TYPE_10__ WINED3DCAPS ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,int ,int,int *,int ,int ,TYPE_12__*,int *) ;
 int FUNC_7 (void*,int ,int,TYPE_10__*) ;

HRESULT FUNC_8(struct ddraw *VAR_17, DWORD VAR_18, enum wined3d_device_type VAR_19)
{
    WINED3DCAPS VAR_20;
    HRESULT VAR_21;

    VAR_17->IDirectDraw7_iface.lpVtbl = &VAR_15;
    VAR_17->IDirectDraw_iface.lpVtbl = &VAR_12;
    VAR_17->IDirectDraw2_iface.lpVtbl = &VAR_13;
    VAR_17->IDirectDraw4_iface.lpVtbl = &VAR_14;
    VAR_17->IDirect3D_iface.lpVtbl = &VAR_8;
    VAR_17->IDirect3D2_iface.lpVtbl = &VAR_9;
    VAR_17->IDirect3D3_iface.lpVtbl = &VAR_10;
    VAR_17->IDirect3D7_iface.lpVtbl = &VAR_11;
    VAR_17->device_parent.ops = &VAR_16;
    VAR_17->numIfaces = 1;
    VAR_17->ref7 = 1;

    VAR_18 |= VAR_2;
    if (!(VAR_17->wined3d = FUNC_4(VAR_18)))
    {
        VAR_18 |= VAR_6;
        if (!(VAR_17->wined3d = FUNC_4(VAR_18)))
        {
            FUNC_2("Failed to create a wined3d object.\n");
            return VAR_4;
        }
    }

    if (FUNC_1(VAR_21 = FUNC_7(VAR_17->wined3d, VAR_5, VAR_19, &VAR_20)))
    {
        FUNC_0("Failed to get device caps, hr %#x.\n", VAR_21);
        FUNC_5(VAR_17->wined3d);
        return VAR_4;
    }

    if (!(VAR_20.ddraw_caps.caps & VAR_7))
    {
        FUNC_2("Created a wined3d object without 3D support.\n");
        VAR_17->flags |= VAR_0;
    }

    if (FUNC_1(VAR_21 = FUNC_6(VAR_17->wined3d, VAR_5, VAR_19,
            ((void*)0), 0, VAR_1, &VAR_17->device_parent, &VAR_17->wined3d_device)))
    {
        FUNC_2("Failed to create a wined3d device, hr %#x.\n", VAR_21);
        FUNC_5(VAR_17->wined3d);
        return VAR_21;
    }

    FUNC_3(&VAR_17->surface_list);

    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct quartz_vmr {int hD3d9; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int refCount; TYPE_3__ IVMRImagePresenter9_iface; int reset; int * SurfaceAllocatorNotify; int ack; int * hWndThread; scalar_t__ num_surfaces; int * d3d9_vertex; scalar_t__ hMon; int * d3d9_dev; int * d3d9_surfaces; struct quartz_vmr* pVMR9; TYPE_1__ IVMRSurfaceAllocatorEx9_iface; int d3d9_ptr; } ;
typedef TYPE_2__ VMR9DefaultAllocatorPresenterImpl ;
typedef TYPE_3__* LPVOID ;
typedef scalar_t__ HRESULT ;
typedef int D3DDISPLAYMODE ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static HRESULT FUNC_9(struct quartz_vmr *VAR_9, LPVOID * VAR_10)
{
    HRESULT VAR_11 = VAR_5;
    int VAR_12;
    VMR9DefaultAllocatorPresenterImpl* VAR_13;

    VAR_13 = FUNC_0(sizeof(VMR9DefaultAllocatorPresenterImpl));
    if (!VAR_13)
        return VAR_3;

    VAR_13->d3d9_ptr = FUNC_8(VAR_9->hD3d9);
    if (!VAR_13->d3d9_ptr)
    {
        FUNC_7("Could not initialize d3d9.dll\n");
        FUNC_1(VAR_13);
        return VAR_6;
    }

    VAR_12 = 0;
    do
    {
        D3DDISPLAYMODE VAR_14;

        VAR_11 = FUNC_5(VAR_13->d3d9_ptr, VAR_12++, VAR_2, 0, &VAR_14);
 if (VAR_11 == VAR_0) break;
    } while (FUNC_4(VAR_11));
    if (FUNC_4(VAR_11))
        FUNC_3("HR: %08x\n", VAR_11);
    if (VAR_11 == VAR_1)
    {
        FUNC_3("Format not supported\n");
        FUNC_6(VAR_13->d3d9_ptr);
        FUNC_1(VAR_13);
        return VAR_6;
    }

    VAR_13->IVMRImagePresenter9_iface.lpVtbl = &VAR_7;
    VAR_13->IVMRSurfaceAllocatorEx9_iface.lpVtbl = &VAR_8;

    VAR_13->refCount = 1;
    VAR_13->pVMR9 = VAR_9;
    VAR_13->d3d9_surfaces = ((void*)0);
    VAR_13->d3d9_dev = ((void*)0);
    VAR_13->hMon = 0;
    VAR_13->d3d9_vertex = ((void*)0);
    VAR_13->num_surfaces = 0;
    VAR_13->hWndThread = ((void*)0);
    VAR_13->ack = FUNC_2(((void*)0), 0, 0, ((void*)0));
    VAR_13->SurfaceAllocatorNotify = ((void*)0);
    VAR_13->reset = VAR_4;

    *VAR_10 = &VAR_13->IVMRImagePresenter9_iface;
    return VAR_5;
}

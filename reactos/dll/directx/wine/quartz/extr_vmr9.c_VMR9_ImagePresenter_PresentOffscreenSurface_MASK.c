
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pVMR9; int d3d9_dev; } ;
typedef TYPE_3__ VMR9DefaultAllocatorPresenterImpl ;
struct TYPE_5__ {scalar_t__ left; scalar_t__ right; scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_6__ {int source_rect; TYPE_1__ target_rect; } ;
typedef int RECT ;
typedef int IDirect3DSurface9 ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int **) ;
 int FUNC_3 (int ,int *,int *,int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static HRESULT FUNC_6(VMR9DefaultAllocatorPresenterImpl *VAR_2, IDirect3DSurface9 *VAR_3)
{
    HRESULT VAR_4;
    IDirect3DSurface9 *VAR_5 = ((void*)0);
    RECT VAR_6;

    VAR_4 = FUNC_2(VAR_2->d3d9_dev, 0, 0, VAR_0, &VAR_5);
    if (FUNC_1(VAR_4))
    {
        FUNC_0("IDirect3DDevice9_GetBackBuffer -- %08x\n", VAR_4);
        return VAR_4;
    }


    FUNC_5(&VAR_6, 0, VAR_2->pVMR9->target_rect.bottom - VAR_2->pVMR9->target_rect.top,
            VAR_2->pVMR9->target_rect.right - VAR_2->pVMR9->target_rect.left, 0);

    VAR_4 = FUNC_3(VAR_2->d3d9_dev, VAR_3, &VAR_2->pVMR9->source_rect, VAR_5, &VAR_6, VAR_1);
    if (FUNC_1(VAR_4))
        FUNC_0("IDirect3DDevice9_StretchRect -- %08x\n", VAR_4);
    FUNC_4(VAR_5);

    return VAR_4;
}

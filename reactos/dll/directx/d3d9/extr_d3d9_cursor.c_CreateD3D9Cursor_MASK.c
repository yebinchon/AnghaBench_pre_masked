
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _Direct3DSwapChain9_INT {int dwWidth; int dwHeight; } ;
struct _Direct3DDevice9_INT {int dummy; } ;
struct TYPE_3__ {int dwWidth; int dwHeight; struct _Direct3DSwapChain9_INT* pSwapChain; struct _Direct3DDevice9_INT* pBaseDevice; } ;
typedef int LPVOID ;
typedef TYPE_1__ D3D9Cursor ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;

D3D9Cursor* FUNC_3(struct _Direct3DDevice9_INT* VAR_0, struct _Direct3DSwapChain9_INT* VAR_1)
{
    D3D9Cursor* VAR_2;

    if (FUNC_2(FUNC_0((LPVOID*)&VAR_2, sizeof(D3D9Cursor))))
    {
        FUNC_1("Failed to allocate D3D9Cursor");
        return ((void*)0);
    }

    VAR_2->pBaseDevice = VAR_0;
    VAR_2->pSwapChain = VAR_1;
    VAR_2->dwWidth = VAR_1->dwWidth / 2;
    VAR_2->dwHeight = VAR_1->dwHeight / 2;

    return VAR_2;
}

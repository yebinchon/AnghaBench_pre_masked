
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_2__ {int * lpVtbl; int Format; void* dwHeight; void* dwWidth; int Usage; int BaseTexture; } ;
typedef int LPVOID ;
typedef TYPE_1__* LPD3D9MIPMAP ;
typedef int IDirect3DTexture9 ;
typedef int IDirect3DBaseTexture9Vtbl ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int DIRECT3DDEVICE9_INT ;
typedef int D3DPOOL ;
typedef int D3DFORMAT ;
typedef int D3D9MipMap ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ,void*,int ,int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

HRESULT FUNC_4(DIRECT3DDEVICE9_INT* VAR_5, UINT VAR_6, UINT VAR_7, UINT VAR_8, DWORD VAR_9, D3DFORMAT VAR_10, D3DPOOL VAR_11, IDirect3DTexture9** VAR_12)
{
    LPD3D9MIPMAP VAR_13;
    if (FUNC_2(FUNC_0((LPVOID*)&VAR_13, sizeof(D3D9MipMap))))
    {
        FUNC_1("Could not create D3D9MipMap");
        return VAR_2;
    }

    FUNC_3(&VAR_13->BaseTexture, (IDirect3DBaseTexture9Vtbl*)&VAR_0, VAR_9, VAR_8, VAR_10, VAR_11, VAR_5, VAR_3);

    VAR_13->lpVtbl = &VAR_0;

    VAR_13->Usage = VAR_9;
    VAR_13->dwWidth = VAR_6;
    VAR_13->dwHeight = VAR_7;
    VAR_13->Format = VAR_10;

    *VAR_12 = (IDirect3DTexture9*)&VAR_13->lpVtbl;

    VAR_4;
    return VAR_1;
}

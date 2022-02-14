
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDirect3DSurface9 ;
typedef int IDirect3DCubeTexture9 ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int D3DCUBEMAP_FACES ;


 int FUNC_0 (int *,int *,int *,int *,int *,int *,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int **) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(IDirect3DCubeTexture9 *VAR_0,
        D3DCUBEMAP_FACES VAR_1, IDirect3DSurface9 *VAR_2, DWORD VAR_3)
{
    HRESULT VAR_4;
    IDirect3DSurface9 *VAR_5;

    FUNC_3(VAR_0, VAR_1, 0, &VAR_5);

    VAR_4 = FUNC_0(VAR_5, ((void*)0), ((void*)0), VAR_2, ((void*)0), ((void*)0), VAR_3, 0);
    if (FUNC_2(VAR_4)) FUNC_1("Copying render target data to surface failed %#x\n", VAR_4);

    FUNC_4(VAR_5);
}

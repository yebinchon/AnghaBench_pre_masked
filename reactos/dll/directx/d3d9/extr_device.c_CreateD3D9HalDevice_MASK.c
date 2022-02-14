
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IDirect3DDevice9 {int dummy; } ;
typedef int UINT ;
typedef int LPVOID ;
typedef int LPDIRECT3DDEVICE9_INT ;
typedef int LPDIRECT3D9_INT ;
typedef int HWND ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int D3DPRESENT_PARAMETERS ;
typedef int D3D9HALDEVICE ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int *,int ) ;

HRESULT FUNC_5(LPDIRECT3D9_INT VAR_3, UINT VAR_4,
                            HWND VAR_5, DWORD VAR_6,
                            D3DPRESENT_PARAMETERS* VAR_7,
                            DWORD VAR_8,
                            struct IDirect3DDevice9** VAR_9)
{
    HRESULT VAR_10;

    if (FUNC_3(FUNC_0((LPVOID *)VAR_9, sizeof(D3D9HALDEVICE))))
    {
        FUNC_2("Not enough memory to create HAL device");
        return VAR_2;
    }

    VAR_10 = FUNC_4((LPDIRECT3DDEVICE9_INT)*VAR_9, VAR_3, VAR_4,
                             VAR_0, VAR_5, VAR_6,
                             VAR_7, VAR_8);

    if (FUNC_3(VAR_10))
    {
        FUNC_1((LPVOID)*VAR_9);
        return VAR_10;
    }

    return VAR_1;
}

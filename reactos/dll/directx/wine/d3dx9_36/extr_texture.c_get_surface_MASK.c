
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IDirect3DSurface9 {int dummy; } ;
struct IDirect3DBaseTexture9 {int dummy; } ;
typedef int UINT ;
typedef int IDirect3DTexture9 ;
typedef int IDirect3DCubeTexture9 ;
typedef int HRESULT ;
typedef int D3DRESOURCETYPE ;




 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int ,struct IDirect3DSurface9**) ;
 int FUNC_2 (int *,int ,struct IDirect3DSurface9**) ;

__attribute__((used)) static HRESULT FUNC_3(D3DRESOURCETYPE VAR_1, struct IDirect3DBaseTexture9 *VAR_2,
        int VAR_3, UINT VAR_4, struct IDirect3DSurface9 **VAR_5)
{
    switch (VAR_1)
    {
        case 128:
            return FUNC_2((IDirect3DTexture9*) VAR_2, VAR_4, VAR_5);
        case 129:
            return FUNC_1((IDirect3DCubeTexture9*) VAR_2, VAR_3, VAR_4, VAR_5);
        default:
            FUNC_0("Unexpected texture type\n");
            return VAR_0;
    }
}

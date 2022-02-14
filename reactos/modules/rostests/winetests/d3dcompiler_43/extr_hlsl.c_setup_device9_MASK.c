
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDirect3DVertexShader9 ;
typedef int IDirect3DSurface9 ;
typedef int IDirect3DPixelShader9 ;
typedef int IDirect3DDevice9 ;
typedef scalar_t__ HRESULT ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,unsigned int,unsigned int,int ,int ,int **,int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int,unsigned int,int ,int ,int ,int ,int **,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(IDirect3DDevice9 *VAR_4, IDirect3DSurface9 **VAR_5,
        IDirect3DSurface9 **VAR_6, D3DFORMAT VAR_7, unsigned int VAR_8, unsigned int VAR_9,
        IDirect3DVertexShader9 *VAR_10, IDirect3DPixelShader9 *VAR_11)
{
    HRESULT VAR_12;
    VAR_12 = FUNC_1(VAR_4, VAR_8, VAR_9, VAR_7,
            VAR_0, 0, VAR_3, VAR_5, ((void*)0));
    FUNC_5(VAR_12 == VAR_2, "IDirect3DDevice9_CreateRenderTarget returned: %08x\n", VAR_12);



    VAR_12 = FUNC_0(VAR_4, VAR_8, VAR_9, VAR_7,
            VAR_1, VAR_6, ((void*)0));
    FUNC_5(VAR_12 == VAR_2, "IDirect3DDevice9_CreateOffscreenPlainSurface returned: %08x\n", VAR_12);

    VAR_12 = FUNC_3(VAR_4, 0, *VAR_5);
    FUNC_5(VAR_12 == VAR_2, "IDirect3DDevice9_SetRenderTarget returned: %08x\n", VAR_12);

    VAR_12 = FUNC_4(VAR_4, VAR_10);
    FUNC_5(VAR_12 == VAR_2, "IDirect3DDevice9_SetVertexShader returned: %08x\n", VAR_12);
    VAR_12 = FUNC_2(VAR_4, VAR_11);
    FUNC_5(VAR_12 == VAR_2, "IDirect3DDevice9_SetPixelShader returned: %08x\n", VAR_12);
}

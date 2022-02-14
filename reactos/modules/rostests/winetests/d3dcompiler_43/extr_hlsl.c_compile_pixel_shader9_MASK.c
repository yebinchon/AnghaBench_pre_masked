
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDirect3DPixelShader9 ;
typedef int IDirect3DDevice9 ;
typedef int ID3DXConstantTable ;
typedef int ID3D10Blob ;
typedef int HRESULT ;


 int FUNC_0 (scalar_t__,int **) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,int **) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char const*,int ,int *,int *,int *,char*,char const*,int ,int ,int **,int **) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static IDirect3DPixelShader9 *FUNC_9(IDirect3DDevice9 *VAR_1, const char *VAR_2,
        const char *VAR_3, ID3DXConstantTable **VAR_4)
{
    ID3D10Blob *VAR_5 = ((void*)0);
    ID3D10Blob *VAR_6 = ((void*)0);
    IDirect3DPixelShader9 *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_7(VAR_2, FUNC_8(VAR_2), ((void*)0), ((void*)0),
            ((void*)0), "test", VAR_3,
            0, 0, &VAR_5, &VAR_6);
    FUNC_6(VAR_8 == VAR_0, "Pixel shader %s compilation failed: %s\n", VAR_2,
            VAR_6 ? (char *)FUNC_2(VAR_6) : "");
    if (FUNC_1(VAR_8)) return ((void*)0);

    VAR_8 = FUNC_0(FUNC_2(VAR_5), VAR_4);
    FUNC_6(VAR_8 == VAR_0, "Could not get constant table from compiled pixel shader\n");

    VAR_8 = FUNC_4(VAR_1, FUNC_2(VAR_5), &VAR_7);
    FUNC_6(FUNC_5(VAR_8), "IDirect3DDevice9_CreatePixelShader returned: %08x\n", VAR_8);
    FUNC_3(VAR_5);
    return VAR_7;
}

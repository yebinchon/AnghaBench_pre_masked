
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PALETTEENTRY ;
typedef int IDirect3DSurface9 ;
typedef int IDirect3DBaseTexture9 ;
typedef int ID3DXBuffer ;
typedef int HRESULT ;
typedef scalar_t__ D3DRESOURCETYPE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int *,int ,int ,int **) ;
 int FUNC_6 (int **,int *,int *) ;

HRESULT FUNC_7(ID3DXBuffer **VAR_6, IDirect3DBaseTexture9 *VAR_7, const PALETTEENTRY *VAR_8)
{
    HRESULT VAR_9;
    D3DRESOURCETYPE VAR_10;
    UINT VAR_11;
    IDirect3DSurface9 *VAR_12;

    VAR_10 = FUNC_1(VAR_7);

    if ((VAR_10 != VAR_3) && (VAR_10 != VAR_2) && (VAR_10 != VAR_4))
        return VAR_1;

    if (VAR_10 == VAR_2)
    {
        FUNC_0("Cube texture not supported yet\n");
        return VAR_5;
    }
    else if (VAR_10 == VAR_4)
    {
        FUNC_0("Volume texture not supported yet\n");
        return VAR_5;
    }

    VAR_11 = FUNC_3(VAR_7);

    if (VAR_11 > 1)
    {
        FUNC_0("Mipmap not supported yet\n");
        return VAR_5;
    }

    if (VAR_8)
    {
        FUNC_0("Saving surfaces with palettized pixel formats not implemented yet\n");
        return VAR_5;
    }

    VAR_9 = FUNC_5(VAR_10, VAR_7, VAR_0, 0, &VAR_12);

    if (FUNC_4(VAR_9))
    {
        VAR_9 = FUNC_6(VAR_6, VAR_12, ((void*)0));
        FUNC_2(VAR_12);
    }

    return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dds_header {int caps2; } ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ ResourceType; scalar_t__ MipLevels; scalar_t__ Width; int Format; } ;
typedef int RECT ;
typedef int PALETTEENTRY ;
typedef int IDirect3DSurface9 ;
typedef int IDirect3DCubeTexture9 ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_1__ D3DXIMAGE_INFO ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int const*,int *,int const*,int ,scalar_t__,int *,int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int,scalar_t__,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (int,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;

HRESULT FUNC_10(IDirect3DCubeTexture9 *VAR_6, const void *VAR_7,
    const PALETTEENTRY *VAR_8, DWORD VAR_9, DWORD VAR_10, const D3DXIMAGE_INFO *VAR_11)
{
    HRESULT VAR_12;
    int VAR_13;
    UINT VAR_14;
    UINT VAR_15;
    RECT VAR_16;
    UINT VAR_17;
    UINT VAR_18;
    UINT VAR_19;
    IDirect3DSurface9 *VAR_20;
    const struct dds_header *VAR_21 = VAR_7;
    const BYTE *VAR_22 = (BYTE *)(VAR_21 + 1);

    if (VAR_11->ResourceType != VAR_2)
        return VAR_3;

    if ((VAR_21->caps2 & VAR_5) != VAR_5)
    {
        FUNC_6("Only full cubemaps are supported\n");
        return VAR_3;
    }

    VAR_18 = FUNC_9(VAR_11->MipLevels, FUNC_3(VAR_6));
    for (VAR_13 = VAR_1; VAR_13 <= VAR_0; VAR_13++)
    {
        VAR_15 = VAR_11->Width;
        for (VAR_14 = 0; VAR_14 < VAR_11->MipLevels; VAR_14++)
        {
            VAR_12 = FUNC_7(VAR_11->Format, VAR_15, VAR_15, &VAR_17, &VAR_19);
            if (FUNC_1(VAR_12)) return VAR_12;


            if (VAR_14 < VAR_18)
            {
                FUNC_5(&VAR_16, 0, 0, VAR_15, VAR_15);

                FUNC_2(VAR_6, VAR_13, VAR_14, &VAR_20);
                VAR_12 = FUNC_0(VAR_20, VAR_8, ((void*)0), VAR_22, VAR_11->Format, VAR_17,
                    ((void*)0), &VAR_16, VAR_9, VAR_10);
                FUNC_4(VAR_20);
                if (FUNC_1(VAR_12)) return VAR_12;
            }

            VAR_22 += VAR_19;
            VAR_15 = FUNC_8(1, VAR_15 / 2);
        }
    }

    return VAR_4;
}

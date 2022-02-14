
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dds_header {int dummy; } ;
typedef unsigned int UINT ;
struct TYPE_3__ {scalar_t__ ResourceType; unsigned int Width; unsigned int Height; int Format; int MipLevels; } ;
typedef int RECT ;
typedef int PALETTEENTRY ;
typedef int IDirect3DTexture9 ;
typedef int IDirect3DSurface9 ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_1__ D3DXIMAGE_INFO ;
typedef int D3DCOLOR ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int const*,int *,int const*,int ,unsigned int,int *,int *,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int,int **) ;
 int FUNC_5 (int *,int ,int ,unsigned int,unsigned int) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (int ,unsigned int,unsigned int,unsigned int*,unsigned int*) ;
 unsigned int FUNC_8 (int,unsigned int) ;
 unsigned int FUNC_9 (int ,int ) ;

HRESULT FUNC_10(IDirect3DTexture9 *VAR_5, const void *VAR_6, const PALETTEENTRY *VAR_7,
        DWORD VAR_8, D3DCOLOR VAR_9, const D3DXIMAGE_INFO *VAR_10, unsigned int VAR_11,
        unsigned int *VAR_12)
{
    HRESULT VAR_13;
    RECT VAR_14;
    UINT VAR_15;
    UINT VAR_16;
    UINT VAR_17;
    UINT VAR_18;
    UINT VAR_19, VAR_20;
    IDirect3DSurface9 *VAR_21;
    const struct dds_header *VAR_22 = VAR_6;
    const BYTE *VAR_23 = (BYTE *)(VAR_22 + 1);



    if ((VAR_10->ResourceType != VAR_1)
            && (VAR_10->ResourceType != VAR_0)
            && (VAR_10->ResourceType != VAR_2))
    {
        FUNC_6("Trying to load a %u resource as a 2D texture, returning failure.\n", VAR_10->ResourceType);
        return VAR_3;
    }

    VAR_19 = VAR_10->Width;
    VAR_20 = VAR_10->Height;
    VAR_17 = FUNC_9(VAR_10->MipLevels, FUNC_3(VAR_5));
    if (VAR_10->ResourceType == VAR_2)
        VAR_17 = 1;
    for (VAR_16 = 0; VAR_16 < VAR_17 + VAR_11; ++VAR_16)
    {
        VAR_13 = FUNC_7(VAR_10->Format, VAR_19, VAR_20, &VAR_15, &VAR_18);
        if (FUNC_1(VAR_13)) return VAR_13;

        if (VAR_16 >= VAR_11)
        {
            FUNC_5(&VAR_14, 0, 0, VAR_19, VAR_20);

            FUNC_4(VAR_5, VAR_16 - VAR_11, &VAR_21);
            VAR_13 = FUNC_0(VAR_21, VAR_7, ((void*)0), VAR_23, VAR_10->Format, VAR_15,
                    ((void*)0), &VAR_14, VAR_8, VAR_9);
            FUNC_2(VAR_21);
            if (FUNC_1(VAR_13))
                return VAR_13;
        }

        VAR_23 += VAR_18;
        VAR_19 = FUNC_8(1, VAR_19 / 2);
        VAR_20 = FUNC_8(1, VAR_20 / 2);
    }

    *VAR_12 = VAR_17 - VAR_11;

    return VAR_4;
}

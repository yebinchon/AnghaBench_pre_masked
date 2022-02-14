
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dds_header {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ Back; scalar_t__ Front; scalar_t__ Bottom; scalar_t__ Right; scalar_t__ Top; scalar_t__ Left; } ;
struct TYPE_5__ {scalar_t__ ResourceType; scalar_t__ Width; scalar_t__ Height; scalar_t__ Depth; int Format; int MipLevels; } ;
typedef int PALETTEENTRY ;
typedef int IDirect3DVolumeTexture9 ;
typedef int IDirect3DVolume9 ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_1__ D3DXIMAGE_INFO ;
typedef TYPE_2__ D3DBOX ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,int *,int const*,int ,scalar_t__,scalar_t__,int *,TYPE_2__*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,int **) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ) ;

HRESULT FUNC_8(IDirect3DVolumeTexture9 *VAR_3, const void *VAR_4,
    const PALETTEENTRY *VAR_5, DWORD VAR_6, DWORD VAR_7, const D3DXIMAGE_INFO *VAR_8)
{
    HRESULT VAR_9;
    UINT VAR_10;
    UINT VAR_11;
    UINT VAR_12;
    UINT VAR_13;
    D3DBOX VAR_14;
    UINT VAR_15, VAR_16, VAR_17;
    IDirect3DVolume9 *VAR_18;
    const struct dds_header *VAR_19 = VAR_4;
    const BYTE *VAR_20 = (BYTE *)(VAR_19 + 1);

    if (VAR_8->ResourceType != VAR_0)
        return VAR_1;

    VAR_15 = VAR_8->Width;
    VAR_16 = VAR_8->Height;
    VAR_17 = VAR_8->Depth;
    VAR_11 = FUNC_7(VAR_8->MipLevels, FUNC_3(VAR_3));

    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
    {
        VAR_9 = FUNC_5(VAR_8->Format, VAR_15, VAR_16, &VAR_13, &VAR_12);
        if (FUNC_1(VAR_9)) return VAR_9;

        VAR_9 = FUNC_4(VAR_3, VAR_10, &VAR_18);
        if (FUNC_1(VAR_9)) return VAR_9;

        VAR_14.Left = 0;
        VAR_14.Top = 0;
        VAR_14.Right = VAR_15;
        VAR_14.Bottom = VAR_16;
        VAR_14.Front = 0;
        VAR_14.Back = VAR_17;

        VAR_9 = FUNC_0(VAR_18, VAR_5, ((void*)0), VAR_20, VAR_8->Format,
            VAR_13, VAR_12, ((void*)0), &VAR_14, VAR_6, VAR_7);

        FUNC_2(VAR_18);
        if (FUNC_1(VAR_9)) return VAR_9;

        VAR_20 += VAR_17 * VAR_12;
        VAR_15 = FUNC_6(1, VAR_15 / 2);
        VAR_16 = FUNC_6(1, VAR_16 / 2);
        VAR_17 = FUNC_6(1, VAR_17 / 2);
    }

    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dds_header {int dummy; } ;
typedef int UINT ;
struct TYPE_3__ {scalar_t__ ResourceType; int Format; int Height; int Width; } ;
typedef int RECT ;
typedef int PALETTEENTRY ;
typedef int IDirect3DSurface9 ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_1__ D3DXIMAGE_INFO ;
typedef int D3DCOLOR ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,int const*,int const*,int ,int ,int *,int const*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_3(IDirect3DSurface9 *VAR_3, const PALETTEENTRY *VAR_4,
    const RECT *VAR_5, const void *VAR_6, const RECT *VAR_7, DWORD VAR_8, D3DCOLOR VAR_9,
    const D3DXIMAGE_INFO *VAR_10)
{
    UINT VAR_11;
    UINT VAR_12;
    const struct dds_header *VAR_13 = VAR_6;
    const BYTE *VAR_14 = (BYTE *)(VAR_13 + 1);

    if (VAR_10->ResourceType != VAR_0)
        return VAR_1;

    if (FUNC_1(FUNC_2(VAR_10->Format, VAR_10->Width, VAR_10->Height, &VAR_12, &VAR_11)))
        return VAR_2;

    return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_14, VAR_10->Format,
        VAR_12, ((void*)0), VAR_7, VAR_8, VAR_9);
}

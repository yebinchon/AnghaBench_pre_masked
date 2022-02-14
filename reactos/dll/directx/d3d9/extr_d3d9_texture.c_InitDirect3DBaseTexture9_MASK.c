
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _Direct3DDevice9_INT {int dummy; } ;
typedef enum REF_TYPE { ____Placeholder_REF_TYPE } REF_TYPE ;
typedef void* UINT ;
struct TYPE_3__ {int wPaletteIndex; int Usage; int bIsAutoGenMipMap; int FilterType; void* MipMapLevels2; void* MipMapLevels; int Format; int * lpVtbl; int BaseResource; } ;
typedef int IDirect3DBaseTexture9Vtbl ;
typedef TYPE_1__ Direct3DBaseTexture9_INT ;
typedef int DWORD ;
typedef int D3DPOOL ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct _Direct3DDevice9_INT*,int) ;

void FUNC_1(Direct3DBaseTexture9_INT* VAR_2,
                              IDirect3DBaseTexture9Vtbl* VAR_3,
                              DWORD VAR_4,
                              UINT VAR_5,
                              D3DFORMAT VAR_6,
                              D3DPOOL VAR_7,
                              struct _Direct3DDevice9_INT* VAR_8,
                              enum REF_TYPE VAR_9)
{
    FUNC_0(&VAR_2->BaseResource, VAR_7, VAR_8, VAR_9);

    VAR_2->lpVtbl = VAR_3;
    VAR_2->Format = VAR_6;
    VAR_2->wPaletteIndex = 0xFFFF;
    VAR_2->Usage = VAR_4;
    VAR_2->MipMapLevels = VAR_5;
    VAR_2->MipMapLevels2 = VAR_5;

    VAR_2->FilterType = VAR_0;
    VAR_2->bIsAutoGenMipMap = (VAR_4 & VAR_1) != 0;
}

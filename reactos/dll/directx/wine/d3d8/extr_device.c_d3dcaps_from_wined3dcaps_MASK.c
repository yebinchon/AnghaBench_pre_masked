
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int PixelShader1xMaxValue; void* PixelShaderVersion; int MaxVertexShaderConst; void* VertexShaderVersion; int MaxStreamStride; int MaxStreams; int MaxVertexIndex; int MaxPrimitiveCount; int MaxPointSize; int MaxVertexBlendMatrixIndex; int MaxVertexBlendMatrices; int MaxUserClipPlanes; int MaxActiveLights; int VertexProcessingCaps; int MaxSimultaneousTextures; int MaxTextureBlendStages; int TextureOpCaps; int FVFCaps; int StencilCaps; int ExtentsAdjust; int GuardBandBottom; int GuardBandRight; int GuardBandTop; int GuardBandLeft; int MaxVertexW; int MaxAnisotropy; int MaxTextureAspectRatio; int MaxTextureRepeat; int MaxVolumeExtent; int MaxTextureHeight; int MaxTextureWidth; int LineCaps; int VolumeTextureAddressCaps; int TextureAddressCaps; int VolumeTextureFilterCaps; int CubeTextureFilterCaps; int TextureFilterCaps; int TextureCaps; int ShadeCaps; int AlphaCmpCaps; int DestBlendCaps; int SrcBlendCaps; int ZCmpCaps; int RasterCaps; int PrimitiveMiscCaps; int DevCaps; int CursorCaps; int PresentationIntervals; int Caps3; int Caps2; int Caps; int AdapterOrdinal; scalar_t__ DeviceType; } ;
typedef TYPE_1__ WINED3DCAPS ;
struct TYPE_6__ {int StencilCaps; int MaxVertexShaderConst; void* VertexShaderVersion; void* PixelShaderVersion; int MaxPixelShaderValue; int MaxStreamStride; int MaxStreams; int MaxVertexIndex; int MaxPrimitiveCount; int MaxPointSize; int MaxVertexBlendMatrixIndex; int MaxVertexBlendMatrices; int MaxUserClipPlanes; int MaxActiveLights; int VertexProcessingCaps; int MaxSimultaneousTextures; int MaxTextureBlendStages; int TextureOpCaps; int FVFCaps; int ExtentsAdjust; int GuardBandBottom; int GuardBandRight; int GuardBandTop; int GuardBandLeft; int MaxVertexW; int MaxAnisotropy; int MaxTextureAspectRatio; int MaxTextureRepeat; int MaxVolumeExtent; int MaxTextureHeight; int MaxTextureWidth; int LineCaps; int VolumeTextureAddressCaps; int TextureAddressCaps; int VolumeTextureFilterCaps; int CubeTextureFilterCaps; int TextureFilterCaps; int TextureCaps; int ShadeCaps; int AlphaCmpCaps; int DestBlendCaps; int SrcBlendCaps; int ZCmpCaps; int RasterCaps; int PrimitiveMiscCaps; int DevCaps; int CursorCaps; int PresentationIntervals; int Caps3; int Caps2; int Caps; int AdapterOrdinal; scalar_t__ DeviceType; } ;
typedef scalar_t__ D3DDEVTYPE ;
typedef TYPE_2__ D3DCAPS8 ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(D3DCAPS8 *VAR_2, const WINED3DCAPS *VAR_3)
{
    VAR_2->DeviceType = (D3DDEVTYPE)VAR_3->DeviceType;
    VAR_2->AdapterOrdinal = VAR_3->AdapterOrdinal;
    VAR_2->Caps = VAR_3->Caps;
    VAR_2->Caps2 = VAR_3->Caps2;
    VAR_2->Caps3 = VAR_3->Caps3;
    VAR_2->PresentationIntervals = VAR_3->PresentationIntervals;
    VAR_2->CursorCaps = VAR_3->CursorCaps;
    VAR_2->DevCaps = VAR_3->DevCaps;
    VAR_2->PrimitiveMiscCaps = VAR_3->PrimitiveMiscCaps;
    VAR_2->RasterCaps = VAR_3->RasterCaps;
    VAR_2->ZCmpCaps = VAR_3->ZCmpCaps;
    VAR_2->SrcBlendCaps = VAR_3->SrcBlendCaps;
    VAR_2->DestBlendCaps = VAR_3->DestBlendCaps;
    VAR_2->AlphaCmpCaps = VAR_3->AlphaCmpCaps;
    VAR_2->ShadeCaps = VAR_3->ShadeCaps;
    VAR_2->TextureCaps = VAR_3->TextureCaps;
    VAR_2->TextureFilterCaps = VAR_3->TextureFilterCaps;
    VAR_2->CubeTextureFilterCaps = VAR_3->CubeTextureFilterCaps;
    VAR_2->VolumeTextureFilterCaps = VAR_3->VolumeTextureFilterCaps;
    VAR_2->TextureAddressCaps = VAR_3->TextureAddressCaps;
    VAR_2->VolumeTextureAddressCaps = VAR_3->VolumeTextureAddressCaps;
    VAR_2->LineCaps = VAR_3->LineCaps;
    VAR_2->MaxTextureWidth = VAR_3->MaxTextureWidth;
    VAR_2->MaxTextureHeight = VAR_3->MaxTextureHeight;
    VAR_2->MaxVolumeExtent = VAR_3->MaxVolumeExtent;
    VAR_2->MaxTextureRepeat = VAR_3->MaxTextureRepeat;
    VAR_2->MaxTextureAspectRatio = VAR_3->MaxTextureAspectRatio;
    VAR_2->MaxAnisotropy = VAR_3->MaxAnisotropy;
    VAR_2->MaxVertexW = VAR_3->MaxVertexW;
    VAR_2->GuardBandLeft = VAR_3->GuardBandLeft;
    VAR_2->GuardBandTop = VAR_3->GuardBandTop;
    VAR_2->GuardBandRight = VAR_3->GuardBandRight;
    VAR_2->GuardBandBottom = VAR_3->GuardBandBottom;
    VAR_2->ExtentsAdjust = VAR_3->ExtentsAdjust;
    VAR_2->StencilCaps = VAR_3->StencilCaps;
    VAR_2->FVFCaps = VAR_3->FVFCaps;
    VAR_2->TextureOpCaps = VAR_3->TextureOpCaps;
    VAR_2->MaxTextureBlendStages = VAR_3->MaxTextureBlendStages;
    VAR_2->MaxSimultaneousTextures = VAR_3->MaxSimultaneousTextures;
    VAR_2->VertexProcessingCaps = VAR_3->VertexProcessingCaps;
    VAR_2->MaxActiveLights = VAR_3->MaxActiveLights;
    VAR_2->MaxUserClipPlanes = VAR_3->MaxUserClipPlanes;
    VAR_2->MaxVertexBlendMatrices = VAR_3->MaxVertexBlendMatrices;
    VAR_2->MaxVertexBlendMatrixIndex = VAR_3->MaxVertexBlendMatrixIndex;
    VAR_2->MaxPointSize = VAR_3->MaxPointSize;
    VAR_2->MaxPrimitiveCount = VAR_3->MaxPrimitiveCount;
    VAR_2->MaxVertexIndex = VAR_3->MaxVertexIndex;
    VAR_2->MaxStreams = VAR_3->MaxStreams;
    VAR_2->MaxStreamStride = VAR_3->MaxStreamStride;
    VAR_2->VertexShaderVersion = VAR_3->VertexShaderVersion;
    VAR_2->MaxVertexShaderConst = VAR_3->MaxVertexShaderConst;
    VAR_2->PixelShaderVersion = VAR_3->PixelShaderVersion;
    VAR_2->MaxPixelShaderValue = VAR_3->PixelShader1xMaxValue;


    if (VAR_2->PixelShaderVersion)
        VAR_2->PixelShaderVersion = FUNC_0(1, 4);
    else
        VAR_2->PixelShaderVersion = FUNC_0(0, 0);
    if (VAR_2->VertexShaderVersion)
        VAR_2->VertexShaderVersion = FUNC_1(1, 1);
    else
        VAR_2->VertexShaderVersion = FUNC_1(0, 0);
    VAR_2->MaxVertexShaderConst = FUNC_2(VAR_0, VAR_2->MaxVertexShaderConst);

    VAR_2->StencilCaps &= ~VAR_1;
}

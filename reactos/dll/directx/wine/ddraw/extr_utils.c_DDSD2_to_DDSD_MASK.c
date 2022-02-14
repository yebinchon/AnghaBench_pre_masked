
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_29__ {int dwRefreshRate; int dwMipMapCount; } ;
struct TYPE_28__ {int dwRefreshRate; int dwMipMapCount; int dwZBufferBitDepth; } ;
struct TYPE_27__ {int ddckCKDestOverlay; } ;
struct TYPE_26__ {int dwBackBufferCount; } ;
struct TYPE_25__ {int dwCaps; } ;
struct TYPE_24__ {int dwCaps; } ;
struct TYPE_21__ {int dwZBufferBitDepth; } ;
struct TYPE_22__ {TYPE_1__ u1; } ;
struct TYPE_23__ {TYPE_2__ ddpfPixelFormat; } ;
struct TYPE_17__ {int dwLinearSize; int lPitch; } ;
struct TYPE_20__ {int dwSize; int dwFlags; TYPE_10__ u1; TYPE_8__ u2; int ddckCKSrcBlt; int ddckCKSrcOverlay; int ddckCKDestBlt; int ddckCKDestOverlay; int lpSurface; int dwAlphaBitDepth; int dwBackBufferCount; TYPE_4__ ddsCaps; TYPE_2__ ddpfPixelFormat; int dwHeight; int dwWidth; } ;
struct TYPE_18__ {int dwLinearSize; int lPitch; } ;
struct TYPE_19__ {int dwFlags; TYPE_11__ u1; TYPE_9__ u2; int ddckCKSrcBlt; int ddckCKSrcOverlay; int ddckCKDestBlt; TYPE_7__ u3; int lpSurface; int dwAlphaBitDepth; TYPE_6__ u5; TYPE_5__ ddsCaps; TYPE_3__ u4; int dwHeight; int dwWidth; } ;
typedef TYPE_12__ DDSURFACEDESC2 ;
typedef TYPE_13__ DDSURFACEDESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_13__*,int ,int) ;

void FUNC_2(const DDSURFACEDESC2 *VAR_19, DDSURFACEDESC *VAR_20)
{
    FUNC_1(VAR_20, 0, sizeof(*VAR_20));
    VAR_20->dwSize = sizeof(*VAR_20);
    VAR_20->dwFlags = VAR_19->dwFlags;
    if (VAR_19->dwFlags & VAR_17) VAR_20->dwWidth = VAR_19->dwWidth;
    if (VAR_19->dwFlags & VAR_9) VAR_20->dwHeight = VAR_19->dwHeight;
    if (VAR_19->dwFlags & VAR_13)
    {
        VAR_20->ddpfPixelFormat = VAR_19->u4.ddpfPixelFormat;
        if ((VAR_19->dwFlags & VAR_3) && (VAR_19->ddsCaps.dwCaps & VAR_0))
        {


            VAR_20->dwFlags &= ~VAR_13;
            VAR_20->dwFlags |= VAR_18;
            VAR_20->u2.dwZBufferBitDepth = VAR_19->u4.ddpfPixelFormat.u1.dwZBufferBitDepth;
        }
    }

    VAR_20->ddsCaps.dwCaps = VAR_19->ddsCaps.dwCaps;
    if (VAR_19->dwFlags & VAR_12) VAR_20->u1.lPitch = VAR_19->u1.lPitch;
    if (VAR_19->dwFlags & VAR_2) VAR_20->dwBackBufferCount = VAR_19->u5.dwBackBufferCount;
    if (VAR_19->dwFlags & VAR_18) VAR_20->u2.dwZBufferBitDepth = VAR_19->u2.dwMipMapCount;
    if (VAR_19->dwFlags & VAR_1) VAR_20->dwAlphaBitDepth = VAR_19->dwAlphaBitDepth;

    VAR_20->lpSurface = VAR_19->lpSurface;
    if (VAR_19->dwFlags & VAR_5) VAR_20->ddckCKDestOverlay = VAR_19->u3.ddckCKDestOverlay;
    if (VAR_19->dwFlags & VAR_4) VAR_20->ddckCKDestBlt = VAR_19->ddckCKDestBlt;
    if (VAR_19->dwFlags & VAR_7) VAR_20->ddckCKSrcOverlay = VAR_19->ddckCKSrcOverlay;
    if (VAR_19->dwFlags & VAR_6) VAR_20->ddckCKSrcBlt = VAR_19->ddckCKSrcBlt;
    if (VAR_19->dwFlags & VAR_11) VAR_20->u2.dwMipMapCount = VAR_19->u2.dwMipMapCount;
    if (VAR_19->dwFlags & VAR_14) VAR_20->u2.dwRefreshRate = VAR_19->u2.dwRefreshRate;
    if (VAR_19->dwFlags & VAR_10) VAR_20->u1.dwLinearSize = VAR_19->u1.dwLinearSize;



    if (VAR_19->dwFlags & VAR_16) FUNC_0("Does not exist in DDSURFACEDESC: DDSD_TEXTURESTAGE\n");
    if (VAR_19->dwFlags & VAR_8) FUNC_0("Does not exist in DDSURFACEDESC: DDSD_FVF\n");
    if (VAR_19->dwFlags & VAR_15) FUNC_0("Does not exist in DDSURFACEDESC: DDSD_SRCVBHANDLE\n");
    VAR_20->dwFlags &= ~(VAR_16 | VAR_8 | VAR_15);
}

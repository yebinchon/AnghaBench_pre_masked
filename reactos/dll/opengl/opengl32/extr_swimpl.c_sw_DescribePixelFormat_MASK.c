
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pixel_format {int cDepthBits; int cAccumAlphaBits; int cAccumBlueBits; int cAccumGreenBits; int cAccumRedBits; int cAccumBits; int cAlphaShift; int cAlphaBits; int cBlueShift; int cBlueBits; int cGreenShift; int cGreenBits; int cRedShift; int cRedBits; int cColorBits; int iPixelType; int dwFlags; } ;
typedef int UINT ;
struct TYPE_3__ {int nSize; int nVersion; scalar_t__ dwDamageMask; scalar_t__ dwVisibleMask; scalar_t__ dwLayerMask; scalar_t__ bReserved; int iLayerType; scalar_t__ cAuxBuffers; int cStencilBits; int cDepthBits; int cAccumAlphaBits; int cAccumBlueBits; int cAccumGreenBits; int cAccumRedBits; int cAccumBits; int cAlphaShift; int cAlphaBits; int cBlueShift; int cBlueBits; int cGreenShift; int cGreenBits; int cRedShift; int cRedBits; int cColorBits; int iPixelType; int dwFlags; } ;
typedef TYPE_1__ PIXELFORMATDESCRIPTOR ;
typedef scalar_t__ INT ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 struct pixel_format* FUNC_1 (scalar_t__,scalar_t__*) ;

INT FUNC_2(HDC VAR_2, INT VAR_3, UINT VAR_4, PIXELFORMATDESCRIPTOR* VAR_5)
{
    INT VAR_6;
    const struct pixel_format *VAR_7;

    FUNC_0("Describing format %i.\n", VAR_3);

    VAR_7 = FUNC_1(VAR_3, &VAR_6);
    if(!VAR_5)
        return VAR_6;
    if((VAR_3 > VAR_6) || (VAR_4 != sizeof(*VAR_5)))
        return 0;


    VAR_5->nSize = sizeof(*VAR_5);
    VAR_5->nVersion = 1;
    VAR_5->dwFlags = VAR_7->dwFlags;
    VAR_5->iPixelType = VAR_7->iPixelType;
    VAR_5->cColorBits = VAR_7->cColorBits;
    VAR_5->cRedBits = VAR_7->cRedBits;
    VAR_5->cRedShift = VAR_7->cRedShift;
    VAR_5->cGreenBits = VAR_7->cGreenBits;
    VAR_5->cGreenShift = VAR_7->cGreenShift;
    VAR_5->cBlueBits = VAR_7->cBlueBits;
    VAR_5->cBlueShift = VAR_7->cBlueShift;
    VAR_5->cAlphaBits = VAR_7->cAlphaBits;
    VAR_5->cAlphaShift = VAR_7->cAlphaShift;
    VAR_5->cAccumBits = VAR_7->cAccumBits;
    VAR_5->cAccumRedBits = VAR_7->cAccumRedBits;
    VAR_5->cAccumGreenBits = VAR_7->cAccumGreenBits;
    VAR_5->cAccumBlueBits = VAR_7->cAccumBlueBits;
    VAR_5->cAccumAlphaBits = VAR_7->cAccumAlphaBits;
    VAR_5->cDepthBits = VAR_7->cDepthBits;
    VAR_5->cStencilBits = VAR_1;
    VAR_5->cAuxBuffers = 0;
    VAR_5->iLayerType = VAR_0;
    VAR_5->bReserved = 0;
    VAR_5->dwLayerMask = 0;
    VAR_5->dwVisibleMask = 0;
    VAR_5->dwDamageMask = 0;

    return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int dwBumpLuminanceBitMask; int dwBBitMask; } ;
struct TYPE_11__ {int dwBumpDvBitMask; int dwGBitMask; } ;
struct TYPE_10__ {int dwBumpDuBitMask; int dwRBitMask; } ;
struct TYPE_9__ {int dwBumpBitCount; int dwAlphaBitDepth; int dwZBufferBitDepth; int dwRGBBitCount; int dwYUVBitCount; } ;
struct TYPE_8__ {int dwRGBZBitMask; int dwRGBAlphaBitMask; } ;
struct TYPE_13__ {int dwFlags; int dwFourCC; TYPE_5__ u4; TYPE_4__ u3; TYPE_3__ u2; TYPE_2__ u1; TYPE_1__ u5; } ;
typedef TYPE_6__ DDPIXELFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const DDPIXELFORMAT *VAR_7)
{
    FUNC_1("( ");
    FUNC_0(VAR_7->dwFlags);
    if (VAR_7->dwFlags & VAR_3)
        FUNC_1(", dwFourCC code '%c%c%c%c' (0x%08x) - %u bits per pixel",
                (unsigned char)( VAR_7->dwFourCC &0xff),
                (unsigned char)((VAR_7->dwFourCC>> 8)&0xff),
                (unsigned char)((VAR_7->dwFourCC>>16)&0xff),
                (unsigned char)((VAR_7->dwFourCC>>24)&0xff),
                VAR_7->dwFourCC,
                VAR_7->u1.dwYUVBitCount);
    if (VAR_7->dwFlags & VAR_4)
    {
        FUNC_1(", RGB bits: %u, R 0x%08x G 0x%08x B 0x%08x",
                VAR_7->u1.dwRGBBitCount,
                VAR_7->u2.dwRBitMask,
                VAR_7->u3.dwGBitMask,
                VAR_7->u4.dwBBitMask);
        if (VAR_7->dwFlags & VAR_1)
            FUNC_1(" A 0x%08x", VAR_7->u5.dwRGBAlphaBitMask);
        if (VAR_7->dwFlags & VAR_6)
            FUNC_1(" Z 0x%08x", VAR_7->u5.dwRGBZBitMask);
    }
    if (VAR_7->dwFlags & VAR_5)
        FUNC_1(", Z bits: %u", VAR_7->u1.dwZBufferBitDepth);
    if (VAR_7->dwFlags & VAR_0)
        FUNC_1(", Alpha bits: %u", VAR_7->u1.dwAlphaBitDepth);
    if (VAR_7->dwFlags & VAR_2)
        FUNC_1(", Bump bits: %u, U 0x%08x V 0x%08x L 0x%08x",
                VAR_7->u1.dwBumpBitCount,
                VAR_7->u2.dwBumpDuBitMask,
                VAR_7->u3.dwBumpDvBitMask,
                VAR_7->u4.dwBumpLuminanceBitMask);
    FUNC_1(")\n");
}

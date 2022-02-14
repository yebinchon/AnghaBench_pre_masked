
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;
struct TYPE_13__ {int dwBBitMask; int dwBumpLuminanceBitMask; } ;
struct TYPE_12__ {int dwGBitMask; int dwZBitMask; int dwBumpDvBitMask; } ;
struct TYPE_11__ {int dwRBitMask; int dwStencilBitDepth; int dwBumpDuBitMask; } ;
struct TYPE_10__ {int dwRGBBitCount; int dwAlphaBitDepth; int dwLuminanceBitCount; int dwZBufferBitDepth; int dwBumpBitCount; } ;
struct TYPE_9__ {int dwRGBAlphaBitMask; } ;
struct TYPE_14__ {int dwFlags; int dwFourCC; TYPE_5__ u4; TYPE_4__ u3; TYPE_3__ u2; TYPE_2__ u1; TYPE_1__ u5; } ;
typedef TYPE_6__ DDPIXELFORMAT ;


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
 int FUNC_0 (TYPE_6__ const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;

enum wined3d_format_id FUNC_5(const DDPIXELFORMAT *VAR_38)
{
    FUNC_2("Convert a DirectDraw Pixelformat to a WineD3D Pixelformat\n");
    if(FUNC_3(VAR_37))
    {
        FUNC_0(VAR_38);
    }

    if(VAR_38->dwFlags & VAR_8)
    {
        return VAR_29;
    }
    else if(VAR_38->dwFlags & (VAR_5 | VAR_6 | VAR_7) )
    {
        FUNC_1("DDPF_PALETTEINDEXED1 to DDPF_PALETTEINDEXED4 are not supported by WineD3D (yet). Returning WINED3DFMT_P8\n");
        return VAR_29;
    }
    else if(VAR_38->dwFlags & VAR_9)
    {
        switch(VAR_38->u1.dwRGBBitCount)
        {
            case 8:

                return VAR_14;

            case 16:

                if( (VAR_38->u2.dwRBitMask == 0xF800) &&
                    (VAR_38->u3.dwGBitMask == 0x07E0) &&
                    (VAR_38->u4.dwBBitMask == 0x001F) )
                {
                    return VAR_19;
                }

                if( (VAR_38->u2.dwRBitMask == 0x7C00) &&
                    (VAR_38->u3.dwGBitMask == 0x03E0) &&
                    (VAR_38->u4.dwBBitMask == 0x001F) )
                {
                    if( (VAR_38->dwFlags & VAR_1) &&
                        (VAR_38->u5.dwRGBAlphaBitMask == 0x8000))
                        return VAR_17;
                    else
                        return VAR_18;
                }

                if( (VAR_38->u2.dwRBitMask == 0x0F00) &&
                    (VAR_38->u3.dwGBitMask == 0x00F0) &&
                    (VAR_38->u4.dwBBitMask == 0x000F) )
                {
                    if( (VAR_38->dwFlags & VAR_1) &&
                        (VAR_38->u5.dwRGBAlphaBitMask == 0xF000))
                        return VAR_15;
                    else
                        return VAR_16;
                }

                if( (VAR_38->dwFlags & VAR_1) &&
                    (VAR_38->u5.dwRGBAlphaBitMask == 0xFF00) &&
                    (VAR_38->u2.dwRBitMask == 0x00E0) &&
                    (VAR_38->u3.dwGBitMask == 0x001C) &&
                    (VAR_38->u4.dwBBitMask == 0x0003) )
                {
                    return VAR_13;
                }
                FUNC_4("16 bit RGB Pixel format does not match.\n");
                return VAR_35;

            case 24:
                return VAR_22;

            case 32:

                if( (VAR_38->u2.dwRBitMask == 0x00FF0000) &&
                    (VAR_38->u3.dwGBitMask == 0x0000FF00) &&
                    (VAR_38->u4.dwBBitMask == 0x000000FF) )
                {
                    if( (VAR_38->dwFlags & VAR_1) &&
                        (VAR_38->u5.dwRGBAlphaBitMask == 0xFF000000))
                        return VAR_20;
                    else
                        return VAR_21;

                }
                FUNC_4("32 bit RGB pixel format does not match.\n");
                return VAR_35;

            default:
                FUNC_4("Invalid dwRGBBitCount in Pixelformat structure.\n");
                return VAR_35;
        }
    }
    else if( (VAR_38->dwFlags & VAR_0) )
    {

        switch(VAR_38->u1.dwAlphaBitDepth)
        {
            case 8:
                return VAR_12;

            default:
                FUNC_4("Invalid AlphaBitDepth in Alpha-Only Pixelformat.\n");
                return VAR_35;
        }
    }
    else if(VAR_38->dwFlags & VAR_4)
    {

        if(VAR_38->dwFlags & VAR_1)
        {

            switch(VAR_38->u1.dwLuminanceBitCount)
            {
                case 4:
                    if(VAR_38->u1.dwAlphaBitDepth == 4)
                        return VAR_26;
                    FUNC_4("Unknown Alpha / Luminance bit depth combination.\n");
                    return VAR_35;

                case 6:
                    FUNC_1("A luminance Pixelformat shouldn't have 6 luminance bits. Returning D3DFMT_L6V5U5 for now.\n");
                    return VAR_30;

                case 8:
                    if(VAR_38->u1.dwAlphaBitDepth == 8)
                        return VAR_27;
                    FUNC_4("Unknown Alpha / Lumincase bit depth combination.\n");
                    return VAR_35;
            }
        }
        else
        {

            switch(VAR_38->u1.dwLuminanceBitCount)
            {
                case 6:
                    FUNC_1("A luminance Pixelformat shouldn't have 6 luminance bits. Returning D3DFMT_L6V5U5 for now.\n");
                    return VAR_30;

                case 8:
                    return VAR_28;

                default:
                    FUNC_4("Unknown luminance-only bit depth 0x%x.\n", VAR_38->u1.dwLuminanceBitCount);
                    return VAR_35;
             }
        }
    }
    else if(VAR_38->dwFlags & VAR_11)
    {

        if(VAR_38->dwFlags & VAR_10)
        {
            switch(VAR_38->u1.dwZBufferBitDepth)
            {
                case 16:
                    if (VAR_38->u2.dwStencilBitDepth == 1) return VAR_33;
                    FUNC_4("Unknown depth stencil format: 16 z bits, %u stencil bits.\n",
                            VAR_38->u2.dwStencilBitDepth);
                    return VAR_35;

                case 32:
                    if (VAR_38->u2.dwStencilBitDepth == 8) return VAR_24;
                    else if (VAR_38->u2.dwStencilBitDepth == 4) return VAR_34;
                    FUNC_4("Unknown depth stencil format: 32 z bits, %u stencil bits.\n",
                            VAR_38->u2.dwStencilBitDepth);
                    return VAR_35;

                default:
                    FUNC_4("Unknown depth stencil format: %u z bits, %u stencil bits.\n",
                            VAR_38->u1.dwZBufferBitDepth, VAR_38->u2.dwStencilBitDepth);
                    return VAR_35;
            }
        }
        else
        {
            switch(VAR_38->u1.dwZBufferBitDepth)
            {
                case 16:
                    return VAR_23;

                case 24:
                    return VAR_36;

                case 32:
                    if (VAR_38->u3.dwZBitMask == 0x00FFFFFF) return VAR_36;
                    else if (VAR_38->u3.dwZBitMask == 0xFFFFFF00) return VAR_36;
                    else if (VAR_38->u3.dwZBitMask == 0xFFFFFFFF) return VAR_25;
                    FUNC_4("Unknown depth-only format: 32 z bits, mask 0x%08x\n",
                            VAR_38->u3.dwZBitMask);
                    return VAR_35;

                default:
                    FUNC_4("Unknown depth-only format: %u z bits, mask 0x%08x\n",
                            VAR_38->u1.dwZBufferBitDepth, VAR_38->u3.dwZBitMask);
                    return VAR_35;
            }
        }
    }
    else if(VAR_38->dwFlags & VAR_3)
    {
        return VAR_38->dwFourCC;
    }
    else if(VAR_38->dwFlags & VAR_2)
    {
        if( (VAR_38->u1.dwBumpBitCount == 16 ) &&
            (VAR_38->u2.dwBumpDuBitMask == 0x000000ff) &&
            (VAR_38->u3.dwBumpDvBitMask == 0x0000ff00) &&
            (VAR_38->u4.dwBumpLuminanceBitMask == 0x00000000) )
        {
            return VAR_31;
        }
        else if ( (VAR_38->u1.dwBumpBitCount == 16 ) &&
                  (VAR_38->u2.dwBumpDuBitMask == 0x0000001f) &&
                  (VAR_38->u3.dwBumpDvBitMask == 0x000003e0) &&
                  (VAR_38->u4.dwBumpLuminanceBitMask == 0x0000fc00) )
        {
            return VAR_30;
        }
        else if ( (VAR_38->u1.dwBumpBitCount == 32 ) &&
                  (VAR_38->u2.dwBumpDuBitMask == 0x000000ff) &&
                  (VAR_38->u3.dwBumpDvBitMask == 0x0000ff00) &&
                  (VAR_38->u4.dwBumpLuminanceBitMask == 0x00ff0000) )
        {
            return VAR_32;
        }
    }

    FUNC_4("Unknown Pixelformat.\n");
    return VAR_35;
}

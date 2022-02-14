
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bih ;
typedef int bfh ;
typedef int WICPixelFormatGUID ;
struct TYPE_4__ {int bfType; int bfReserved1; int bfReserved2; int bfOffBits; int bV5Width; int bV5Height; int bV5Planes; int bV5BitCount; int bV5ClrUsed; int bV5ClrImportant; } ;
typedef int IStream ;
typedef int HRESULT ;
typedef TYPE_1__ BITMAPV5HEADER ;
typedef TYPE_1__ BITMAPFILEHEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 int VAR_4 ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static void FUNC_4(IStream *VAR_5, const WICPixelFormatGUID *VAR_6)
{
    HRESULT VAR_7;
    BITMAPFILEHEADER VAR_8;
    BITMAPV5HEADER VAR_9;

    VAR_7 = FUNC_0(VAR_5, &VAR_8, sizeof(VAR_8), ((void*)0));
    FUNC_2(VAR_7 == VAR_4, "IStream_Read error %#x\n", VAR_7);

    FUNC_2(VAR_8.bfType == 0x4d42, "wrong BMP signature %02x\n", VAR_8.bfType);
    FUNC_2(VAR_8.bfReserved1 == 0, "wrong bfReserved1 %02x\n", VAR_8.bfReserved1);
    FUNC_2(VAR_8.bfReserved2 == 0, "wrong bfReserved2 %02x\n", VAR_8.bfReserved2);

    VAR_7 = FUNC_0(VAR_5, &VAR_9, sizeof(VAR_9), ((void*)0));
    FUNC_2(VAR_7 == VAR_4, "IStream_Read error %#x\n", VAR_7);

    if (FUNC_1(VAR_6, &VAR_0))
    {
        FUNC_2(VAR_8.bfOffBits == 0x0436, "wrong bfOffBits %08x\n", VAR_8.bfOffBits);

        FUNC_2(VAR_9.bV5Width == 32, "wrong width %u\n", VAR_9.bV5Width);
        FUNC_2(VAR_9.bV5Height == 2, "wrong height %u\n", VAR_9.bV5Height);

        FUNC_2(VAR_9.bV5Planes == 1, "wrong Planes %d\n", VAR_9.bV5Planes);
        FUNC_2(VAR_9.bV5BitCount == 1, "wrong BitCount %d\n", VAR_9.bV5BitCount);
        FUNC_2(VAR_9.bV5ClrUsed == 256, "wrong ClrUsed %d\n", VAR_9.bV5ClrUsed);
        FUNC_2(VAR_9.bV5ClrImportant == 256, "wrong ClrImportant %d\n", VAR_9.bV5ClrImportant);
    }
    else if (FUNC_1(VAR_6, &VAR_2))
    {
        FUNC_2(VAR_8.bfOffBits == 0x0436, "wrong bfOffBits %08x\n", VAR_8.bfOffBits);

        FUNC_2(VAR_9.bV5Width == 32, "wrong width %u\n", VAR_9.bV5Width);
        FUNC_2(VAR_9.bV5Height == 2, "wrong height %u\n", VAR_9.bV5Height);

        FUNC_2(VAR_9.bV5Planes == 1, "wrong Planes %d\n", VAR_9.bV5Planes);
        FUNC_2(VAR_9.bV5BitCount == 4, "wrong BitCount %d\n", VAR_9.bV5BitCount);
        FUNC_2(VAR_9.bV5ClrUsed == 256, "wrong ClrUsed %d\n", VAR_9.bV5ClrUsed);
        FUNC_2(VAR_9.bV5ClrImportant == 256, "wrong ClrImportant %d\n", VAR_9.bV5ClrImportant);
    }
    else if (FUNC_1(VAR_6, &VAR_3))
    {
        FUNC_2(VAR_8.bfOffBits == 0x0436, "wrong bfOffBits %08x\n", VAR_8.bfOffBits);

        FUNC_2(VAR_9.bV5Width == 32, "wrong width %u\n", VAR_9.bV5Width);
        FUNC_2(VAR_9.bV5Height == 2, "wrong height %u\n", VAR_9.bV5Height);

        FUNC_2(VAR_9.bV5Planes == 1, "wrong Planes %d\n", VAR_9.bV5Planes);
        FUNC_2(VAR_9.bV5BitCount == 8, "wrong BitCount %d\n", VAR_9.bV5BitCount);
        FUNC_2(VAR_9.bV5ClrUsed == 256, "wrong ClrUsed %d\n", VAR_9.bV5ClrUsed);
        FUNC_2(VAR_9.bV5ClrImportant == 256, "wrong ClrImportant %d\n", VAR_9.bV5ClrImportant);
    }
    else if (FUNC_1(VAR_6, &VAR_1))
    {
        FUNC_2(VAR_8.bfOffBits == 0x0036, "wrong bfOffBits %08x\n", VAR_8.bfOffBits);

        FUNC_2(VAR_9.bV5Width == 32, "wrong width %u\n", VAR_9.bV5Width);
        FUNC_2(VAR_9.bV5Height == 2, "wrong height %u\n", VAR_9.bV5Height);

        FUNC_2(VAR_9.bV5Planes == 1, "wrong Planes %d\n", VAR_9.bV5Planes);
        FUNC_2(VAR_9.bV5BitCount == 32, "wrong BitCount %d\n", VAR_9.bV5BitCount);
        FUNC_2(VAR_9.bV5ClrUsed == 0, "wrong ClrUsed %d\n", VAR_9.bV5ClrUsed);
        FUNC_2(VAR_9.bV5ClrImportant == 0, "wrong ClrImportant %d\n", VAR_9.bV5ClrImportant);
    }
    else
        FUNC_2(0, "unknown BMP pixel format %s\n", FUNC_3(VAR_6));
}

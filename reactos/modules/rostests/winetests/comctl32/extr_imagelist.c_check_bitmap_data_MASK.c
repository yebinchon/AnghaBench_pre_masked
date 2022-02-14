
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {char bfType; int bfSize; int bfOffBits; int bfReserved2; int bfReserved1; } ;
struct TYPE_6__ {int biBitCount; int biSize; int biPlanes; int biHeight; int biSizeImage; int biWidth; } ;
struct TYPE_5__ {int cy; int cx; } ;
typedef TYPE_1__ SIZE ;
typedef int RGBQUAD ;
typedef int INT ;
typedef int ILHEAD ;
typedef int FILE ;
typedef TYPE_2__ BITMAPINFOHEADER ;
typedef TYPE_3__ BITMAPFILEHEADER ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*,int,int,int *) ;
 int FUNC_4 (int,char*,char,...) ;
 int FUNC_5 (char*,char*,char const*) ;

__attribute__((used)) static ULONG FUNC_6(const ILHEAD *VAR_0, const char *VAR_1,
    ULONG VAR_2, const SIZE *VAR_3, INT VAR_4, const char *VAR_5)
{
    const BITMAPFILEHEADER *VAR_6 = (const BITMAPFILEHEADER *)VAR_1;
    const BITMAPINFOHEADER *VAR_7 = (const BITMAPINFOHEADER *)(VAR_1 + sizeof(*VAR_6));
    ULONG VAR_8, VAR_9;

    VAR_8 = sizeof(*VAR_6) + sizeof(*VAR_7);
    if (VAR_7->biBitCount <= 8) VAR_8 += (1 << VAR_4) * sizeof(RGBQUAD);

    FUNC_4(VAR_6->bfType == (('M' << 8) | 'B'), "wrong bfType 0x%02x\n", VAR_6->bfType);
    FUNC_4(VAR_6->bfSize == VAR_8, "wrong bfSize 0x%02x\n", VAR_6->bfSize);
    FUNC_4(VAR_6->bfReserved1 == 0, "wrong bfReserved1 0x%02x\n", VAR_6->bfReserved1);
    FUNC_4(VAR_6->bfReserved2 == 0, "wrong bfReserved2 0x%02x\n", VAR_6->bfReserved2);
    FUNC_4(VAR_6->bfOffBits == VAR_8, "wrong bfOffBits 0x%02x\n", VAR_6->bfOffBits);

    FUNC_4(VAR_7->biSize == sizeof(*VAR_7), "wrong biSize %d\n", VAR_7->biSize);
    FUNC_4(VAR_7->biPlanes == 1, "wrong biPlanes %d\n", VAR_7->biPlanes);
    FUNC_4(VAR_7->biBitCount == VAR_4, "wrong biBitCount %d\n", VAR_7->biBitCount);

    VAR_9 = FUNC_0(VAR_7->biWidth, VAR_7->biBitCount) * VAR_7->biHeight;
    FUNC_4(VAR_7->biSizeImage == VAR_9, "wrong biSizeImage %u\n", VAR_7->biSizeImage);
    FUNC_4(VAR_7->biWidth == VAR_3->cx && VAR_7->biHeight == VAR_3->cy, "Unexpected bitmap size %d x %d, "
            "expected %d x %d\n", VAR_7->biWidth, VAR_7->biHeight, VAR_3->cx, VAR_3->cy);

if (0)
{
    char VAR_10[256];
    FILE *VAR_11;
    FUNC_5(VAR_10, "bmp_%s.bmp", VAR_5);
    VAR_11 = FUNC_2(VAR_10, "wb");
    FUNC_3(VAR_1, 1, VAR_2, VAR_11);
    FUNC_1(VAR_11);
}

    return VAR_8 + VAR_9;
}

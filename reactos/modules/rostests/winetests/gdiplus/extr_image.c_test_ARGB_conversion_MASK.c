
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int rgb32_xp ;
typedef int rgb24 ;
typedef int pargb ;
typedef int argb ;
struct TYPE_4__ {int Width; int Height; int Stride; int* Scan0; int PixelFormat; } ;
typedef int GpStatus ;
typedef int GpImage ;
typedef int GpBitmap ;
typedef TYPE_1__ BitmapData ;
typedef int BYTE ;


 int FUNC_0 (int *,int *,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int,int,int,int ,int*,int **) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*,int ,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_8(void)
{
    BYTE VAR_6[8] = { 0x11,0x22,0x33,0x80, 0xff,0xff,0xff,0 };
    BYTE VAR_7[8] = { 0x09,0x11,0x1a,0x80, 0,0,0,0 };
    BYTE VAR_8[8] = { 0x11,0x22,0x33,0xff, 0xff,0xff,0xff,0xff };
    BYTE VAR_9[6] = { 0x11,0x22,0x33, 0xff,0xff,0xff };
    BYTE *VAR_10;
    GpBitmap *VAR_11;
    BitmapData VAR_12;
    GpStatus VAR_13;
    int VAR_14;

    VAR_13 = FUNC_2(2, 1, 8, VAR_3, VAR_6, &VAR_11);
    FUNC_4(VAR_1, VAR_13);

    VAR_13 = FUNC_0(VAR_11, ((void*)0), VAR_0, VAR_4, &VAR_12);
    FUNC_4(VAR_1, VAR_13);
    FUNC_6(VAR_12.Width == 2, "expected 2, got %d\n", VAR_12.Width);
    FUNC_6(VAR_12.Height == 1, "expected 1, got %d\n", VAR_12.Height);
    FUNC_6(VAR_12.Stride == 8, "expected 8, got %d\n", VAR_12.Stride);
    FUNC_6(VAR_12.PixelFormat == VAR_4, "expected PixelFormat32bppPARGB, got %d\n", VAR_12.PixelFormat);
    VAR_14 = !FUNC_5(VAR_12.Scan0, VAR_7, sizeof(VAR_7));
    FUNC_6(VAR_14, "bits don't match\n");
    if (!VAR_14)
    {
        VAR_10 = VAR_12.Scan0;
        FUNC_7("format %#x, bits %02x,%02x,%02x,%02x %02x,%02x,%02x,%02x\n", VAR_4,
               VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3], VAR_10[4], VAR_10[5], VAR_10[6], VAR_10[7]);
    }
    VAR_13 = FUNC_1(VAR_11, &VAR_12);
    FUNC_4(VAR_1, VAR_13);

    VAR_13 = FUNC_0(VAR_11, ((void*)0), VAR_0, VAR_5, &VAR_12);
    FUNC_4(VAR_1, VAR_13);
    FUNC_6(VAR_12.Width == 2, "expected 2, got %d\n", VAR_12.Width);
    FUNC_6(VAR_12.Height == 1, "expected 1, got %d\n", VAR_12.Height);
    FUNC_6(VAR_12.Stride == 8, "expected 8, got %d\n", VAR_12.Stride);
    FUNC_6(VAR_12.PixelFormat == VAR_5, "expected PixelFormat32bppRGB, got %d\n", VAR_12.PixelFormat);
    VAR_14 = !FUNC_5(VAR_12.Scan0, VAR_6, sizeof(VAR_6)) ||
            !FUNC_5(VAR_12.Scan0, VAR_8, sizeof(VAR_8));
    FUNC_6(VAR_14, "bits don't match\n");
    if (!VAR_14)
    {
        VAR_10 = VAR_12.Scan0;
        FUNC_7("format %#x, bits %02x,%02x,%02x,%02x %02x,%02x,%02x,%02x\n", VAR_5,
               VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3], VAR_10[4], VAR_10[5], VAR_10[6], VAR_10[7]);
    }
    VAR_13 = FUNC_1(VAR_11, &VAR_12);
    FUNC_4(VAR_1, VAR_13);

    VAR_13 = FUNC_0(VAR_11, ((void*)0), VAR_0, VAR_2, &VAR_12);
    FUNC_4(VAR_1, VAR_13);
    FUNC_6(VAR_12.Width == 2, "expected 2, got %d\n", VAR_12.Width);
    FUNC_6(VAR_12.Height == 1, "expected 1, got %d\n", VAR_12.Height);
    FUNC_6(VAR_12.Stride == 8, "expected 8, got %d\n", VAR_12.Stride);
    FUNC_6(VAR_12.PixelFormat == VAR_2, "expected PixelFormat24bppRGB, got %d\n", VAR_12.PixelFormat);
    VAR_14 = !FUNC_5(VAR_12.Scan0, VAR_9, sizeof(VAR_9));
    FUNC_6(VAR_14, "bits don't match\n");
    if (!VAR_14)
    {
        VAR_10 = VAR_12.Scan0;
        FUNC_7("format %#x, bits %02x,%02x,%02x,%02x %02x,%02x,%02x,%02x\n", VAR_2,
               VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3], VAR_10[4], VAR_10[5], VAR_10[6], VAR_10[7]);
    }
    VAR_13 = FUNC_1(VAR_11, &VAR_12);
    FUNC_4(VAR_1, VAR_13);

    FUNC_3((GpImage *)VAR_11);
}

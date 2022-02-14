
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ds ;
typedef int bm ;
struct TYPE_16__ {int biWidth; int biPlanes; int biBitCount; int biSizeImage; int biHeight; int biYPelsPerMeter; int biXPelsPerMeter; int biCompression; int biSize; } ;
struct TYPE_14__ {void const* bmBits; int bmWidthBytes; int bmHeight; int bmWidth; } ;
struct TYPE_13__ {int biSizeImage; int biWidth; int biHeight; int biPlanes; int biBitCount; int biYPelsPerMeter; int biXPelsPerMeter; int biCompression; int biSize; } ;
struct TYPE_15__ {int bmType; int bmWidth; int bmHeight; int bmBitsPixel; int bmWidthBytes; int bmPlanes; void const* bmBits; TYPE_2__ dsBm; TYPE_1__ dsBmih; } ;
typedef int INT ;
typedef int HBITMAP ;
typedef TYPE_3__ DIBSECTION ;
typedef TYPE_3__ BYTE ;
typedef TYPE_5__ BITMAPINFOHEADER ;
typedef TYPE_3__ BITMAP ;


 int VAR_0 ;
 int FUNC_0 (int ,int,TYPE_3__*) ;
 int FUNC_1 (int ,int,TYPE_3__*) ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (TYPE_3__*,int,int) ;
 int FUNC_11 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_12(HBITMAP VAR_1, const void *VAR_2, const BITMAPINFOHEADER *VAR_3)
{
    BITMAP VAR_4;
    BITMAP VAR_5[2];
    DIBSECTION VAR_6;
    DIBSECTION VAR_7[2];
    INT VAR_8, VAR_9, VAR_10;
    BYTE *VAR_11;

    VAR_8 = FUNC_1(VAR_1, sizeof(VAR_4), &VAR_4);
    FUNC_11(VAR_8 == sizeof(VAR_4), "GetObject returned %d\n", VAR_8);

    FUNC_11(VAR_4.bmType == 0, "wrong bm.bmType %d\n", VAR_4.bmType);
    FUNC_11(VAR_4.bmWidth == VAR_3->biWidth, "wrong bm.bmWidth %d\n", VAR_4.bmWidth);
    FUNC_11(VAR_4.bmHeight == FUNC_6(VAR_3->biHeight), "wrong bm.bmHeight %d\n", VAR_4.bmHeight);
    VAR_10 = FUNC_9(VAR_4.bmWidth, VAR_4.bmBitsPixel);
    VAR_9 = FUNC_8(VAR_4.bmWidth, VAR_4.bmBitsPixel);
    if (VAR_4.bmWidthBytes != VAR_10)
        FUNC_11(VAR_4.bmWidthBytes == VAR_9, "wrong bm.bmWidthBytes %d != %d\n", VAR_4.bmWidthBytes, VAR_9);
    else
        FUNC_11(VAR_4.bmWidthBytes == VAR_10, "wrong bm.bmWidthBytes %d != %d\n", VAR_4.bmWidthBytes, VAR_10);
    FUNC_11(VAR_4.bmPlanes == VAR_3->biPlanes, "wrong bm.bmPlanes %d\n", VAR_4.bmPlanes);
    FUNC_11(VAR_4.bmBitsPixel == VAR_3->biBitCount, "bm.bmBitsPixel %d != %d\n", VAR_4.bmBitsPixel, VAR_3->biBitCount);
    FUNC_11(VAR_4.bmBits == VAR_2, "wrong bm.bmBits %p != %p\n", VAR_4.bmBits, VAR_2);

    VAR_11 = FUNC_3(FUNC_2(), 0, VAR_4.bmWidthBytes * VAR_4.bmHeight + 4096);


    FUNC_5(0xdeadbeef);
    VAR_8 = FUNC_0(VAR_1, 0, ((void*)0));
    FUNC_11(VAR_8 == VAR_9 * VAR_4.bmHeight,
        "%d != %d\n", VAR_8, VAR_9 * VAR_4.bmHeight);

    FUNC_10(VAR_11, 0xAA, VAR_4.bmWidthBytes * VAR_4.bmHeight + 4096);
    VAR_8 = FUNC_0(VAR_1, VAR_4.bmWidthBytes * VAR_4.bmHeight + 4096, VAR_11);
    FUNC_11(VAR_8 == VAR_9 * VAR_4.bmHeight, "%d != %d\n", VAR_8, VAR_9 * VAR_4.bmHeight);

    FUNC_4(FUNC_2(), 0, VAR_11);


    FUNC_10(&VAR_6, 0xAA, sizeof(VAR_6));
    VAR_8 = FUNC_1(VAR_1, sizeof(*VAR_5) * 2, VAR_5);
    FUNC_11(VAR_8 == sizeof(*VAR_5), "wrong size %d\n", VAR_8);
    FUNC_11(VAR_4.bmWidth == VAR_3->biWidth, "wrong bm.bmWidth %d\n", VAR_4.bmWidth);
    FUNC_11(VAR_4.bmHeight == FUNC_6(VAR_3->biHeight), "wrong bm.bmHeight %d\n", VAR_4.bmHeight);
    FUNC_11(VAR_4.bmBits == VAR_2, "wrong bm.bmBits %p != %p\n", VAR_4.bmBits, VAR_2);

    VAR_8 = FUNC_1(VAR_1, sizeof(VAR_4) / 2, &VAR_4);
    FUNC_11(VAR_8 == 0, "%d != 0\n", VAR_8);

    VAR_8 = FUNC_1(VAR_1, 0, &VAR_4);
    FUNC_11(VAR_8 == 0, "%d != 0\n", VAR_8);

    VAR_8 = FUNC_1(VAR_1, 1, &VAR_4);
    FUNC_11(VAR_8 == 0, "%d != 0\n", VAR_8);


    VAR_8 = FUNC_1(VAR_1, 0, ((void*)0));
    FUNC_11(VAR_8 == sizeof(VAR_4), "wrong size %d\n", VAR_8);

    VAR_8 = FUNC_1(VAR_1, sizeof(*VAR_7) * 2, VAR_7);
    FUNC_11(VAR_8 == sizeof(*VAR_7), "wrong size %d\n", VAR_8);

    FUNC_10(&VAR_6, 0xAA, sizeof(VAR_6));
    VAR_8 = FUNC_1(VAR_1, sizeof(VAR_6), &VAR_6);
    FUNC_11(VAR_8 == sizeof(VAR_6), "wrong size %d\n", VAR_8);

    FUNC_11(VAR_6.dsBm.bmBits == VAR_2, "wrong bm.bmBits %p != %p\n", VAR_6.dsBm.bmBits, VAR_2);
    if (VAR_6.dsBm.bmWidthBytes != VAR_9)
        FUNC_11(VAR_6.dsBmih.biSizeImage == VAR_6.dsBm.bmWidthBytes * VAR_6.dsBm.bmHeight, "%u != %u\n",
           VAR_6.dsBmih.biSizeImage, VAR_6.dsBm.bmWidthBytes * VAR_6.dsBm.bmHeight);
    FUNC_11(VAR_3->biSizeImage == 0, "%u != 0\n", VAR_3->biSizeImage);
    VAR_6.dsBmih.biSizeImage = 0;

    FUNC_11(VAR_6.dsBmih.biSize == VAR_3->biSize, "%u != %u\n", VAR_6.dsBmih.biSize, VAR_3->biSize);
    FUNC_11(VAR_6.dsBmih.biWidth == VAR_3->biWidth, "%d != %d\n", VAR_6.dsBmih.biWidth, VAR_3->biWidth);
    FUNC_11(VAR_6.dsBmih.biHeight == FUNC_6(VAR_3->biHeight), "%d != %d\n", VAR_6.dsBmih.biHeight, FUNC_6(VAR_3->biHeight));
    FUNC_11(VAR_6.dsBmih.biPlanes == VAR_3->biPlanes, "%u != %u\n", VAR_6.dsBmih.biPlanes, VAR_3->biPlanes);
    FUNC_11(VAR_6.dsBmih.biBitCount == VAR_3->biBitCount, "%u != %u\n", VAR_6.dsBmih.biBitCount, VAR_3->biBitCount);
    FUNC_11(VAR_6.dsBmih.biCompression == VAR_3->biCompression ||
       ((VAR_3->biBitCount == 32) && FUNC_7(VAR_6.dsBmih.biCompression == VAR_0)),
       "%u != %u\n", VAR_6.dsBmih.biCompression, VAR_3->biCompression);
    FUNC_11(VAR_6.dsBmih.biSizeImage == VAR_3->biSizeImage, "%u != %u\n", VAR_6.dsBmih.biSizeImage, VAR_3->biSizeImage);
    FUNC_11(VAR_6.dsBmih.biXPelsPerMeter == VAR_3->biXPelsPerMeter, "%d != %d\n", VAR_6.dsBmih.biXPelsPerMeter, VAR_3->biXPelsPerMeter);
    FUNC_11(VAR_6.dsBmih.biYPelsPerMeter == VAR_3->biYPelsPerMeter, "%d != %d\n", VAR_6.dsBmih.biYPelsPerMeter, VAR_3->biYPelsPerMeter);

    FUNC_10(&VAR_6, 0xAA, sizeof(VAR_6));
    VAR_8 = FUNC_1(VAR_1, sizeof(VAR_6) - 4, &VAR_6);
    FUNC_11(VAR_8 == sizeof(VAR_6.dsBm), "wrong size %d\n", VAR_8);
    FUNC_11(VAR_6.dsBm.bmWidth == VAR_3->biWidth, "%d != %d\n", VAR_6.dsBmih.biWidth, VAR_3->biWidth);
    FUNC_11(VAR_6.dsBm.bmHeight == FUNC_6(VAR_3->biHeight), "%d != %d\n", VAR_6.dsBmih.biHeight, FUNC_6(VAR_3->biHeight));
    FUNC_11(VAR_6.dsBm.bmBits == VAR_2, "%p != %p\n", VAR_6.dsBm.bmBits, VAR_2);

    VAR_8 = FUNC_1(VAR_1, 0, &VAR_6);
    FUNC_11(VAR_8 == 0, "%d != 0\n", VAR_8);

    VAR_8 = FUNC_1(VAR_1, 1, &VAR_6);
    FUNC_11(VAR_8 == 0, "%d != 0\n", VAR_8);
}

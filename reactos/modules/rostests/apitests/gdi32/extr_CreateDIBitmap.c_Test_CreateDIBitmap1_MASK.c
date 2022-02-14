
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bitmap ;
typedef int ULONG ;
struct TYPE_8__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biSizeImage; int biXPelsPerMeter; int biYPelsPerMeter; int biClrUsed; int biCompression; scalar_t__ biClrImportant; } ;
struct TYPE_7__ {scalar_t__ bmType; int bmWidth; int bmHeight; int bmWidthBytes; int bmPlanes; scalar_t__ bmBitsPixel; scalar_t__ bmBits; } ;
struct TYPE_6__ {TYPE_4__ bmiHeader; } ;
typedef int HDC ;
typedef scalar_t__ HBITMAP ;
typedef int BYTE ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_1__ BITMAPINFO ;
typedef TYPE_2__ BITMAP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,TYPE_4__*,int ,int*,TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,char*,...) ;

void
FUNC_7(void)
{
    BITMAPINFO VAR_6;
    HBITMAP VAR_7;
    BITMAP VAR_8;
    ULONG VAR_9[128] = {0};
    BYTE VAR_10[] = {2, 0, 0, 0, 2, 1, 0, 1};
    HDC VAR_11;
    int VAR_12;

    VAR_11 = FUNC_1(0);

    VAR_6.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_6.bmiHeader.biWidth = 2;
    VAR_6.bmiHeader.biHeight = 2;
    VAR_6.bmiHeader.biPlanes = 1;
    VAR_6.bmiHeader.biBitCount = 16;
    VAR_6.bmiHeader.biCompression = VAR_1;
    VAR_6.bmiHeader.biSizeImage = 0;
    VAR_6.bmiHeader.biXPelsPerMeter = 1;
    VAR_6.bmiHeader.biYPelsPerMeter = 1;
    VAR_6.bmiHeader.biClrUsed = 0;
    VAR_6.bmiHeader.biClrImportant = 0;

    VAR_7 = FUNC_0(VAR_11, &VAR_6.bmiHeader, VAR_3, VAR_9, &VAR_6, VAR_5);
    FUNC_6(VAR_7 != 0, "failed\n");

    VAR_12 = FUNC_4(VAR_7, sizeof(VAR_8), &VAR_8);
    FUNC_6(VAR_12 != 0, "failed\n");
    FUNC_6(VAR_8.bmType == 0, "\n");
    FUNC_6(VAR_8.bmWidth == 2, "\n");
    FUNC_6(VAR_8.bmHeight == 2, "\n");
    FUNC_6(VAR_8.bmWidthBytes == 8, "bmWidthBytes = %ld\n", VAR_8.bmWidthBytes);
    FUNC_6(VAR_8.bmPlanes == 1, "\n");
    FUNC_6(VAR_8.bmBitsPixel == FUNC_2(VAR_11, VAR_0), "\n");
    FUNC_6(VAR_8.bmBits == 0, "\n");

    FUNC_5(0);
    VAR_6.bmiHeader.biCompression = VAR_2;
    VAR_6.bmiHeader.biBitCount = 8;
    VAR_6.bmiHeader.biSizeImage = 8;
    VAR_6.bmiHeader.biClrUsed = 1;
    VAR_7 = FUNC_0(VAR_11, &VAR_6.bmiHeader, VAR_3, VAR_10, &VAR_6, VAR_4);
    FUNC_6(VAR_7 != 0, "failed\n");
    FUNC_6(FUNC_3() == 0, "GetLastError() == %ld\n", FUNC_3());

    VAR_12 = FUNC_4(VAR_7, sizeof(VAR_8), &VAR_8);
    FUNC_6(VAR_12 != 0, "failed\n");
    FUNC_6(VAR_8.bmType == 0, "\n");
    FUNC_6(VAR_8.bmWidth == 2, "\n");
    FUNC_6(VAR_8.bmHeight == 2, "\n");
    FUNC_6(VAR_8.bmWidthBytes == 8, "bmWidthBytes = %ld\n", VAR_8.bmWidthBytes);
    FUNC_6(VAR_8.bmPlanes == 1, "\n");
    FUNC_6(VAR_8.bmBitsPixel == FUNC_2(VAR_11, VAR_0), "\n");
    FUNC_6(VAR_8.bmBits == 0, "\n");


}

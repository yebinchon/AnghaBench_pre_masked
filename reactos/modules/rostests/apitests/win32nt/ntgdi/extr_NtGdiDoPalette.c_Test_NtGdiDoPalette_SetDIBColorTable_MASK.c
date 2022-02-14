
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_2__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biXPelsPerMeter; int biYPelsPerMeter; int biClrUsed; int biClrImportant; scalar_t__ biSizeImage; int biCompression; } ;
typedef int PVOID ;
typedef int * HDC ;
typedef int * HBITMAP ;
typedef int BYTE ;
typedef TYPE_1__ BITMAPINFOHEADER ;
typedef int BITMAPINFO ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int ,int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,int,int**,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int) ;

void
FUNC_11(void)
{
    HDC VAR_4;
    HBITMAP VAR_5;
    BYTE *VAR_6;

    struct
    {
        BITMAPINFOHEADER bmiHeader;
        ULONG bmiColors[10];
    } VAR_7;

    VAR_4 = FUNC_0(0);
    FUNC_9(VAR_4 != ((void*)0), "hdc was NULL.\n");

    VAR_7.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_7.bmiHeader.biWidth = 10;
    VAR_7.bmiHeader.biHeight = 10;
    VAR_7.bmiHeader.biPlanes = 1;
    VAR_7.bmiHeader.biBitCount = 8;
    VAR_7.bmiHeader.biCompression = VAR_0;
    VAR_7.bmiHeader.biSizeImage = 0;
    VAR_7.bmiHeader.biXPelsPerMeter = 1;
    VAR_7.bmiHeader.biYPelsPerMeter = 1;
    VAR_7.bmiHeader.biClrUsed = 9;
    VAR_7.bmiHeader.biClrImportant = 9;
    VAR_7.bmiColors[0] = 0x000000;
    VAR_7.bmiColors[1] = 0x202020;
    VAR_7.bmiColors[2] = 0x404040;
    VAR_7.bmiColors[3] = 0x606060;
    VAR_7.bmiColors[4] = 0x808080;
    VAR_7.bmiColors[5] = 0xA0A0A0;
    VAR_7.bmiColors[6] = 0xC0C0C0;
    VAR_7.bmiColors[7] = 0xE0E0E0;
    VAR_7.bmiColors[8] = 0xffffff;
    VAR_5 = FUNC_1(VAR_4, (BITMAPINFO*)&VAR_7, VAR_1, (PVOID*)&VAR_6, ((void*)0), 0);
    FUNC_9(VAR_5 != ((void*)0), "hbmp was NULL.\n");
    FUNC_9(VAR_6 != ((void*)0), "pjBits was NULL.\n");

    FUNC_6(VAR_4, VAR_5);

    VAR_6[0] = 8;
    VAR_6[1] = 1;
    VAR_6[2] = 2;
    VAR_6[3] = 3;

    VAR_7.bmiColors[8] = 0x000000;
    VAR_7.bmiColors[7] = 0x202020;
    VAR_7.bmiColors[6] = 0x404040;
    VAR_7.bmiColors[5] = 0x606060;
    VAR_7.bmiColors[4] = 0x808080;
    VAR_7.bmiColors[3] = 0xA0A0A0;
    VAR_7.bmiColors[2] = 0xC0C0C0;
    VAR_7.bmiColors[1] = 0xE0E0E0;
    VAR_7.bmiColors[0] = 0xffffff;
    FUNC_10(FUNC_4(VAR_4, 0, 9, &VAR_7.bmiColors, VAR_3, VAR_2), 9);

    FUNC_8(VAR_4, 0xE0E0E0);
    FUNC_7(VAR_4, 0x202020);
    FUNC_5(VAR_4, 0, 0, 10, 10);

    FUNC_2(VAR_4);
    FUNC_3(VAR_5);
}

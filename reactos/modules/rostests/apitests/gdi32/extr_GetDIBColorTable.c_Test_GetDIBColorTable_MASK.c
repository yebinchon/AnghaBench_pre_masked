
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
typedef int UINT ;
struct TYPE_6__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biXPelsPerMeter; int biYPelsPerMeter; int biClrUsed; scalar_t__ biClrImportant; scalar_t__ biSizeImage; int biCompression; } ;
struct TYPE_7__ {TYPE_1__ bmiHeader; } ;
typedef int RGBQUAD ;
typedef TYPE_2__* PVOID ;
typedef int PBYTE ;
typedef scalar_t__ HDC ;
typedef scalar_t__ HBITMAP ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int,int,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_2__*,int ,TYPE_2__**,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int,int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,int,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int) ;

void FUNC_13()
{
    struct
    {
        BITMAPINFOHEADER bmiHeader;
        ULONG bmiColors[8];
    } VAR_3;
    BITMAPINFO *VAR_4 = (PVOID)&VAR_3;
    HBITMAP VAR_5, VAR_6;
    HDC VAR_7;
    PBYTE VAR_8;
    UINT VAR_9;
    ULONG VAR_10[257];

    VAR_7 = FUNC_1(0);
    FUNC_10(VAR_7 != 0, "failed\n");

    FUNC_9(0);
    VAR_9 = FUNC_4(VAR_7, 0, 257, (RGBQUAD*)VAR_10);
    FUNC_12(VAR_9, 2);
    FUNC_11(0);
    FUNC_12(VAR_10[0], 0x000000);
    FUNC_12(VAR_10[1], 0xffffff);

    VAR_5 = FUNC_0(1, 1, 1, 1, ((void*)0));
    FUNC_10(VAR_5 != 0, "\n");
    VAR_6 = FUNC_7(VAR_7, VAR_5);
    FUNC_10(VAR_6 != 0, "Failed to select bitmap\n");
    VAR_9 = FUNC_4(VAR_7, 0, 257, (RGBQUAD*)VAR_10);
    FUNC_12(VAR_9, 2);
    FUNC_11(0);
    FUNC_12(VAR_10[0], 0x000000);
    FUNC_12(VAR_10[1], 0xffffff);
    FUNC_7(VAR_7, VAR_6);
    FUNC_3(VAR_5);


    VAR_4->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_4->bmiHeader.biWidth = 2;
    VAR_4->bmiHeader.biHeight = 2;
    VAR_4->bmiHeader.biPlanes = 1;
    VAR_4->bmiHeader.biBitCount = 8;
    VAR_4->bmiHeader.biCompression = VAR_0;
    VAR_4->bmiHeader.biSizeImage = 0;
    VAR_4->bmiHeader.biXPelsPerMeter = 1;
    VAR_4->bmiHeader.biYPelsPerMeter = 1;
    VAR_4->bmiHeader.biClrUsed = 3;
    VAR_4->bmiHeader.biClrImportant = 0;
    VAR_3.bmiColors[0] = 0xff0000;
    VAR_3.bmiColors[1] = 0x00ff00;
    VAR_3.bmiColors[2] = 0x0000ff;

    VAR_5 = FUNC_2(VAR_7, VAR_4, VAR_2, (PVOID*)&VAR_8, 0, 0 );
    FUNC_10( VAR_5 != ((void*)0), "error=%ld\n", FUNC_5() );
    FUNC_7(VAR_7, VAR_5);

    VAR_9 = FUNC_4(VAR_7, 0, 257, (RGBQUAD*)VAR_10);
    FUNC_12(VAR_9, 256);
    FUNC_12(VAR_10[0], 0xff0000);
    FUNC_12(VAR_10[1], 0x00ff00);
    FUNC_12(VAR_10[2], 0x0000ff);
    FUNC_12(VAR_10[3], 0x000000);


    VAR_9 = FUNC_8(VAR_7, 0, 4, (RGBQUAD*)VAR_10);
    FUNC_12(VAR_9, 4);

    VAR_10[3] = 0x000F0F;
    VAR_9 = FUNC_8(VAR_7, 0, 4, (RGBQUAD*)VAR_10);
    FUNC_12(VAR_9, 4);

    VAR_9 = FUNC_4(VAR_7, 0, 257, (RGBQUAD*)VAR_10);
    FUNC_12(VAR_9, 256);
    FUNC_12(VAR_10[0], 0xff0000);
    FUNC_12(VAR_10[1], 0x00ff00);
    FUNC_12(VAR_10[2], 0x0000ff);
    FUNC_12(VAR_10[3], 0x000F0F);


    FUNC_7(VAR_7, FUNC_6(21));
    FUNC_3(VAR_5);

    VAR_3.bmiColors[0] = 1;
    VAR_3.bmiColors[1] = 2;
    VAR_3.bmiColors[2] = 3;

    VAR_5 = FUNC_2(VAR_7, VAR_4, VAR_1, (PVOID*)&VAR_8, 0, 0 );
    FUNC_10( VAR_5 != ((void*)0), "error=%ld\n", FUNC_5() );
    FUNC_7(VAR_7, VAR_5);


}

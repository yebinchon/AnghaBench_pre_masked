
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int buffer ;
typedef int UINT ;
struct TYPE_5__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biClrUsed; scalar_t__ biClrImportant; scalar_t__ biYPelsPerMeter; scalar_t__ biXPelsPerMeter; scalar_t__ biSizeImage; int biCompression; } ;
struct TYPE_7__ {TYPE_2__* bmiColors; TYPE_1__ bmiHeader; } ;
struct TYPE_6__ {int rgbBlue; int rgbGreen; int rgbRed; } ;
typedef int RGBQUAD ;
typedef int HDC ;
typedef int * HBITMAP ;
typedef int COLORREF ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_3__ BITMAPINFO ;


 int VAR_0 ;
 int * FUNC_0 (int,int,int,int,int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int ) ;
 int * FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int *,int ,int,char*,TYPE_3__*,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*) ;

void FUNC_10()
{
    char VAR_2[sizeof(BITMAPINFOHEADER)+2*sizeof(RGBQUAD)];
    HDC VAR_3;
    BITMAPINFO* VAR_4 = (BITMAPINFO*)VAR_2;
    char VAR_5[] = {0x80, 0, 0, 0};
    HBITMAP VAR_6;
    int VAR_7;
    COLORREF VAR_8;

    VAR_3 = FUNC_1(0);
    if(!VAR_3)
    {
        FUNC_9("No device contexr !?\n");
        return;
    }

    FUNC_7(VAR_2, sizeof(VAR_2));

    VAR_4->bmiHeader.biSize=sizeof(BITMAPINFOHEADER);
    VAR_4->bmiHeader.biWidth=2;
    VAR_4->bmiHeader.biHeight=1;
    VAR_4->bmiHeader.biPlanes=1;
    VAR_4->bmiHeader.biBitCount=1;
    VAR_4->bmiHeader.biCompression=VAR_0;
    VAR_4->bmiHeader.biSizeImage=0;
    VAR_4->bmiHeader.biXPelsPerMeter=0;
    VAR_4->bmiHeader.biYPelsPerMeter=0;
    VAR_4->bmiHeader.biClrUsed=2;
    VAR_4->bmiHeader.biClrImportant=0;
    VAR_4->bmiColors[0].rgbBlue = 0xFF;
    VAR_4->bmiColors[0].rgbGreen = 0xFF;
    VAR_4->bmiColors[0].rgbRed = 0xFF;

    VAR_6 = FUNC_0(2, 1, 1, 1, ((void*)0));
    FUNC_8(VAR_6!=((void*)0), "Failed to create a monochrome bitmap\n");

    VAR_7 = FUNC_6(((void*)0), VAR_6, 0, 1, VAR_5, VAR_4, VAR_1);
    FUNC_8(VAR_7 == 1, "Copied %i scanlines\n", VAR_7);

    VAR_6 = FUNC_5(VAR_3, VAR_6);
    FUNC_8(VAR_6 != ((void*)0), "Could not select the bitmap into the context.\n");
    VAR_8 = FUNC_4(VAR_3, 0,0);
    FUNC_8(VAR_8 == 0, "Wrong color at 0,0 : 0x%08x\n", (UINT)VAR_8);
    VAR_8 = FUNC_4(VAR_3, 1,0);
    FUNC_8(VAR_8 == 0xFFFFFF, "Wrong color at 1,0 : 0x%08x\n", (UINT)VAR_8);

    VAR_6 = FUNC_5(VAR_3, VAR_6);


    VAR_4->bmiColors[0].rgbBlue = 0xFF;
    VAR_4->bmiColors[0].rgbGreen = 0;
    VAR_4->bmiColors[0].rgbRed = 0;

    VAR_7 = FUNC_6(((void*)0), VAR_6, 0, 1, VAR_5, VAR_4, VAR_1);
    FUNC_8(VAR_7 == 1, "Copied %i scanlines\n", VAR_7);

    VAR_6 = FUNC_5(VAR_3, VAR_6);
    FUNC_8(VAR_6 != ((void*)0), "Could not select the bitmap into the context.\n");
    VAR_8 = FUNC_4(VAR_3, 0,0);
    FUNC_8(VAR_8 == 0, "Wrong color at 0,0 : 0x%08x\n", (UINT)VAR_8);
    VAR_8 = FUNC_4(VAR_3, 1,0);
    FUNC_8(VAR_8 == 0xFFFFFF, "Wrong color at 1,0 : 0x%08x\n", (UINT)VAR_8);

    VAR_6 = FUNC_5(VAR_3, VAR_6);


    VAR_4->bmiColors[0].rgbBlue = 0;
    VAR_4->bmiColors[0].rgbGreen = 0;
    VAR_4->bmiColors[0].rgbRed = 0;

    VAR_7 = FUNC_6(((void*)0), VAR_6, 0, 1, VAR_5, VAR_4, VAR_1);
    FUNC_8(VAR_7 == 1, "Copied %i scanlines\n", VAR_7);

    VAR_6 = FUNC_5(VAR_3, VAR_6);
    FUNC_8(VAR_6 != ((void*)0), "Could not select the bitmap into the context.\n");
    VAR_8 = FUNC_4(VAR_3, 0,0);
    FUNC_8(VAR_8 == 0, "Wrong color at 0,0 : 0x%08x\n", (UINT)VAR_8);
    VAR_8 = FUNC_4(VAR_3, 1,0);
    FUNC_8(VAR_8 == 0xFFFFFF, "Wrong color at 1,0 : 0x%08x\n", (UINT)VAR_8);

    VAR_6 = FUNC_5(VAR_3, VAR_6);
    FUNC_3(VAR_6);
    FUNC_2(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biXPelsPerMeter; int biYPelsPerMeter; int biClrUsed; int biClrImportant; scalar_t__ biSizeImage; int biCompression; } ;
typedef int RGBQUAD ;
typedef int PVOID ;
typedef int PBITMAPINFO ;
typedef int HDC ;
typedef int HBITMAP ;
typedef TYPE_1__ BITMAPINFOHEADER ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *,int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;

void
FUNC_5(void)
{
    HDC VAR_2;
    HBITMAP VAR_3;
    struct
    {
        BITMAPINFOHEADER bmiHeader;
        RGBQUAD bmiColors[100];
    } VAR_4;
    PBITMAPINFO VAR_5 = (PBITMAPINFO)&VAR_4;
    PVOID VAR_6;

    VAR_2 = FUNC_1(0);
    FUNC_0(VAR_2);

    VAR_4.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_4.bmiHeader.biWidth = 2;
    VAR_4.bmiHeader.biHeight = 2;
    VAR_4.bmiHeader.biPlanes = 1;
    VAR_4.bmiHeader.biBitCount = 1;
    VAR_4.bmiHeader.biCompression = VAR_0;
    VAR_4.bmiHeader.biSizeImage = 0;
    VAR_4.bmiHeader.biXPelsPerMeter = 100;
    VAR_4.bmiHeader.biYPelsPerMeter = 100;
    VAR_4.bmiHeader.biClrUsed = 2;
    VAR_4.bmiHeader.biClrImportant = 2;

    VAR_3 = FUNC_2(VAR_2, VAR_5, VAR_1, &VAR_6, ((void*)0), 0);
    FUNC_0(VAR_3);

    FUNC_4(FUNC_3(VAR_2, VAR_3) != 0);

}

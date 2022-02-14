
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
typedef int USHORT ;
typedef int ULONG ;
struct TYPE_6__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biXPelsPerMeter; int biYPelsPerMeter; int biClrUsed; scalar_t__ biClrImportant; scalar_t__ biSizeImage; int biCompression; } ;
struct TYPE_5__ {TYPE_3__ bmiHeader; } ;
typedef TYPE_1__* PVOID ;
typedef int * HPALETTE ;
typedef scalar_t__ HDC ;
typedef scalar_t__ HBITMAP ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_1__ BITMAPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_3__*,int ,int *,TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int * FUNC_4 (scalar_t__,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int,char*,...) ;

void
FUNC_6(void)
{
    struct
    {
        BITMAPINFOHEADER bmiHeader;
        WORD bmiColors[8];
    } VAR_5;
    BITMAPINFO *VAR_6 = (PVOID)&VAR_5;
    HBITMAP VAR_7;
    ULONG VAR_8[16] = {0};
    HDC VAR_9;
    HPALETTE VAR_10;
    USHORT VAR_11;

    VAR_9 = FUNC_0(0);
    FUNC_5(VAR_9 != 0, "failed\n");


    VAR_10 = FUNC_4(VAR_9, VAR_4, VAR_3);
    FUNC_5(VAR_10 != ((void*)0), "error=%ld\n", FUNC_2());


    VAR_6->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_6->bmiHeader.biWidth = 2;
    VAR_6->bmiHeader.biHeight = -2;
    VAR_6->bmiHeader.biPlanes = 1;
    VAR_6->bmiHeader.biBitCount = 8;
    VAR_6->bmiHeader.biCompression = VAR_0;
    VAR_6->bmiHeader.biSizeImage = 0;
    VAR_6->bmiHeader.biXPelsPerMeter = 1;
    VAR_6->bmiHeader.biYPelsPerMeter = 1;
    VAR_6->bmiHeader.biClrUsed = 8;
    VAR_6->bmiHeader.biClrImportant = 0;

    for( VAR_11 = 0; VAR_11 < 8; VAR_11++ )
    {
        VAR_5.bmiColors[VAR_11] = VAR_11;
    }


    VAR_7 = FUNC_1(VAR_9, &VAR_6->bmiHeader, VAR_1, VAR_8, VAR_6, VAR_2);
    FUNC_5(VAR_7 != 0, "failed\n");

    FUNC_3(VAR_9, VAR_7);


}

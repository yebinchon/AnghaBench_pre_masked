
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int buffer ;
typedef int ULONG ;
struct TYPE_6__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; scalar_t__ biClrImportant; scalar_t__ biClrUsed; scalar_t__ biYPelsPerMeter; scalar_t__ biXPelsPerMeter; scalar_t__ biSizeImage; int biCompression; } ;
struct TYPE_8__ {TYPE_2__* bmiColors; TYPE_1__ bmiHeader; } ;
struct TYPE_7__ {int rgbBlue; int rgbRed; scalar_t__ rgbGreen; } ;
typedef int RGBQUAD ;
typedef int PVOID ;
typedef int * HBITMAP ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_3__ BITMAPINFO ;


 int VAR_0 ;
 int * FUNC_0 (int *,TYPE_3__*,int ,int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int,char*,TYPE_3__*,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,char*,...) ;

void FUNC_5()
{
    char VAR_2[sizeof(BITMAPINFOHEADER)+2*sizeof(RGBQUAD)];
    ULONG* VAR_3;
    BITMAPINFO* VAR_4 = (BITMAPINFO*)VAR_2;
    char VAR_5[] = {0x80, 0, 0, 0};
    HBITMAP VAR_6;
    int VAR_7;

    FUNC_3(VAR_2, sizeof(VAR_2));

    VAR_4->bmiHeader.biSize=sizeof(BITMAPINFOHEADER);
    VAR_4->bmiHeader.biWidth=2;
    VAR_4->bmiHeader.biHeight=1;
    VAR_4->bmiHeader.biPlanes=1;
    VAR_4->bmiHeader.biBitCount=32;
    VAR_4->bmiHeader.biCompression=VAR_0;
    VAR_4->bmiHeader.biSizeImage=0;
    VAR_4->bmiHeader.biXPelsPerMeter=0;
    VAR_4->bmiHeader.biYPelsPerMeter=0;
    VAR_4->bmiHeader.biClrUsed=0;
    VAR_4->bmiHeader.biClrImportant=0;

    VAR_6 = FUNC_0(((void*)0), VAR_4, VAR_1, (PVOID*)&VAR_3, ((void*)0), 0);
    FUNC_4(VAR_6!=((void*)0), "Failed to create a DIB section\n");

    VAR_4->bmiHeader.biBitCount = 1;
    VAR_4->bmiColors[0].rgbBlue = 0xFF;
    VAR_4->bmiColors[0].rgbGreen = 0;
    VAR_4->bmiColors[0].rgbRed = 0xFF;

    VAR_7 = FUNC_2(((void*)0), VAR_6, 0, 1, VAR_5, VAR_4, VAR_1);
    FUNC_4(VAR_7 == 1, "Copied %i scanlines\n", VAR_7);

    FUNC_4(VAR_3[0] == 0, "Wrong color 0x%08x after SetDIBits\n", (unsigned int)VAR_3[0]);
    FUNC_4(VAR_3[1] == 0xFF00FF, "Wrong color 0x%08x after SetDIBits\n", (unsigned int)VAR_3[1]);

    FUNC_1(VAR_6);
}

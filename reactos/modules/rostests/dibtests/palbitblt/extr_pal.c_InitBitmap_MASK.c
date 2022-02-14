
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int biSize; int biPlanes; int biBitCount; int biClrUsed; int biClrImportant; scalar_t__ biYPelsPerMeter; scalar_t__ biXPelsPerMeter; scalar_t__ biSizeImage; int biCompression; int biHeight; int biWidth; } ;
struct TYPE_11__ {TYPE_3__* bmiColors; TYPE_1__ bmiHeader; } ;
struct TYPE_10__ {int palVersion; int palNumEntries; TYPE_2__* palPalEntry; } ;
struct TYPE_9__ {int rgbBlue; int rgbGreen; int rgbRed; } ;
struct TYPE_8__ {int peFlags; int peBlue; int peGreen; int peRed; } ;
typedef TYPE_3__ RGBQUAD ;
typedef TYPE_4__ LOGPALETTE256 ;
typedef int LOGPALETTE ;
typedef int HWND ;
typedef int HPALETTE ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_5__ BITMAPINFO256 ;
typedef int BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,void**,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ) ;
 int VAR_6 ;

void FUNC_10(HBITMAP *VAR_7){
 HPALETTE VAR_8;
 HWND VAR_9;
 HDC VAR_10;
 RGBQUAD VAR_11[256];
 int VAR_12;
 BITMAPINFO256 VAR_13;
 LOGPALETTE256 VAR_14;

 VAR_9 = FUNC_4();
 VAR_10 = FUNC_5(VAR_9);

 VAR_13.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
 VAR_13.bmiHeader.biWidth = VAR_5;
 VAR_13.bmiHeader.biHeight = -FUNC_9(VAR_4);
 VAR_13.bmiHeader.biPlanes = 1;
 VAR_13.bmiHeader.biBitCount = 8;
 VAR_13.bmiHeader.biCompression = VAR_0;
 VAR_13.bmiHeader.biSizeImage = 0;
 VAR_13.bmiHeader.biXPelsPerMeter = 0;
 VAR_13.bmiHeader.biYPelsPerMeter = 0;
 VAR_13.bmiHeader.biClrUsed = 256;
 VAR_13.bmiHeader.biClrImportant = 256;

 FUNC_3(VAR_11);

 for(VAR_12=0;VAR_12<256;VAR_12++)
  VAR_13.bmiColors[VAR_12] = VAR_11[VAR_12];

 VAR_14.palVersion = 0x300;
 VAR_14.palNumEntries = 256;
 for(VAR_12=0;VAR_12<256;VAR_12++){
  VAR_14.palPalEntry[VAR_12].peRed = VAR_11[VAR_12].rgbRed;
  VAR_14.palPalEntry[VAR_12].peGreen = VAR_11[VAR_12].rgbGreen;
  VAR_14.palPalEntry[VAR_12].peBlue = VAR_11[VAR_12].rgbBlue;
  VAR_14.palPalEntry[VAR_12].peFlags = VAR_3;
 }


 VAR_8 = FUNC_1((LOGPALETTE*)&VAR_14);


 FUNC_8(VAR_10,VAR_8,VAR_2);


 FUNC_6(VAR_10);


 FUNC_2(VAR_8);


 *VAR_7 = FUNC_0(VAR_10,(BITMAPINFO*)&VAR_13,
  VAR_1,(void**)&VAR_6,0,0);


 FUNC_7(VAR_9,VAR_10);
}

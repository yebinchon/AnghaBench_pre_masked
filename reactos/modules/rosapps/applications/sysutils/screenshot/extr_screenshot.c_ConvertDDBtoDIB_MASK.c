
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_6__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biClrUsed; int biSizeImage; scalar_t__ biClrImportant; int biCompression; } ;
struct TYPE_9__ {TYPE_1__ bmiHeader; } ;
struct TYPE_8__ {int bmPlanes; int bmBitsPixel; int bmWidth; int bmHeight; } ;
struct TYPE_7__ {TYPE_4__* lpbi; int * lpvBits; int Height; int hBitmap; int hDC; } ;
typedef int RGBQUAD ;
typedef TYPE_2__* PSCREENSHOT ;
typedef void* PBITMAPINFO ;
typedef int LPTSTR ;
typedef scalar_t__ INT ;
typedef int BOOL ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_3__ BITMAP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *,TYPE_4__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static BOOL
FUNC_5(PSCREENSHOT VAR_4)
{
    INT VAR_5;
    BITMAP VAR_6;
    WORD VAR_7;
 if (!FUNC_2(VAR_4->hBitmap,
                    sizeof(BITMAP),
                    (LPTSTR)&VAR_6))
    {
        FUNC_1();
  return VAR_2;
 }

 VAR_7 = (WORD)(VAR_6.bmPlanes * VAR_6.bmBitsPixel);
 if (VAR_7 == 1)
  VAR_7 = 1;
 else if (VAR_7 <= 4)
  VAR_7 = 4;
 else if (VAR_7 <= 8)
  VAR_7 = 8;
 else if (VAR_7 <= 16)
  VAR_7 = 16;
 else if (VAR_7 <= 24)
  VAR_7 = 24;
 else VAR_7 = 32;

  if (VAR_7 != 24)
  {
    VAR_4->lpbi = (PBITMAPINFO) FUNC_4(FUNC_3(),
                                            0,
                                            sizeof(BITMAPINFOHEADER) + sizeof(RGBQUAD) * (1 << VAR_7));
  }
  else
  {
    VAR_4->lpbi = (PBITMAPINFO) FUNC_4(FUNC_3(),
                                            0,
                                            sizeof(BITMAPINFOHEADER));
  }

 if (!VAR_4->lpbi)
 {
  FUNC_1();
  return VAR_2;
 }

 VAR_4->lpbi->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
 VAR_4->lpbi->bmiHeader.biWidth = VAR_6.bmWidth;
 VAR_4->lpbi->bmiHeader.biHeight = VAR_6.bmHeight;
 VAR_4->lpbi->bmiHeader.biPlanes = VAR_6.bmPlanes;
 VAR_4->lpbi->bmiHeader.biBitCount = VAR_6.bmBitsPixel;

 if (VAR_7 < 24)
  VAR_4->lpbi->bmiHeader.biClrUsed = (1 << VAR_7);

 VAR_4->lpbi->bmiHeader.biCompression = VAR_0;
 VAR_4->lpbi->bmiHeader.biSizeImage = ((VAR_4->lpbi->bmiHeader.biWidth * VAR_7 +31) & ~31) /8
                                           * VAR_4->lpbi->bmiHeader.biHeight;

 VAR_4->lpbi->bmiHeader.biClrImportant = 0;




    VAR_4->lpvBits = FUNC_4(FUNC_3(),
                                 0,
                                 VAR_4->lpbi->bmiHeader.biSizeImage);
    if (VAR_4->lpvBits == ((void*)0))
    {
        FUNC_1();
        return VAR_2;
    }


    VAR_5 = FUNC_0(VAR_4->hDC,
                    VAR_4->hBitmap,
                    0,
                    VAR_4->Height,
                    VAR_4->lpvBits,
                    VAR_4->lpbi,
                    VAR_1);
    if (VAR_5 == 0)
    {
        FUNC_1();
        return VAR_2;
    }

    return VAR_3;

}

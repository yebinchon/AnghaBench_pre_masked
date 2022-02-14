
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int bmibuf ;
typedef int bm ;
typedef size_t WORD ;
struct TYPE_15__ {int bmWidth; int bmHeight; int bmPlanes; int bmBitsPixel; int bmWidthBytes; } ;
struct TYPE_12__ {int biSize; int biWidth; int biHeight; int biBitCount; int biPlanes; size_t biClrUsed; size_t biClrImportant; int biCompression; } ;
struct TYPE_14__ {TYPE_3__ bmiHeader; TYPE_2__* bmiColors; } ;
struct TYPE_13__ {int palNumEntries; TYPE_1__* palPalEntry; } ;
struct TYPE_11__ {scalar_t__ rgbReserved; int rgbBlue; int rgbGreen; int rgbRed; } ;
struct TYPE_10__ {int peBlue; int peGreen; int peRed; } ;
typedef int RGBQUAD ;
typedef TYPE_4__ LOGPALETTE ;
typedef scalar_t__ HBITMAP ;
typedef TYPE_5__ BITMAPINFO ;
typedef TYPE_6__ BITMAP ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_5__*,int ,void**,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int,TYPE_6__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,void const*,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int,char*,int,...) ;

__attribute__((used)) static HBITMAP FUNC_6(int VAR_2, int VAR_3, int VAR_4, LOGPALETTE *VAR_5, const void *VAR_6)
{
    char VAR_7[sizeof(BITMAPINFO) + sizeof(RGBQUAD) * 255];
    BITMAPINFO *VAR_8 = (BITMAPINFO *)VAR_7;
    void *VAR_9;
    HBITMAP VAR_10;
    BITMAP VAR_11;

    FUNC_4(VAR_7, 0, sizeof(VAR_7));
    VAR_8->bmiHeader.biSize = sizeof(VAR_8->bmiHeader);
    VAR_8->bmiHeader.biWidth = VAR_2;
    VAR_8->bmiHeader.biHeight = -VAR_3;
    VAR_8->bmiHeader.biBitCount = VAR_4;
    VAR_8->bmiHeader.biPlanes = 1;
    VAR_8->bmiHeader.biCompression = VAR_0;
    if (VAR_5)
    {
        WORD VAR_12;

        FUNC_2(VAR_5->palNumEntries <= 256);
        for (VAR_12 = 0; VAR_12 < VAR_5->palNumEntries; VAR_12++)
        {
            VAR_8->bmiColors[VAR_12].rgbRed = VAR_5->palPalEntry[VAR_12].peRed;
            VAR_8->bmiColors[VAR_12].rgbGreen = VAR_5->palPalEntry[VAR_12].peGreen;
            VAR_8->bmiColors[VAR_12].rgbBlue = VAR_5->palPalEntry[VAR_12].peBlue;
            VAR_8->bmiColors[VAR_12].rgbReserved = 0;
        }

        VAR_8->bmiHeader.biClrUsed = VAR_5->palNumEntries;
        VAR_8->bmiHeader.biClrImportant = VAR_5->palNumEntries;
    }
    VAR_10 = FUNC_0(0, VAR_8, VAR_1, &VAR_9, ((void*)0), 0);
    FUNC_5(VAR_10 != 0, "CreateDIBSection(%dx%d,%d bpp) failed\n", VAR_2, VAR_3, VAR_4);

    FUNC_1(VAR_10, sizeof(VAR_11), &VAR_11);
    FUNC_5(VAR_11.bmWidth == VAR_2, "expected %d, got %d\n", VAR_2, VAR_11.bmWidth);
    FUNC_5(VAR_11.bmHeight == VAR_3, "expected %d, got %d\n", VAR_3, VAR_11.bmHeight);
    FUNC_5(VAR_11.bmPlanes == 1, "expected 1, got %d\n", VAR_11.bmPlanes);
    FUNC_5(VAR_11.bmBitsPixel == VAR_4, "expected %d, got %d\n", VAR_4, VAR_11.bmBitsPixel);

    if (VAR_6) FUNC_3(VAR_9, VAR_6, VAR_11.bmWidthBytes * VAR_11.bmHeight);

    return VAR_10;
}

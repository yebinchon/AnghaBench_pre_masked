
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int maskBitmap ;
typedef int logoBitmap ;
typedef int bmpi ;
typedef int VOID ;
struct TYPE_11__ {int bmHeight; int bmWidth; int bmPlanes; int bmBitsPixel; } ;
struct TYPE_9__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biSizeImage; int biCompression; } ;
struct TYPE_10__ {int cxSource; int cySource; int iPlanes; int iBits; int * hBitmap; TYPE_1__ bmiHeader; } ;
typedef int PVOID ;
typedef TYPE_2__* PIMGINFO ;
typedef int INT ;
typedef int HWND ;
typedef int HDC ;
typedef int * HBITMAP ;
typedef int DWORD ;
typedef int COLORREF ;
typedef TYPE_2__ BITMAPINFO ;
typedef TYPE_4__ BITMAP ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,TYPE_2__*,int ,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int,TYPE_4__*) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int VAR_6 ;

__attribute__((used)) static VOID
FUNC_14(PIMGINFO VAR_7, HWND VAR_8)
{
    BITMAP VAR_9;
    BITMAP VAR_10;
    BITMAPINFO VAR_11;
    HDC VAR_12 = FUNC_5(VAR_8);
    HDC VAR_13 = FUNC_0(((void*)0));
    HDC VAR_14 = FUNC_0(((void*)0));
    HBITMAP VAR_15, VAR_16, VAR_17 = ((void*)0);
    COLORREF *VAR_18;
    INT VAR_19, VAR_20;

    FUNC_13(VAR_7, sizeof(*VAR_7));
    FUNC_13(&VAR_11, sizeof(VAR_11));

    VAR_16 = (HBITMAP)FUNC_10(VAR_6, FUNC_11(VAR_2), VAR_4, 0, 0, VAR_5);
    VAR_15 = (HBITMAP)FUNC_10(VAR_6, FUNC_11(VAR_3), VAR_4, 0, 0, VAR_5);

    if (VAR_16 != ((void*)0) && VAR_15 != ((void*)0))
    {
        FUNC_7(VAR_16, sizeof(VAR_9), &VAR_9);
        FUNC_7(VAR_15, sizeof(VAR_10), &VAR_10);

        if (VAR_9.bmHeight != VAR_10.bmHeight || VAR_9.bmWidth != VAR_10.bmWidth)
            goto Cleanup;

        VAR_11.bmiHeader.biSize = sizeof(BITMAPINFO);
        VAR_11.bmiHeader.biWidth = VAR_9.bmWidth;
        VAR_11.bmiHeader.biHeight = VAR_9.bmHeight;
        VAR_11.bmiHeader.biPlanes = 1;
        VAR_11.bmiHeader.biBitCount = 32;
        VAR_11.bmiHeader.biCompression = VAR_0;
        VAR_11.bmiHeader.biSizeImage = 4 * VAR_9.bmWidth * VAR_9.bmHeight;


        VAR_17 = FUNC_1(VAR_12, &VAR_11, VAR_1, (PVOID*)&VAR_18, 0, 0);
        if (!VAR_17)
            goto Cleanup;

        FUNC_12(VAR_13, VAR_16);
        FUNC_12(VAR_14, VAR_15);

        for (VAR_19 = VAR_9.bmHeight - 1; VAR_19 >= 0; VAR_19--)
        {
            for (VAR_20 = 0; VAR_20 < VAR_9.bmWidth; VAR_20++)
            {
                COLORREF VAR_21 = FUNC_8(VAR_14, VAR_20, VAR_19) & 0xFF;
                COLORREF VAR_22 = FUNC_8(VAR_13, VAR_20, VAR_19);
                DWORD VAR_23, VAR_24, VAR_25;

                VAR_23 = FUNC_9(VAR_22) * VAR_21 / 255;
                VAR_24 = FUNC_6(VAR_22) * VAR_21 / 255;
                VAR_25 = FUNC_4(VAR_22) * VAR_21 / 255;

                *VAR_18++ = VAR_25 | VAR_24 << 8 | VAR_23 << 16 | VAR_21 << 24;
            }
        }

        VAR_7->hBitmap = VAR_17;
        VAR_7->cxSource = VAR_9.bmWidth;
        VAR_7->cySource = VAR_9.bmHeight;
        VAR_7->iBits = VAR_9.bmBitsPixel;
        VAR_7->iPlanes = VAR_9.bmPlanes;
    }

Cleanup:
    FUNC_3(VAR_15);
    FUNC_3(VAR_16);
    FUNC_2(VAR_14);
    FUNC_2(VAR_13);
}

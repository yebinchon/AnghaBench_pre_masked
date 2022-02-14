
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int biSize; int biBitCount; int biPlanes; int biWidth; int biHeight; } ;
struct TYPE_5__ {TYPE_1__ bmiHeader; } ;
typedef int RGBQUAD ;
typedef TYPE_2__* PBITMAPINFO ;
typedef int INT ;
typedef int * HFONT ;
typedef int HDC ;
typedef int * HBITMAP ;
typedef int DWORD ;
typedef int CHAR ;
typedef int BmpInfo ;
typedef int BYTE ;
typedef int BOOL ;
typedef int BITMAPINFOHEADER ;
typedef int BITMAPINFO ;


 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int ,int ,int *,TYPE_2__*,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int,int,int) ;
 int * FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_2 ;
 int FUNC_8 (int ,int ,int ,int *,int) ;
 int VAR_3 ;
 int FUNC_9 (int **,int) ;
 int FUNC_10 (int ,char*,int ) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_11(HDC VAR_5, HFONT VAR_6, INT VAR_7, INT VAR_8, CHAR VAR_9, DWORD VAR_10[])
{
    BOOL VAR_11 = VAR_0;
    HBITMAP VAR_12;
    HFONT VAR_13;
    HBITMAP VAR_14 = ((void*)0);
    BYTE VAR_15[sizeof(BITMAPINFO) + sizeof(RGBQUAD)];
    PBITMAPINFO VAR_16 = (PBITMAPINFO)&VAR_15;

    VAR_14 = FUNC_0(VAR_5, VAR_3, VAR_1);
    if (!VAR_14)
    {
        FUNC_10(VAR_4, "CreateCompatibleBitmap failed with error %d!\n", FUNC_3());
        goto Cleanup;
    }

    VAR_12 = FUNC_5(VAR_5, VAR_14);
    VAR_13 = FUNC_5(VAR_5, VAR_6);
    FUNC_6(VAR_5, FUNC_4(0, 0, 0));
    FUNC_7(VAR_5, FUNC_4(255, 255, 255));
    FUNC_8(VAR_5, VAR_7, VAR_8, &VAR_9, 1);






    FUNC_9(&VAR_15, sizeof(VAR_15));
    VAR_16->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_16->bmiHeader.biHeight = -VAR_1;
    VAR_16->bmiHeader.biWidth = VAR_3;
    VAR_16->bmiHeader.biBitCount = 1;
    VAR_16->bmiHeader.biPlanes = 1;

    VAR_11 = VAR_2;

    if (!FUNC_2(VAR_5, VAR_14, 0, VAR_1, VAR_10, VAR_16, 0))
    {
        FUNC_10(VAR_4, "GetDIBits failed with error %d!\n", FUNC_3());
        VAR_11 = VAR_0;
    }

    FUNC_5(VAR_5, VAR_12);
    FUNC_5(VAR_5, VAR_13);

Cleanup:
    if (VAR_14)
        FUNC_1(VAR_14);

    return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int biSize; int biHeight; int biWidth; int biBitCount; int biPlanes; scalar_t__ biClrUsed; int biCompression; } ;
struct TYPE_5__ {TYPE_1__ bmiHeader; } ;
typedef int * HRGN ;
typedef int * HDC ;
typedef int * HBITMAP ;
typedef int GpStatus ;
typedef int GpSolidFill ;
typedef int GpGraphics ;
typedef int GpBrush ;
typedef TYPE_2__ BITMAPINFO ;
typedef int ARGB ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int *,TYPE_2__*,int ,void**,int *,int ) ;
 int * FUNC_2 (int ,int ,int,int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int ,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ,int ,int,int) ;
 int FUNC_10 (int *,int,int) ;
 int VAR_2 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int,int,int *) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int *,int ,int) ;
 int FUNC_16 (int ,char*) ;

__attribute__((used)) static void FUNC_17(void)
{
    GpStatus VAR_3;
    HDC VAR_4;
    HBITMAP VAR_5;
    GpGraphics *VAR_6;
    ULONG *VAR_7;
    BITMAPINFO VAR_8;
    HRGN VAR_9;
    GpBrush *VAR_10;

    VAR_4 = FUNC_0(0);
    FUNC_16(VAR_4 != ((void*)0), "CreateCompatibleDC failed\n");
    VAR_8.bmiHeader.biSize = sizeof(VAR_8.bmiHeader);
    VAR_8.bmiHeader.biHeight = -5;
    VAR_8.bmiHeader.biWidth = 5;
    VAR_8.bmiHeader.biBitCount = 32;
    VAR_8.bmiHeader.biPlanes = 1;
    VAR_8.bmiHeader.biCompression = VAR_0;
    VAR_8.bmiHeader.biClrUsed = 0;

    VAR_5 = FUNC_1(VAR_4, &VAR_8, VAR_1, (void**)&VAR_7, ((void*)0), 0);
    FUNC_16(VAR_5 != ((void*)0), "CreateDIBSection failed\n");

    FUNC_12(VAR_4, VAR_5);

    FUNC_13(VAR_4, 1, 1, ((void*)0));

    VAR_9 = FUNC_2(0, 0, 3, 3);
    FUNC_11(VAR_4, VAR_9);
    FUNC_4(VAR_9);

    VAR_3 = FUNC_6((ARGB)0xffaaaaaa, (GpSolidFill**)&VAR_10);
    FUNC_14(VAR_2, VAR_3);

    VAR_3 = FUNC_5(VAR_4, &VAR_6);
    FUNC_14(VAR_2, VAR_3);

    FUNC_15(VAR_7, 0, sizeof(*VAR_7) * 25);
    VAR_3 = FUNC_9(VAR_6, VAR_10, 0, 0, 4, 4);
    FUNC_14(VAR_2, VAR_3);

    FUNC_14(0, VAR_7[0]);
    FUNC_14(0xffaaaaaa, VAR_7[6]);
    FUNC_14(0xffaaaaaa, VAR_7[12]);
    FUNC_14(0, VAR_7[18]);
    FUNC_14(0, VAR_7[24]);

    FUNC_13(VAR_4, 0, 0, ((void*)0));
    FUNC_10(VAR_4, 2, 2);

    FUNC_15(VAR_7, 0, sizeof(*VAR_7) * 25);
    VAR_3 = FUNC_9(VAR_6, VAR_10, 0, 0, 4, 4);
    FUNC_14(VAR_2, VAR_3);

    FUNC_14(0, VAR_7[0]);
    FUNC_14(0xffaaaaaa, VAR_7[6]);
    FUNC_14(0xffaaaaaa, VAR_7[12]);
    FUNC_14(0, VAR_7[18]);
    FUNC_14(0, VAR_7[24]);

    FUNC_8(VAR_6);

    FUNC_7(VAR_10);

    FUNC_3(VAR_4);
    FUNC_4(VAR_5);
}

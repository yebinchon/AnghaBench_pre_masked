
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_20__ {int bmBits; int bmBitsPixel; int bmPlanes; int bmWidthBytes; int bmHeight; int bmWidth; int bmType; } ;
struct TYPE_19__ {int biWidth; int biHeight; } ;
struct TYPE_15__ {int member_1; int member_2; int member_3; int member_0; } ;
struct TYPE_14__ {TYPE_3__ member_0; } ;
struct TYPE_13__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_7; int member_8; int member_9; int member_10; int member_6; int member_5; } ;
struct TYPE_18__ {TYPE_7__ bmiHeader; TYPE_2__ member_1; TYPE_1__ member_0; } ;
struct TYPE_17__ {int member_1; int member_2; int member_3; int member_0; } ;
struct TYPE_16__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_6; int member_7; int member_8; int member_9; int member_10; int member_5; } ;
typedef TYPE_6__* PVOID ;
typedef int * HDC ;
typedef int * HBITMAP ;
typedef int DIBSECTION ;
typedef int BYTE ;
typedef TYPE_7__ BITMAPINFOHEADER ;
typedef TYPE_6__ BITMAPINFO ;
typedef TYPE_9__ BITMAP ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int,int *,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *,TYPE_7__*,int,int*,TYPE_6__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int,TYPE_9__*) ;
 int * FUNC_7 (int) ;
 int VAR_6 ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int) ;
 int VAR_7 ;
 int *** VAR_8 ;
 int FUNC_10 (int ***,int,int) ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int ) ;

void
FUNC_15(void)
{
    HBITMAP VAR_9, VAR_10;
    HDC VAR_11;
    BITMAPINFO VAR_12 =
        {{sizeof(BITMAPINFOHEADER), 4, 4, 1, 8, VAR_0, 0, 1, 1, 1, 0}, {{0,1,2,3}}};
    BYTE VAR_13[10] = {0,1,2,3,4,5,6,7,8,9};
    BITMAP VAR_14;
    struct
    {
        BITMAPINFOHEADER bmiHeader;
        WORD wColors[4];
    } VAR_15 =
    {
        {sizeof(BITMAPINFOHEADER), 8, 2, 1, 8, VAR_1, 20, 1, 1, 4, 0},
        {0, 1, 2, 7}
    };
    BYTE VAR_16[] = {4,0, 0,2,0,1,0,2,3,1, 2,1, 2,2, 1,3,1,0,1,2, };

    VAR_11 = FUNC_1(0);
    if (VAR_11 == ((void*)0))
    {
        FUNC_11(0, "CreateCompatibleDC failed. Skipping tests!\n");
        return;
    }

    FUNC_9(0xbadbad00);
    VAR_9 = FUNC_2(VAR_11, ((void*)0), VAR_2, VAR_13, ((void*)0), VAR_5);
    FUNC_11(VAR_9 == 0, "CreateDIBitmap should fail.\n");
    FUNC_12(FUNC_5(), 0xbadbad00);

    VAR_9 = FUNC_2(VAR_11, ((void*)0), VAR_2, VAR_13, &VAR_12, VAR_5);
    FUNC_11(VAR_9 != 0, "CreateDIBitmap failed.\n");

    FUNC_13(FUNC_6(VAR_9, sizeof(DIBSECTION), &VAR_14), sizeof(BITMAP));
    FUNC_12(VAR_14.bmType, 0);
    FUNC_12(VAR_14.bmWidth, 4);
    FUNC_12(VAR_14.bmHeight, 4);
    FUNC_12(VAR_14.bmWidthBytes, 4);
    FUNC_12(VAR_14.bmPlanes, 1);
    FUNC_12(VAR_14.bmBitsPixel, 8);
    FUNC_14(VAR_14.bmBits, 0);

    VAR_10 = FUNC_8(VAR_11, VAR_9);
    FUNC_11(VAR_10 != ((void*)0), "Couldn't select the bitmap.\n");


    FUNC_10(VAR_8, 0x77, sizeof(*VAR_8));
    FUNC_13(FUNC_0(VAR_7, 0, 0, 4, 4, VAR_11, 0, 0, VAR_6), 1);
    FUNC_13((*VAR_8)[0][0], 0x20100);
    FUNC_13((*VAR_8)[0][1], 0x20100);
    FUNC_13((*VAR_8)[0][2], 0x20100);
    FUNC_13((*VAR_8)[0][3], 0x20100);

    FUNC_8(VAR_11, VAR_10);
    FUNC_4(VAR_9);

    VAR_9 = FUNC_2(VAR_11, ((void*)0), VAR_2 | VAR_3, VAR_13, &VAR_12, VAR_4);
    FUNC_11(VAR_9 != 0, "CreateDIBitmap failed.\n");

    FUNC_13(FUNC_6(VAR_9, sizeof(DIBSECTION), &VAR_14), sizeof(BITMAP));
    FUNC_12(VAR_14.bmType, 0);
    FUNC_12(VAR_14.bmWidth, 4);
    FUNC_12(VAR_14.bmHeight, 4);
    FUNC_12(VAR_14.bmWidthBytes, 4);
    FUNC_12(VAR_14.bmPlanes, 1);
    FUNC_12(VAR_14.bmBitsPixel, 8);
    FUNC_14(VAR_14.bmBits, 0);


    VAR_9 = FUNC_2(VAR_11, &VAR_15.bmiHeader, VAR_2 | VAR_3, VAR_13, &VAR_12, VAR_4);
    FUNC_11(VAR_9 != 0, "CreateDIBitmap failed.\n");

    FUNC_13(FUNC_6(VAR_9, sizeof(DIBSECTION), &VAR_14), sizeof(BITMAP));
    FUNC_12(VAR_14.bmType, 0);
    FUNC_12(VAR_14.bmWidth, 4);
    FUNC_12(VAR_14.bmHeight, 4);
    FUNC_12(VAR_14.bmWidthBytes, 4);
    FUNC_12(VAR_14.bmPlanes, 1);
    FUNC_12(VAR_14.bmBitsPixel, 8);
    FUNC_14(VAR_14.bmBits, 0);

    VAR_10 = FUNC_8(VAR_11, VAR_9);
    FUNC_11(VAR_10 != ((void*)0), "Couldn't select the bitmap.\n");


    FUNC_10(VAR_8, 0x77, sizeof(*VAR_8));
    FUNC_13(FUNC_0(VAR_7, 0, 0, 4, 4, VAR_11, 0, 0, VAR_6), 1);
    FUNC_13((*VAR_8)[0][0], 0);
    FUNC_13((*VAR_8)[0][1], 0);
    FUNC_13((*VAR_8)[0][2], 0);
    FUNC_13((*VAR_8)[0][3], 0);

    FUNC_8(VAR_11, VAR_10);
    FUNC_4(VAR_9);

    VAR_9 = FUNC_2(VAR_11, ((void*)0), VAR_2, VAR_16, (PVOID)&VAR_15, VAR_4);
    FUNC_11(VAR_9 == 0, "CreateDIBitmap should fail.\n");
    VAR_9 = FUNC_2(VAR_11, ((void*)0), VAR_3 | VAR_2, VAR_16, (PVOID)&VAR_15, VAR_4);
    FUNC_11(VAR_9 == 0, "CreateDIBitmap should fail.\n");


    VAR_12.bmiHeader.biWidth = 0;
    VAR_12.bmiHeader.biHeight = 4;
    VAR_9 = FUNC_2(VAR_11, &VAR_12.bmiHeader, VAR_2, VAR_13, &VAR_12, VAR_4);
    FUNC_11(VAR_9 == FUNC_7(21), "CreateDIBitmap didn't return the default bitmap.\n");
    VAR_12.bmiHeader.biWidth = 23;
    VAR_12.bmiHeader.biHeight = 0;
    VAR_9 = FUNC_2(VAR_11, &VAR_12.bmiHeader, VAR_2, VAR_13, &VAR_12, VAR_4);
    FUNC_11(VAR_9 == FUNC_7(21), "CreateDIBitmap didn't return the default bitmap.\n");

    FUNC_3(VAR_11);
}

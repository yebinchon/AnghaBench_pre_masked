
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int depths ;
typedef int bm ;
struct TYPE_4__ {int bmType; int bmWidth; int bmHeight; int bmWidthBytes; int bmBitsPixel; int bmPlanes; int bmBits; } ;
typedef int INT ;
typedef scalar_t__ HDC ;
typedef scalar_t__ HBITMAP ;
typedef int DWORD ;
typedef TYPE_1__ BITMAP ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int,int,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (TYPE_1__*,int,int) ;
 int FUNC_12 (int,char*,...) ;

__attribute__((used)) static void FUNC_13(void)
{
    HDC VAR_2;
    HBITMAP VAR_3, VAR_4;
    INT VAR_5, VAR_6, VAR_7;
    DWORD VAR_8[] = {8, 15, 16, 24, 32};
    BITMAP VAR_9;
    DWORD VAR_10;

    VAR_2 = FUNC_5(0);
    FUNC_12(VAR_2 != 0, "GetDC(0) failed\n");
    VAR_3 = FUNC_1(VAR_2, 10, 10);
    FUNC_12(VAR_3 != 0, "CreateCompatibleBitmap failed\n");

    VAR_4 = FUNC_9(VAR_2, VAR_3);
    FUNC_12(VAR_4 == 0, "SelectObject should fail\n");

    FUNC_4(VAR_3);
    FUNC_8(0, VAR_2);

    VAR_2 = FUNC_2(0);
    FUNC_12(VAR_2 != 0, "GetDC(0) failed\n");
    VAR_3 = FUNC_1(VAR_2, 10, 10);
    FUNC_12(VAR_3 != 0, "CreateCompatibleBitmap failed\n");

    VAR_4 = FUNC_9(VAR_2, VAR_3);
    FUNC_12(VAR_4 != 0, "SelectObject failed\n");
    VAR_4 = FUNC_9(VAR_2, VAR_4);
    FUNC_12(VAR_4 == VAR_3, "SelectObject failed\n");

    FUNC_4(VAR_3);


    VAR_5 = FUNC_6(VAR_2, VAR_1);
    VAR_6 = 1;

    VAR_3 = FUNC_0(10, 10, VAR_5, VAR_6, ((void*)0));
    FUNC_12(VAR_3 != 0, "CreateBitmap failed\n");

    VAR_4 = FUNC_9(VAR_2, VAR_3);
    FUNC_12(VAR_4 != 0, "SelectObject failed\n");
    VAR_4 = FUNC_9(VAR_2, VAR_4);
    FUNC_12(VAR_4 == VAR_3, "SelectObject failed\n");

    FUNC_4(VAR_3);

    for(VAR_7 = 0; VAR_7 < sizeof(VAR_8)/sizeof(VAR_8[0]); VAR_7++) {

        VAR_5 = FUNC_6(VAR_2, VAR_1);
        VAR_6 = FUNC_6(VAR_2, VAR_0);

        VAR_3 = FUNC_0(10, 10, VAR_5, VAR_8[VAR_7], ((void*)0));
        FUNC_12(VAR_3 != 0, "CreateBitmap failed\n");

        VAR_4 = FUNC_9(VAR_2, VAR_3);
        if(VAR_8[VAR_7] == VAR_6 ||
          (VAR_6 == 16 && VAR_8[VAR_7] == 15)
          ) {
            FUNC_12(VAR_4 != 0, "SelectObject failed, BITSPIXEL: %d, created depth: %d\n", VAR_6, VAR_8[VAR_7]);
            FUNC_9(VAR_2, VAR_4);
        } else {
            FUNC_12(VAR_4 == 0, "SelectObject should fail. BITSPIXELS: %d, created depth: %d\n", VAR_6, VAR_8[VAR_7]);
        }

        FUNC_11(&VAR_9, 0xAA, sizeof(VAR_9));
        VAR_10 = FUNC_7(VAR_3, sizeof(VAR_9), &VAR_9);
        FUNC_12(VAR_10 == sizeof(VAR_9), "GetObject returned %d\n", VAR_10);
        FUNC_12(VAR_9.bmType == 0, "wrong bmType %d\n", VAR_9.bmType);
        FUNC_12(VAR_9.bmWidth == 10, "wrong bmWidth %d\n", VAR_9.bmWidth);
        FUNC_12(VAR_9.bmHeight == 10, "wrong bmHeight %d\n", VAR_9.bmHeight);
        FUNC_12(VAR_9.bmWidthBytes == FUNC_10(VAR_9.bmWidth, VAR_9.bmBitsPixel), "wrong bmWidthBytes %d\n", VAR_9.bmWidthBytes);
        FUNC_12(VAR_9.bmPlanes == VAR_5, "wrong bmPlanes %u\n", VAR_9.bmPlanes);
        if(VAR_8[VAR_7] == 15) {
            FUNC_12(VAR_9.bmBitsPixel == 16, "wrong bmBitsPixel %d(15 bpp special)\n", VAR_9.bmBitsPixel);
        } else {
            FUNC_12(VAR_9.bmBitsPixel == VAR_8[VAR_7], "wrong bmBitsPixel %d\n", VAR_9.bmBitsPixel);
        }
        FUNC_12(!VAR_9.bmBits, "wrong bmBits %p\n", VAR_9.bmBits);

        FUNC_4(VAR_3);
    }

    FUNC_3(VAR_2);
}

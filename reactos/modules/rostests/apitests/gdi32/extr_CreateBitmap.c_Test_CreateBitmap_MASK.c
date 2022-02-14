
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bitmap ;
typedef int ULONG ;
struct TYPE_3__ {int bmType; int bmWidth; int bmHeight; int bmWidthBytes; int bmPlanes; int bmBitsPixel; int bmBits; } ;
typedef scalar_t__ HBITMAP ;
typedef TYPE_1__ BITMAP ;


 scalar_t__ FUNC_0 (int,int,int,int,int *) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7()
{
    HBITMAP VAR_1;
    BITMAP VAR_2;
    ULONG VAR_3, VAR_4, VAR_5;
    int VAR_6, VAR_7, VAR_8;

    VAR_1 = FUNC_0(0, 0, 0, 0, ((void*)0));
    FUNC_4(VAR_1 != 0, "should get a 1x1 bitmap\n");
    FUNC_4(VAR_1 == FUNC_3(VAR_0), "\n");
    FUNC_5(FUNC_2(VAR_1, sizeof(VAR_2), &VAR_2), sizeof(BITMAP));
    FUNC_5(VAR_2.bmType, 0);
    FUNC_5(VAR_2.bmWidth, 1);
    FUNC_5(VAR_2.bmHeight, 1);
    FUNC_5(VAR_2.bmWidthBytes, 2);
    FUNC_5(VAR_2.bmPlanes, 1);
    FUNC_5(VAR_2.bmBitsPixel, 1);
    FUNC_6(VAR_2.bmBits, 0);
    FUNC_1(VAR_1);


    VAR_1 = FUNC_0(1, 2, 1, 33, ((void*)0));
    FUNC_4(VAR_1 == 0, "should fail\n");

    for (VAR_7 = 0; VAR_7 <= 32; VAR_7++)
    {


        if (VAR_7 <= 1) VAR_8 = 1;
        else if(VAR_7 <= 4) VAR_8 = 4;
        else if(VAR_7 <= 8) VAR_8 = 8;
        else if(VAR_7 <= 16) VAR_8 = 16;
        else if(VAR_7 <= 24) VAR_8 = 24;
        else if(VAR_7 <= 32) VAR_8 = 32;



        VAR_1 = FUNC_0(1, 2, 1, VAR_7, ((void*)0));
        FUNC_4(VAR_1 != 0, "should get a 1x2 bitmap\n");
        VAR_6 = FUNC_2(VAR_1, sizeof(VAR_2), &VAR_2);
        FUNC_4(VAR_6 > 0, "result = %d\n", VAR_6);
        FUNC_4(VAR_2.bmType == 0, "bmType = %ld\n", VAR_2.bmType);
        FUNC_4(VAR_2.bmWidth == 1, "bmWidth = %ld\n", VAR_2.bmWidth);
        FUNC_4(VAR_2.bmHeight == 2, "bmHeight = %ld\n", VAR_2.bmHeight);
        FUNC_4(VAR_2.bmPlanes == 1, "bmPlanes = %d\n", VAR_2.bmPlanes);
        FUNC_4(VAR_2.bmBitsPixel == VAR_8, "bmBitsPixel = %d ExpectedBitsPixel= %d \n", VAR_2.bmBitsPixel, VAR_8);
        FUNC_4(VAR_2.bmBits == 0, "bmBits = %p\n", VAR_2.bmBits);
        FUNC_1(VAR_1);
    }

    VAR_1 = FUNC_0(1, 2, 1, 1, ((void*)0));
    FUNC_4(VAR_1 != 0, "should get a 1x2 bitmap\n");
    FUNC_5(FUNC_2(VAR_1, sizeof(VAR_2), &VAR_2), sizeof(BITMAP));
    FUNC_5(VAR_2.bmType, 0);
    FUNC_5(VAR_2.bmWidth, 1);
    FUNC_5(VAR_2.bmHeight, 2);
    FUNC_5(VAR_2.bmWidthBytes, 2);
    FUNC_5(VAR_2.bmPlanes, 1);
    FUNC_5(VAR_2.bmBitsPixel, 1);
    FUNC_6(VAR_2.bmBits, 0);
    FUNC_1(VAR_1);

    for (VAR_4 = 0; VAR_4 <= 32; VAR_4++)
    {


        if (VAR_4 <= 1) VAR_5 = 1;
        else if (VAR_4 <= 4) VAR_5 = 4;
        else if (VAR_4 <= 8) VAR_5 = 8;
        else if (VAR_4 <= 16) VAR_5 = 16;
        else if (VAR_4 <= 24) VAR_5 = 24;
        else if (VAR_4 <= 32) VAR_5 = 32;

        VAR_1 = FUNC_0(1, 2, 1, VAR_4, ((void*)0));
        FUNC_4(VAR_1 != 0, "should get a 1x2 bitmap %ld\n", VAR_4);
        FUNC_5(FUNC_2(VAR_1, sizeof(VAR_2), &VAR_2), sizeof(BITMAP));


        VAR_3 = ((((ULONG)VAR_2.bmWidth) * ((ULONG)VAR_2.bmBitsPixel) + 15) & ~15) >> 3;

        FUNC_5(VAR_2.bmType, 0);
        FUNC_5(VAR_2.bmWidth, 1);
        FUNC_5(VAR_2.bmHeight, 2);
        FUNC_5(VAR_2.bmPlanes, 1);
        FUNC_5(VAR_2.bmBitsPixel, VAR_5);
        FUNC_5(VAR_2.bmWidthBytes, VAR_3);
        FUNC_6(VAR_2.bmBits, 0);
        FUNC_1(VAR_1);

    }

    VAR_1 = FUNC_0(1, 2, 1, 33, ((void*)0));
    FUNC_4(VAR_1 == 0, "Expected failure for 33 bpp\n");



}

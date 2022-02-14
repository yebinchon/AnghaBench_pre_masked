
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_9__ {int biSizeImage; } ;
struct TYPE_8__ {int member_0; int member_3; int member_5; int member_7; int member_8; int member_9; int member_10; int member_11; int member_12; int member_13; int member_14; int member_15; int member_16; int member_18; int member_19; int member_17; int member_6; int member_4; int member_2; int member_1; } ;
struct TYPE_7__ {int member_1; int member_2; int member_3; int member_0; } ;
struct TYPE_6__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_6; int member_7; int member_8; int member_9; int member_10; int member_5; } ;
typedef int PVOID ;
typedef int HDC ;
typedef scalar_t__ HBITMAP ;
typedef int BYTE ;
typedef TYPE_4__ BITMAPINFOHEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*,int ,int**,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int) ;

void FUNC_6()
{
    struct
    {
        BITMAPINFOHEADER bmiHeader;
        WORD wColors[4];
        BYTE ajBuffer[20];
    } VAR_3 =
    {
        {sizeof(BITMAPINFOHEADER), 4, 4, 1, 8, VAR_0, 20, 1, 1, 4, 0},
        {0, 1, 2, 7},
        {4,0, 0,2,0,1,0,2,3,1, 2,1, 2,2, 1,3,1,0,1,2, },
    };
    HDC VAR_4;
    HBITMAP VAR_5;

    VAR_4 = FUNC_0(0);

    FUNC_3(0xbadbad00);
    VAR_5 = FUNC_1(VAR_4, &VAR_3.bmiHeader, VAR_1, &VAR_3.ajBuffer, (PVOID)&VAR_3, VAR_2);
    FUNC_4(VAR_5 != 0, "CreateDIBitmap failed.\n");
    FUNC_5(0xbadbad00);
    FUNC_2(VAR_5);

    VAR_3.bmiHeader.biSizeImage = 2;
    VAR_5 = FUNC_1(VAR_4, &VAR_3.bmiHeader, VAR_1, &VAR_3.ajBuffer, (PVOID)&VAR_3, VAR_2);
    FUNC_4(VAR_5 != 0, "CreateDIBitmap failed.\n");
    FUNC_5(0xbadbad00);
    FUNC_2(VAR_5);

    VAR_3.bmiHeader.biSizeImage = 1;
    VAR_5 = FUNC_1(VAR_4, &VAR_3.bmiHeader, VAR_1, &VAR_3.ajBuffer, (PVOID)&VAR_3, VAR_2);
    FUNC_4(VAR_5 != 0, "CreateDIBitmap failed.\n");
    FUNC_5(0xbadbad00);
    FUNC_2(VAR_5);

    VAR_3.bmiHeader.biSizeImage = 0;
    VAR_5 = FUNC_1(VAR_4, &VAR_3.bmiHeader, VAR_1, &VAR_3.ajBuffer, (PVOID)&VAR_3, VAR_2);
    FUNC_4(VAR_5 == 0, "CreateDIBitmap succeeded, expected failure\n");
    FUNC_5(0xbadbad00);


    VAR_3.bmiHeader.biSizeImage = 20;
    VAR_3.ajBuffer[0] = 17;
    VAR_5 = FUNC_1(VAR_4, &VAR_3.bmiHeader, VAR_1, &VAR_3.ajBuffer, (PVOID)&VAR_3, VAR_2);
    FUNC_4(VAR_5 != 0, "CreateDIBitmap failed\n");
    FUNC_5(0xbadbad00);
    FUNC_2(VAR_5);


}

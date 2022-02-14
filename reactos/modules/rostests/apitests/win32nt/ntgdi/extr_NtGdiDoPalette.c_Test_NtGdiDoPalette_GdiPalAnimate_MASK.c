
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; int member_2; int member_3; int peRed; int peGreen; int peBlue; int peFlags; } ;
typedef TYPE_1__ PALETTEENTRY ;
typedef int HPALETTE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int,TYPE_1__*,int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int) ;

void
FUNC_8(void)
{
    HPALETTE VAR_7;
    PALETTEENTRY VAR_8[5] = {
        {0,0,0,0},
        {0xff,0xff,0xff,0},
        {0x33,0x66,0x99,0},
        {0x25,0x84,0x14,0},
        {0x12,0x34,0x56,0x11}};
    PALETTEENTRY VAR_9[5];


    FUNC_5(VAR_1);
    FUNC_7(FUNC_4(FUNC_3(VAR_0), 0, 1, VAR_8, VAR_3, VAR_2), 0);
    FUNC_7(FUNC_2(), VAR_1);



    VAR_7 = FUNC_0();
    FUNC_7(FUNC_4(VAR_7, 0, 1, ((void*)0), VAR_3, VAR_6), 0);
    FUNC_7(FUNC_4(VAR_7, 0, 1, ((void*)0), VAR_3, VAR_2), 0);
    FUNC_1(VAR_7);


    VAR_7 = FUNC_0();
    FUNC_7(FUNC_4(VAR_7, 0, 5, VAR_8, VAR_3, VAR_6), 2);
    FUNC_1(VAR_7);

    VAR_7 = FUNC_0();
    FUNC_7(FUNC_4(VAR_7, 1, 5, VAR_8, VAR_3, VAR_6), 2);
    FUNC_1(VAR_7);

    VAR_7 = FUNC_0();
    FUNC_7(FUNC_4(VAR_7, 2, 5, VAR_8, VAR_3, VAR_6), 1);
    FUNC_1(VAR_7);

    VAR_7 = FUNC_0();
    FUNC_7(FUNC_4(VAR_7, 3, 5, VAR_8, VAR_3, VAR_6), 1);
    FUNC_1(VAR_7);

    VAR_7 = FUNC_0();
    FUNC_7(FUNC_4(VAR_7, 4, 5, VAR_8, VAR_3, VAR_6), 0);
    FUNC_1(VAR_7);

    VAR_7 = FUNC_0();
    FUNC_7(FUNC_4(VAR_7, 5, 5, VAR_8, VAR_3, VAR_6), 0);
    FUNC_1(VAR_7);

    VAR_7 = FUNC_0();
    FUNC_7(FUNC_4(VAR_7, 0, 5, VAR_8, VAR_3, VAR_2), 2);
    FUNC_1(VAR_7);

    VAR_7 = FUNC_0();
    FUNC_7(FUNC_4(VAR_7, 3, 5, VAR_8, VAR_3, VAR_2), 1);
    FUNC_1(VAR_7);


    VAR_7 = FUNC_0();
    FUNC_4(VAR_7, 0, 5, VAR_8, VAR_3, VAR_6);
    FUNC_4(VAR_7, 0, 5, VAR_9, VAR_4, VAR_2);
    FUNC_6(VAR_9[0].peRed, 1);
    FUNC_6(VAR_9[0].peGreen, 2);
    FUNC_6(VAR_9[0].peBlue, 3);
    FUNC_6(VAR_9[0].peFlags, 0);
    FUNC_6(VAR_9[1].peRed, VAR_8[1].peRed);
    FUNC_6(VAR_9[1].peGreen, VAR_8[1].peGreen);
    FUNC_6(VAR_9[1].peBlue, VAR_8[1].peBlue);
    FUNC_6(VAR_9[1].peFlags, VAR_8[1].peFlags);
    FUNC_6(VAR_9[2].peRed, 11);
    FUNC_6(VAR_9[2].peGreen, 55);
    FUNC_6(VAR_9[2].peBlue, 77);
    FUNC_6(VAR_9[2].peFlags, VAR_5);
    FUNC_6(VAR_9[3].peRed, VAR_8[3].peRed);
    FUNC_6(VAR_9[3].peGreen, VAR_8[3].peGreen);
    FUNC_6(VAR_9[3].peBlue, VAR_8[3].peBlue);
    FUNC_6(VAR_9[3].peFlags, VAR_8[3].peFlags);
    FUNC_1(VAR_7);

}

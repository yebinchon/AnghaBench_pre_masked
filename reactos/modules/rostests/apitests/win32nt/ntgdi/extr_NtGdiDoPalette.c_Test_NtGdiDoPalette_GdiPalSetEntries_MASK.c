
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int palEntries2 ;
typedef int palEntries ;
struct TYPE_6__ {int member_0; int member_1; int member_2; int member_3; int peFlags; int peBlue; int peGreen; int peRed; } ;
typedef TYPE_1__ PALETTEENTRY ;
typedef scalar_t__ HPALETTE ;
typedef int HDC ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int,int,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;

void
FUNC_11(void)
{
    HDC VAR_6;
    HPALETTE VAR_7, VAR_8;
    PALETTEENTRY VAR_9[5] = {
        {0,0,0,0},
        {0xff,0xff,0xff,0},
        {0x33,0x66,0x99,0},
        {0x25,0x84,0x14,0},
        {0x12,0x34,0x56,0x11}};
    PALETTEENTRY VAR_10[5];

    VAR_7 = FUNC_1();


    FUNC_6(VAR_1);
    FUNC_10(FUNC_4((HPALETTE)23, 0, 1, VAR_9, VAR_4, VAR_5), 0);
    FUNC_10(FUNC_2(), VAR_1);


    FUNC_10(FUNC_4(FUNC_3(VAR_0), 0, 1, VAR_9, VAR_4, VAR_5), 0);
    FUNC_10(FUNC_2(), VAR_1);

    FUNC_10(FUNC_4(VAR_7, 0, 1, VAR_9, VAR_4, VAR_5), 1);
    FUNC_10(FUNC_4(VAR_7, 0, 2, VAR_9, VAR_4, VAR_5), 2);
    FUNC_10(FUNC_4(VAR_7, 0, 3, VAR_9, VAR_4, VAR_5), 3);
    FUNC_10(FUNC_4(VAR_7, 0, 5, VAR_9, VAR_4, VAR_5), 5);
    FUNC_10(FUNC_4(VAR_7, 0, 6, VAR_9, VAR_4, VAR_5), 5);
    FUNC_10(FUNC_4(VAR_7, 3, 6, VAR_9, VAR_4, VAR_5), 2);



    FUNC_4(VAR_7, 0, 5, VAR_9, VAR_4, VAR_5);
    FUNC_7(VAR_10, sizeof(VAR_10));
    FUNC_10(FUNC_4(VAR_7, 0, 5, VAR_10, VAR_4, VAR_2), 5);

    FUNC_9(FUNC_8(VAR_10, VAR_9, sizeof(VAR_9)), 0);


    FUNC_7(VAR_10, sizeof(VAR_10));
    FUNC_10(FUNC_4(VAR_7, 0, 5, VAR_10, VAR_3, VAR_2), 5);
    FUNC_9(FUNC_8(VAR_10, VAR_9, sizeof(VAR_9)), 0);

    FUNC_10(FUNC_4(VAR_7, 0, 4, VAR_10, VAR_4, VAR_5), 4);
    FUNC_10(FUNC_2(), VAR_1);


    VAR_7 = FUNC_1();
    FUNC_4(VAR_7, 0, 5, VAR_9, VAR_4, VAR_5);
    FUNC_4(VAR_7, 0, 5, VAR_10, VAR_3, VAR_2);
    FUNC_9(VAR_10[0].peRed, 0);
    FUNC_9(VAR_10[0].peGreen, 0);
    FUNC_9(VAR_10[0].peBlue, 0);
    FUNC_9(VAR_10[0].peFlags, 0);





    VAR_6 = FUNC_0(((void*)0));
    VAR_8 = FUNC_5(VAR_6, VAR_7, 0);
    FUNC_10(FUNC_4(VAR_7, 0, 4, VAR_9, VAR_4, VAR_5), 4);
    FUNC_5(VAR_6, VAR_8, 0);


    FUNC_10(FUNC_4(VAR_7, 0, 1, ((void*)0), VAR_3, VAR_5), 0);

}

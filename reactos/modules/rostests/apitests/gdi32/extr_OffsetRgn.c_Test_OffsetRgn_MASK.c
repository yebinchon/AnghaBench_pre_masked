
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HRGN ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8()
{
    HRGN VAR_7, VAR_8;
    HDC VAR_9;

    VAR_7 = FUNC_2(0, 0, 0, 0);
    FUNC_6(VAR_7 != ((void*)0), "CreateRectRgn failed\n");
    FUNC_7(FUNC_5(VAR_7, VAR_2 + 10, 10), VAR_3);
    FUNC_7(FUNC_5(VAR_7, 0xF000000, 0xF000000), VAR_3);
    FUNC_3(VAR_7);

    VAR_7 = FUNC_2(0, 0, 100, 100);
    FUNC_6(VAR_7 != ((void*)0), "CreateRectRgn failed\n");
    FUNC_7(FUNC_5(VAR_7, 10, 10), VAR_6);
    FUNC_7(FUNC_5(VAR_7, 0x8000000 - 110, 10), VAR_1);
    FUNC_7(FUNC_5(VAR_7, 0x8000000 - 111, 10), VAR_6);
    FUNC_3(VAR_7);

    VAR_7 = FUNC_2(0, 0, 100, 100);
    FUNC_6(VAR_7 != ((void*)0), "CreateRectRgn failed\n");
    FUNC_7(FUNC_5(VAR_7, -10, 10), VAR_6);
    FUNC_7(FUNC_5(VAR_7, -(0x8000000 - 9), 10), VAR_1);
    FUNC_7(FUNC_5(VAR_7, -(0x8000000 - 10), 10), VAR_6);
    FUNC_3(VAR_7);

    VAR_7 = FUNC_2(0, 0, 10, 10);
    VAR_8 = FUNC_2(1000, 20, 1010, 30);
    FUNC_7(FUNC_0(VAR_7, VAR_7, VAR_8, VAR_4), VAR_0);
    FUNC_7(FUNC_5(VAR_7, 0x8000000 - 100, 10), VAR_1);
    FUNC_7(FUNC_0(VAR_7, VAR_7, VAR_8, VAR_5), VAR_6);
    FUNC_3(VAR_8);
    VAR_8 = FUNC_2(0, 0, 10, 10);
    FUNC_7(FUNC_0(VAR_7, VAR_7, VAR_8, VAR_5), VAR_3);

    VAR_7 = FUNC_2(0, 0, 0, 0);
    VAR_9 = FUNC_1(((void*)0));
    FUNC_7(FUNC_4(VAR_9, VAR_7), 0);
    FUNC_7(FUNC_5(VAR_7, 10, 10), VAR_3);

}

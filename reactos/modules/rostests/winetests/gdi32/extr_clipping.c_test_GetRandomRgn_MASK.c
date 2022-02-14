
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int top; int left; scalar_t__ bottom; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef scalar_t__ HWND ;
typedef int HRGN ;
typedef int HDC ;


 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,char*,char*,int,int ,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 () ;
 int VAR_0 ;
 int FUNC_10 (int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ,int ) ;
 int FUNC_13 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*,int,int,int,int) ;
 int FUNC_16 (scalar_t__,int ,int ,int ,scalar_t__,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_17 (int,char*,...) ;
 int FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_19(void)
{
    HWND VAR_4 = FUNC_1(0,"BUTTON","test",VAR_3|VAR_2,0,0,100,100,FUNC_6(),0,0,0);
    HDC VAR_5;
    HRGN VAR_6 = FUNC_0(0, 0, 0, 0);
    int VAR_7;
    RECT VAR_8, VAR_9;
    RECT VAR_10, VAR_11;

    FUNC_17( VAR_4 != 0, "CreateWindow failed\n" );

    FUNC_15(&VAR_11, 400, 300, 500, 400);
    FUNC_16(VAR_4, VAR_0, VAR_11.left, VAR_11.top,
                 VAR_11.right - VAR_11.left, VAR_11.bottom - VAR_11.top, 0 );
    VAR_5 = FUNC_5(VAR_4);

    VAR_7 = FUNC_7(VAR_5, VAR_6, 1);
    FUNC_17(VAR_7 == 0, "GetRandomRgn rets %d\n", VAR_7);
    VAR_7 = FUNC_7(VAR_5, VAR_6, 2);
    FUNC_17(VAR_7 == 0, "GetRandomRgn rets %d\n", VAR_7);
    VAR_7 = FUNC_7(VAR_5, VAR_6, 3);
    FUNC_17(VAR_7 == 0, "GetRandomRgn rets %d\n", VAR_7);


    FUNC_15(&VAR_8, 20, 20, 80, 80);
    FUNC_10(VAR_5, VAR_8.left, VAR_8.top, VAR_8.right, VAR_8.bottom);

    VAR_7 = FUNC_7(VAR_5, VAR_6, 1);
    FUNC_17(VAR_7 != 0, "GetRandomRgn rets %d\n", VAR_7);
    FUNC_8(VAR_6, &VAR_10);
    FUNC_17(FUNC_4(&VAR_8, &VAR_10), "GetRandomRgn %s\n", FUNC_18(&VAR_10));

    VAR_7 = FUNC_7(VAR_5, VAR_6, 2);
    FUNC_17(VAR_7 == 0, "GetRandomRgn rets %d\n", VAR_7);

    VAR_7 = FUNC_7(VAR_5, VAR_6, 3);
    FUNC_17(VAR_7 != 0, "GetRandomRgn rets %d\n", VAR_7);
    FUNC_8(VAR_6, &VAR_10);
    FUNC_17(FUNC_4(&VAR_8, &VAR_10), "GetRandomRgn %s\n", FUNC_18(&VAR_10));


    FUNC_14(VAR_5);

    VAR_7 = FUNC_7(VAR_5, VAR_6, 1);
    FUNC_17(VAR_7 == 0, "GetRandomRgn rets %d\n", VAR_7);
    VAR_7 = FUNC_7(VAR_5, VAR_6, 2);
    FUNC_17(VAR_7 != 0, "GetRandomRgn rets %d\n", VAR_7);
    FUNC_8(VAR_6, &VAR_10);
    FUNC_17(FUNC_4(&VAR_8, &VAR_10), "GetRandomRgn %s\n", FUNC_18(&VAR_10));

    VAR_7 = FUNC_7(VAR_5, VAR_6, 3);
    FUNC_17(VAR_7 != 0, "GetRandomRgn rets %d\n", VAR_7);
    FUNC_8(VAR_6, &VAR_10);
    FUNC_17(FUNC_4(&VAR_8, &VAR_10), "GetRandomRgn %s\n", FUNC_18(&VAR_10));


    FUNC_15(&VAR_9, 10, 30, 70, 90);
    FUNC_10(VAR_5, VAR_9, VAR_9, VAR_9, VAR_9);

    VAR_7 = FUNC_7(VAR_5, VAR_6, 1);
    FUNC_17(VAR_7 != 0, "GetRandomRgn rets %d\n", VAR_7);
    FUNC_8(VAR_6, &VAR_10);
    FUNC_17(FUNC_4(&VAR_9, &VAR_10), "GetRandomRgn %s\n", FUNC_18(&VAR_10));

    VAR_7 = FUNC_7(VAR_5, VAR_6, 2);
    FUNC_17(VAR_7 != 0, "GetRandomRgn rets %d\n", VAR_7);
    FUNC_8(VAR_6, &VAR_10);
    FUNC_17(FUNC_4(&VAR_8, &VAR_10), "GetRandomRgn %s\n", FUNC_18(&VAR_10));

    FUNC_11(&VAR_9, &VAR_8, &VAR_9);

    VAR_7 = FUNC_7(VAR_5, VAR_6, 3);
    FUNC_17(VAR_7 != 0, "GetRandomRgn rets %d\n", VAR_7);
    FUNC_8(VAR_6, &VAR_10);
    FUNC_17(FUNC_4(&VAR_9, &VAR_10), "GetRandomRgn %s\n", FUNC_18(&VAR_10));


    VAR_7 = FUNC_7(VAR_5, VAR_6, VAR_1);
    FUNC_17(VAR_7 != 0, "GetRandomRgn rets %d\n", VAR_7);
    FUNC_8(VAR_6, &VAR_10);
    if(FUNC_9() & 0x80000000)
        FUNC_12(&VAR_11, -VAR_11.left, -VAR_11.top);

    FUNC_11( &VAR_11, &VAR_10, &VAR_10 );
    FUNC_17(FUNC_4(&VAR_11, &VAR_10), "GetRandomRgn %s\n", FUNC_18(&VAR_10));

    FUNC_2(VAR_6);
    FUNC_13(VAR_4, VAR_5);
    FUNC_3(VAR_4);
}

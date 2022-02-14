
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef scalar_t__ HWND ;
typedef scalar_t__ HRGN ;
typedef int * HDC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,char*,char*,int ,int ,int ,int,int,int ,int ,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 int * FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (int *,int ,int ,int,int) ;
 int VAR_1 ;
 int FUNC_10 (scalar_t__,int *) ;
 int FUNC_11 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ,int,int) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (int,char*,...) ;
 int FUNC_20 (char*,int) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static void FUNC_22(void)
{
    HWND VAR_5;
    HDC VAR_6;
    HRGN VAR_7;
    RECT VAR_8, VAR_9;
    int VAR_10;

    VAR_5 = FUNC_1(0, "static", "", VAR_4, 0,0,100,100,
                           0, 0, 0, ((void*)0));
    FUNC_16(VAR_5 != 0);
    FUNC_14(VAR_5, VAR_3);
    FUNC_15(VAR_5);

    VAR_7 = FUNC_0(0, 0, 0, 0);
    FUNC_16(VAR_7 != 0);

    VAR_6 = FUNC_7(VAR_5);
    FUNC_19(VAR_6 != ((void*)0), "GetDC failed\n");

    VAR_10 = FUNC_5(VAR_6, &VAR_9);
    FUNC_19(VAR_10 == VAR_2 || FUNC_17(VAR_10 == VAR_0), "GetClipBox returned %d instead of SIMPLEREGION\n", VAR_10);
    VAR_10 = FUNC_6(VAR_6, VAR_7);
    FUNC_19(VAR_10 == 0, "GetClipRgn returned %d instead of 0\n", VAR_10);
    VAR_10 = FUNC_8(VAR_7, &VAR_8);
    FUNC_19(VAR_10 == VAR_1, "GetRgnBox returned %d %s instead of NULLREGION\n",
       VAR_10, FUNC_21(&VAR_8));

    FUNC_13(&VAR_8, 0, 0, 100, 100);
    FUNC_19(FUNC_4(&VAR_8, &VAR_9), "rects are not equal: %s - %s\n", FUNC_21(&VAR_8),
       FUNC_21(&VAR_9));

    VAR_10 = FUNC_12(VAR_6);
    FUNC_19(VAR_10 == 1, "ret = %d\n", VAR_10);

    VAR_10 = FUNC_9(VAR_6, 0, 0, 50, 50);
    if (VAR_10 == VAR_0)
    {

        FUNC_20("Windows BUG: IntersectClipRect returned %d instead of SIMPLEREGION\n", VAR_10);

        VAR_10 = FUNC_6(VAR_6, VAR_7);
        FUNC_19(VAR_10 == 1, "GetClipRgn returned %d instead of 1\n", VAR_10);
        FUNC_18(VAR_7);
    }
    else
        FUNC_19(VAR_10 == VAR_2, "IntersectClipRect returned %d instead of SIMPLEREGION\n", VAR_10);

    VAR_10 = FUNC_5(VAR_6, &VAR_9);
    FUNC_19(VAR_10 == VAR_2 || FUNC_17(VAR_10 == VAR_0), "GetClipBox returned %d instead of SIMPLEREGION\n", VAR_10);
    FUNC_13(&VAR_8, 0, 0, 50, 50);
    FUNC_19(FUNC_4(&VAR_8, &VAR_9), "rects are not equal: %s - %s\n", FUNC_21(&VAR_8),
       FUNC_21(&VAR_9));

    VAR_10 = FUNC_11(VAR_6, 1);
    FUNC_19(VAR_10, "ret = %d\n", VAR_10);

    VAR_10 = FUNC_5(VAR_6, &VAR_9);
    FUNC_19(VAR_10 == VAR_2 || FUNC_17(VAR_10 == VAR_0), "GetClipBox returned %d instead of SIMPLEREGION\n", VAR_10);
    FUNC_13(&VAR_8, 0, 0, 100, 100);
    FUNC_19(FUNC_4(&VAR_8, &VAR_9), "rects are not equal: %s - %s\n", FUNC_21(&VAR_8),
       FUNC_21(&VAR_9));

    FUNC_2(VAR_7);
    FUNC_10(VAR_5, VAR_6);
    FUNC_3(VAR_5);
}

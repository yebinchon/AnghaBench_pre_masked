
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int HWND ;
typedef int HRGN ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int *,int ,int,int,int,int,int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int *,int,int,int,int) ;
 int VAR_11 ;
 int FUNC_13 (int,char*,int,...) ;
 int FUNC_14 (char*,int,int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(void)
{
    HDC VAR_12;
    HRGN VAR_13, VAR_14;
    HWND VAR_15;
    RECT VAR_16, VAR_17;
    int VAR_18, VAR_19, VAR_20;



    VAR_19 = FUNC_9(VAR_6);
    if(!VAR_19) VAR_19 = FUNC_9(VAR_5);
    VAR_20 = FUNC_9(VAR_8);
    if(!VAR_20) VAR_20 = FUNC_9(VAR_7);
    FUNC_12(&VAR_17, FUNC_9(VAR_9), FUNC_9(VAR_10),
            FUNC_9(VAR_9) + VAR_19, FUNC_9(VAR_10) + VAR_20);

    FUNC_14("screen resolution %d x %d\n", VAR_19, VAR_20);

    VAR_15 = FUNC_1(0, "static", ((void*)0), VAR_11,
                           -100, -100, VAR_19 * 2, VAR_20 * 2, 0, 0, 0, ((void*)0));
    VAR_12 = FUNC_10(0);
    VAR_14 = FUNC_0(0, 0, 0, 0);
    VAR_13 = FUNC_0(0, 0, 0, 0);

    VAR_18 = FUNC_7(VAR_12, VAR_13);
    FUNC_13(VAR_18 == 0, "expected 0, got %d\n", VAR_18);

    VAR_18 = FUNC_6(VAR_12, 0, VAR_2);
    FUNC_13(VAR_18 == 0, "expected 0, got %d\n", VAR_18);

    VAR_18 = FUNC_7(VAR_12, VAR_13);
    FUNC_13(VAR_18 == 0, "expected 0, got %d\n", VAR_18);

    VAR_18 = FUNC_6(VAR_12, VAR_14, VAR_2);
    FUNC_13(VAR_18 == VAR_3 || (VAR_18 == VAR_0 && FUNC_9(VAR_4) > 1),
       "expected SIMPLEREGION, got %d\n", VAR_18);

    VAR_18 = FUNC_7(VAR_12, VAR_13);
    FUNC_13(VAR_18 == 1, "expected 1, got %d\n", VAR_18);

    VAR_18 = FUNC_8(VAR_13, &VAR_16);
    FUNC_13(VAR_18 == VAR_3, "expected SIMPLEREGION, got %d\n", VAR_18);
    FUNC_13(FUNC_5(&VAR_16, &VAR_17), "expected %s, got %s\n", FUNC_15(&VAR_17),
       FUNC_15(&VAR_16));

    FUNC_12( &VAR_16, 10, 10, 20, 20 );
    VAR_18 = FUNC_11( VAR_12, &VAR_16 );
    FUNC_13( VAR_18, "RectVisible failed for %s\n", FUNC_15(&VAR_16));

    FUNC_12( &VAR_16, 20, 20, 10, 10 );
    VAR_18 = FUNC_11( VAR_12, &VAR_16 );
    FUNC_13( VAR_18, "RectVisible failed for %s\n", FUNC_15(&VAR_16));

    VAR_18 = FUNC_6(VAR_12, 0, VAR_2);
    FUNC_13(VAR_18 == 0, "expected 0, got %d\n", VAR_18);

    VAR_18 = FUNC_7(VAR_12, VAR_13);
    FUNC_13(VAR_18 == 1, "expected 1, got %d\n", VAR_18);

    VAR_18 = FUNC_8(VAR_13, &VAR_16);
    FUNC_13(VAR_18 == VAR_3, "expected SIMPLEREGION, got %d\n", VAR_18);
    FUNC_13(FUNC_5(&VAR_16, &VAR_17), "expected %s, got %s\n", FUNC_15(&VAR_17),
       FUNC_15(&VAR_16));

    VAR_18 = FUNC_6(VAR_12, 0, VAR_1);
    FUNC_13(VAR_18 == VAR_3 || (VAR_18 == VAR_0 && FUNC_9(VAR_4) > 1),
       "expected SIMPLEREGION, got %d\n", VAR_18);

    VAR_18 = FUNC_7(VAR_12, VAR_13);
    FUNC_13(VAR_18 == 0, "expected 0, got %d\n", VAR_18);

    FUNC_2(VAR_12);
    FUNC_3(VAR_13);
    FUNC_3(VAR_14);
    FUNC_4(VAR_15);
}

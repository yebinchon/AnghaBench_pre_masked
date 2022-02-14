
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bi ;
struct TYPE_2__ {int cbSize; char* pszText; int dwMask; } ;
typedef TYPE_1__ TBBUTTONINFOA ;
typedef int LPARAM ;
typedef int * HWND ;
typedef int DWORD ;
typedef char CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    HWND VAR_15 = ((void*)0);
    TBBUTTONINFOA VAR_16;
    CHAR VAR_17[] = "Test";
    const int VAR_18 = 5;
    int VAR_19;
    BOOL VAR_20;
    DWORD VAR_21;



    FUNC_6(&VAR_15);
    FUNC_1(VAR_15, VAR_10, 1, (LPARAM)&VAR_14[0]);
    VAR_20 = FUNC_3(VAR_15);
    FUNC_5(!VAR_20, "Unexpected recalc - adding button without text\n");

    FUNC_6(&VAR_15);
    FUNC_1(VAR_15, VAR_10, 1, (LPARAM)&VAR_14[3]);
    VAR_20 = FUNC_3(VAR_15);
    FUNC_5(VAR_20, "Expected a recalc - adding button with text\n");


    FUNC_6(&VAR_15);
    VAR_16.cbSize = sizeof(VAR_16);
    VAR_16.dwMask = VAR_3;
    VAR_16.pszText = VAR_17;
    FUNC_1(VAR_15, VAR_11, 1, (LPARAM)&VAR_16);
    VAR_20 = FUNC_3(VAR_15);
    FUNC_5(!VAR_20, "Unexpected recalc - setting a button text\n");



    for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++)
    {
        if (VAR_19 == 1 || VAR_19 == 3)
            continue;
        FUNC_6(&VAR_15);
        FUNC_4(0, (int)FUNC_1(VAR_15, VAR_8, 0, 0));
        FUNC_1(VAR_15, VAR_12, 0, (1 << VAR_19));
        VAR_20 = FUNC_3(VAR_15);
        FUNC_5(!VAR_20, "Unexpected recalc - setting bit %d\n", VAR_19);
        FUNC_1(VAR_15, VAR_12, 0, 0);
        VAR_20 = FUNC_3(VAR_15);
        FUNC_5(!VAR_20, "Unexpected recalc - clearing bit %d\n", VAR_19);
        FUNC_4(0, (int)FUNC_1(VAR_15, VAR_8, 0, 0));
    }


    FUNC_6(&VAR_15);
    FUNC_1(VAR_15, VAR_12, 0, VAR_4);
    VAR_20 = FUNC_3(VAR_15);
    if (VAR_20)
    {
        FUNC_5(VAR_20, "Expected a recalc - setting TBSTYLE_EX_MIXEDBUTTONS\n");
        FUNC_7(VAR_15);
        FUNC_1(VAR_15, VAR_12, 0, VAR_4);
        VAR_20 = FUNC_3(VAR_15);
        FUNC_5(!VAR_20, "Unexpected recalc - setting TBSTYLE_EX_MIXEDBUTTONS again\n");
        FUNC_7(VAR_15);
        FUNC_1(VAR_15, VAR_12, 0, 0);
        VAR_20 = FUNC_3(VAR_15);
        FUNC_5(VAR_20, "Expected a recalc - clearing TBSTYLE_EX_MIXEDBUTTONS\n");
    }
    else FUNC_8( "No recalc on TBSTYLE_EX_MIXEDBUTTONS\n" );





    FUNC_6(&VAR_15);
    VAR_21 = FUNC_1(VAR_15, VAR_9, 0, 0);
    FUNC_1(VAR_15, VAR_13, 0, VAR_21);
    VAR_20 = FUNC_3(VAR_15);
    FUNC_5(!VAR_20, "recalc %d\n", VAR_20);

    FUNC_1(VAR_15, VAR_13, 0, VAR_21 | VAR_5 | VAR_6 | VAR_0);
    VAR_20 = FUNC_3(VAR_15);
    FUNC_5(!VAR_20, "recalc %d\n", VAR_20);

    FUNC_1(VAR_15, VAR_13, 0, VAR_21 | VAR_7);
    VAR_20 = FUNC_3(VAR_15);
    FUNC_5(VAR_20, "recalc %d\n", VAR_20);
    FUNC_7(VAR_15);

    FUNC_1(VAR_15, VAR_13, 0, VAR_21 | VAR_7);
    VAR_20 = FUNC_3(VAR_15);
    FUNC_5(!VAR_20, "recalc %d\n", VAR_20);

    FUNC_1(VAR_15, VAR_13, 0, VAR_21);
    VAR_20 = FUNC_3(VAR_15);
    FUNC_5(VAR_20, "recalc %d\n", VAR_20);
    FUNC_7(VAR_15);


    FUNC_1(VAR_15, VAR_13, 0, VAR_21 | VAR_1);
    VAR_20 = FUNC_3(VAR_15);
    FUNC_5(!VAR_20, "recalc %d\n", VAR_20);
    FUNC_7(VAR_15);

    FUNC_1(VAR_15, VAR_13, 0, VAR_21);
    VAR_20 = FUNC_3(VAR_15);
    FUNC_5(!VAR_20, "recalc %d\n", VAR_20);
    FUNC_7(VAR_15);


    FUNC_2(VAR_15, VAR_2, VAR_21 | VAR_7);
    VAR_20 = FUNC_3(VAR_15);
    FUNC_5(VAR_20, "recalc %d\n", VAR_20);

    FUNC_0(VAR_15);
}

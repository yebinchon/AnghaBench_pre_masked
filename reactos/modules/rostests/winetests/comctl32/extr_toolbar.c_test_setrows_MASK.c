
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int rc ;
struct TYPE_6__ {int expectedRows; int bLarger; int nRows; } ;
typedef TYPE_1__ TBBUTTON ;
typedef int RECT ;
typedef int LPARAM ;
typedef int * HWND ;
typedef int DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int,int,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int,char*,...) ;
 int * FUNC_7 (int ,int,int ,int ,int *,int ,TYPE_1__*,int,int,int,int ,int ,int) ;
 TYPE_1__* VAR_13 ;

__attribute__((used)) static void FUNC_8(void)
{
    TBBUTTON VAR_14[9];
    HWND VAR_15;
    DWORD VAR_16;

    for (VAR_16=0; VAR_16<9; VAR_16++)
        FUNC_3(VAR_14+VAR_16, 1000+VAR_16, VAR_5 | VAR_4, 0);


    VAR_15 = FUNC_7(VAR_12,
        VAR_11 | VAR_10 | VAR_9 | VAR_2 | VAR_1
        | VAR_0 | VAR_3,
        0,
        0, ((void*)0), 0,
        VAR_14, FUNC_0(VAR_14),
        20, 20, 0, 0, sizeof(TBBUTTON));
    FUNC_6(VAR_15 != ((void*)0), "Toolbar creation\n");
    FUNC_6(FUNC_4(VAR_15, VAR_6, 0, 0) == 0, "TB_AUTOSIZE failed\n");


    for (VAR_16=0; VAR_16<FUNC_0(VAR_13); VAR_16++) {
        RECT VAR_17;
        int VAR_18;

        FUNC_5(&VAR_17, 0xCC, sizeof(VAR_17));
        FUNC_4(VAR_15, VAR_8,
                     FUNC_2(VAR_13[VAR_16].nRows, VAR_13[VAR_16].bLarger),
                     (LPARAM) &VAR_17);

        VAR_18 = FUNC_4(VAR_15, VAR_7, FUNC_2(0,0), FUNC_2(0,0));
        FUNC_6(VAR_18 == VAR_13[VAR_16].expectedRows,
                   "[%d] Unexpected number of rows %d (expected %d)\n", VAR_16, VAR_18,
                   VAR_13[VAR_16].expectedRows);
    }

    FUNC_1(VAR_15);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wParam; int message; } ;
typedef TYPE_1__ MSG ;
typedef int LPARAM ;
typedef int LONG ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    HWND VAR_11;
    MSG VAR_12;
    int VAR_13;
    LONG VAR_14;

    VAR_12.message = VAR_9;

    FUNC_5("EDIT: Single line\n");
    VAR_11 = FUNC_2(VAR_4 | VAR_5, 0);
    VAR_14 = FUNC_3(VAR_11);
    FUNC_4(VAR_14 == (VAR_5 | VAR_4), "Wrong style expected 0xc0 got: 0x%x\n", VAR_14);
    for (VAR_13 = 0; VAR_13 < 65535; VAR_13++)
    {
        VAR_12.wParam = VAR_13;
        VAR_14 = FUNC_1(VAR_11, VAR_8, 0, (LPARAM) &VAR_12);
        FUNC_4(VAR_14 == (VAR_3 | VAR_0 | VAR_2),
            "Expected DLGC_WANTCHARS | DLGC_HASSETSEL | DLGC_WANTARROWS got %x\n", VAR_14);
    }
    FUNC_0(VAR_11);

    FUNC_5("EDIT: Single line want returns\n");
    VAR_11 = FUNC_2(VAR_7 | VAR_4 | VAR_5, 0);
    VAR_14 = FUNC_3(VAR_11);
    FUNC_4(VAR_14 == (VAR_5 | VAR_4 | VAR_7), "Wrong style expected 0x10c0 got: 0x%x\n", VAR_14);
    for (VAR_13 = 0; VAR_13 < 65535; VAR_13++)
    {
        VAR_12.wParam = VAR_13;
        VAR_14 = FUNC_1(VAR_11, VAR_8, 0, (LPARAM) &VAR_12);
        FUNC_4(VAR_14 == (VAR_3 | VAR_0 | VAR_2),
            "Expected DLGC_WANTCHARS | DLGC_HASSETSEL | DLGC_WANTARROWS got %x\n", VAR_14);
    }
    FUNC_0(VAR_11);

    FUNC_5("EDIT: Multiline line\n");
    VAR_11 = FUNC_2(VAR_6 | VAR_10 | VAR_4 | VAR_5, 0);
    VAR_14 = FUNC_3(VAR_11);
    FUNC_4(VAR_14 == (VAR_4 | VAR_5 | VAR_6), "Wrong style expected 0xc4 got: 0x%x\n", VAR_14);
    for (VAR_13 = 0; VAR_13 < 65535; VAR_13++)
    {
        VAR_12.wParam = VAR_13;
        VAR_14 = FUNC_1(VAR_11, VAR_8, 0, (LPARAM) &VAR_12);
        FUNC_4(VAR_14 == (VAR_3 | VAR_0 | VAR_1 | VAR_2),
            "Expected DLGC_WANTCHARS | DLGC_HASSETSEL | DLGC_WANTALLKEYS | DLGC_WANTARROWS got %x\n", VAR_14);
    }
    FUNC_0(VAR_11);

    FUNC_5("EDIT: Multi line want returns\n");
    VAR_11 = FUNC_2(VAR_6 | VAR_10 | VAR_7 | VAR_4 | VAR_5, 0);
    VAR_14 = FUNC_3(VAR_11);
    FUNC_4(VAR_14 == (VAR_7 | VAR_4 | VAR_5 | VAR_6), "Wrong style expected 0x10c4 got: 0x%x\n", VAR_14);
    for (VAR_13 = 0; VAR_13 < 65535; VAR_13++)
    {
        VAR_12.wParam = VAR_13;
        VAR_14 = FUNC_1(VAR_11, VAR_8, 0, (LPARAM) &VAR_12);
        FUNC_4(VAR_14 == (VAR_3 | VAR_0 | VAR_1 | VAR_2),
            "Expected DLGC_WANTCHARS | DLGC_HASSETSEL | DLGC_WANTALLKEYS | DLGC_WANTARROWS got %x\n", VAR_14);
    }
    FUNC_0(VAR_11);
}

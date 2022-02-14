
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int scheme ;
struct TYPE_4__ {int dwSize; int clrBtnHighlight; int clrBtnShadow; } ;
struct TYPE_3__ {int clrFore; int clrBack; int fMask; int cbSize; } ;
typedef TYPE_1__ REBARBANDINFOA ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_2__ COLORSCHEME ;
typedef int COLORREF ;
typedef void* BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,int ,int ) ;
 void* FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*,int ,int,int) ;
 int FUNC_5 (int,int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (void*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    COLORSCHEME VAR_10;
    COLORREF VAR_11;
    BOOL VAR_12;
    HWND VAR_13;
    REBARBANDINFOA VAR_14;

    VAR_13 = FUNC_6();


    VAR_11 = FUNC_3(VAR_13, VAR_7, 0, 0);
    FUNC_5(VAR_11, VAR_1, "%x");
    VAR_11 = FUNC_3(VAR_13, VAR_5, 0, 0);
    FUNC_5(VAR_11, VAR_1, "%x");

    VAR_10.dwSize = sizeof(VAR_10);
    VAR_10.clrBtnHighlight = 0;
    VAR_10.clrBtnShadow = 0;
    VAR_12 = FUNC_3(VAR_13, VAR_6, 0, (LPARAM)&VAR_10);
    if (VAR_12)
    {
        FUNC_5(VAR_10.clrBtnHighlight, VAR_0, "%x");
        FUNC_5(VAR_10.clrBtnShadow, VAR_0, "%x");
    }
    else
        FUNC_8("RB_GETCOLORSCHEME not supported\n");


    FUNC_4(VAR_13, "", 0, 10, 10);
    VAR_14.cbSize = VAR_9;
    VAR_14.fMask = VAR_3;
    VAR_14.clrFore = VAR_14.clrBack = 0xc0ffe;
    VAR_12 = FUNC_3(VAR_13, VAR_4, 0, (LPARAM)&VAR_14);
    FUNC_7(VAR_12, "RB_GETBANDINFOA failed\n");
    FUNC_5(VAR_14.clrFore, FUNC_2(0, 0, 0), "%x");
    FUNC_5(VAR_14.clrBack, FUNC_1(VAR_2), "%x");

    FUNC_3(VAR_13, VAR_8, 0, FUNC_2(255, 0, 0));
    VAR_14.clrFore = VAR_14.clrBack = 0xc0ffe;
    VAR_12 = FUNC_3(VAR_13, VAR_4, 0, (LPARAM)&VAR_14);
    FUNC_7(VAR_12, "RB_GETBANDINFOA failed\n");
    FUNC_5(VAR_14.clrFore, FUNC_2(0, 0, 0), "%x");

    FUNC_0(VAR_13);
}

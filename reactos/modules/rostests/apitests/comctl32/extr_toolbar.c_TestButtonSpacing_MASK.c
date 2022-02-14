
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int metrics ;
struct TYPE_3__ {int dwMask; int cxPad; int cbSize; int cyPad; int cxButtonSpacing; int cyButtonSpacing; } ;
typedef TYPE_1__ TBMETRICS ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int * HWND ;


 int * FUNC_0 (int ,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int,char*,...) ;

void FUNC_4()
{
    HWND VAR_5;
    TBMETRICS VAR_6;
    LRESULT VAR_7;

    VAR_5 = FUNC_0(0, VAR_4, L"Test", 0, 0, 0, 0, 0, 0, 0, 0, ((void*)0));
    FUNC_3(VAR_5 != ((void*)0), "CreateWindowEx failed\n");

    FUNC_2(&VAR_6, 0, sizeof(VAR_6));
    VAR_7 = FUNC_1(VAR_5, VAR_3, 0, (LPARAM)&VAR_6);
    FUNC_3 (VAR_7 == 0, "Got %d result\n", (int)VAR_7);
    FUNC_3 (VAR_6.dwMask == 0, "Got %lu\n", VAR_6.dwMask);
    FUNC_3 (VAR_6.cxPad == 0, "Got %d\n", VAR_6.cxPad);

    VAR_6.cbSize = sizeof(VAR_6);
    VAR_6.dwMask = VAR_2|VAR_0|VAR_1;
    VAR_7 = FUNC_1(VAR_5, VAR_3, 0, (LPARAM)&VAR_6);
    FUNC_3 (VAR_7 == 0, "Got %lu result\n", VAR_7);
    FUNC_3 (VAR_6.dwMask == (VAR_2|VAR_0|VAR_1), "Got %lu\n", VAR_6.dwMask);
    FUNC_3 (VAR_6.cxPad == 7, "Got %d\n", VAR_6.cxPad);
    FUNC_3 (VAR_6.cyPad == 6, "Got %d\n", VAR_6.cyPad);
    FUNC_3 (VAR_6.cxButtonSpacing == 0, "Got %d\n", VAR_6.cxButtonSpacing);
    FUNC_3 (VAR_6.cyButtonSpacing == 0, "Got %d\n", VAR_6.cyButtonSpacing);
}

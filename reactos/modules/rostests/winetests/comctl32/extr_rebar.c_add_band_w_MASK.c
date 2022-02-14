
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fMask; int cx; int cxMinChild; int cxIdeal; int cyMinChild; int * lpText; int hwndChild; int cbSize; } ;
typedef TYPE_1__ REBARBANDINFOA ;
typedef int * LPCSTR ;
typedef int LPARAM ;
typedef int HWND ;
typedef int CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(HWND VAR_8, LPCSTR VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
    CHAR VAR_13[VAR_0];
    REBARBANDINFOA VAR_14;

    if (VAR_9 != ((void*)0))
        FUNC_2(VAR_13, VAR_9);
    VAR_14.cbSize = VAR_7;
    VAR_14.fMask = VAR_4 | VAR_2 | VAR_1 | VAR_3 | VAR_5;
    VAR_14.cx = VAR_11;
    VAR_14.cxMinChild = VAR_10;
    VAR_14.cxIdeal = VAR_12;
    VAR_14.cyMinChild = 20;
    VAR_14.hwndChild = FUNC_1(1, VAR_8);
    VAR_14.lpText = (VAR_9 ? VAR_13 : ((void*)0));
    FUNC_0(VAR_8, VAR_6, -1, (LPARAM)&VAR_14);
}

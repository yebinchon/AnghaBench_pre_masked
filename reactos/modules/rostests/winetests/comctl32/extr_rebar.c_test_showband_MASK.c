
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fMask; int cx; int cxMinChild; int cyMinChild; int * hwndChild; int cbSize; } ;
typedef TYPE_1__ REBARBANDINFOA ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ,int,scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
    HWND VAR_8;
    REBARBANDINFOA VAR_9;
    BOOL VAR_10;

    VAR_8 = FUNC_2();


    VAR_10 = FUNC_1(VAR_8, VAR_5, 0, VAR_7);
    FUNC_3(VAR_10 == VAR_0, "got %d\n", VAR_10);

    VAR_9.cbSize = VAR_6;
    VAR_9.fMask = VAR_3 | VAR_2 | VAR_1;
    VAR_9.cx = 200;
    VAR_9.cxMinChild = 100;
    VAR_9.cyMinChild = 30;
    VAR_9.hwndChild = ((void*)0);
    FUNC_1(VAR_8, VAR_4, -1, (LPARAM)&VAR_9);


    VAR_10 = FUNC_1(VAR_8, VAR_5, 1, VAR_7);
    FUNC_3(VAR_10 == VAR_0, "got %d\n", VAR_10);

    VAR_10 = FUNC_1(VAR_8, VAR_5, 0, VAR_7);
    FUNC_3(VAR_10 == VAR_7, "got %d\n", VAR_10);

    FUNC_0(VAR_8);
}

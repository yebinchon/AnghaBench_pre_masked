
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_2__ {int fMask; int fStyle; int cyChild; int cyMinChild; int cx; int cxMinChild; int cxIdeal; int wID; int hwndChild; int cbSize; } ;
typedef TYPE_1__ REBARBANDINFOW ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HINSTANCE ;


 int FUNC_0 (int ,int *,int,int,int,int,int,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_5(HWND VAR_14, UINT VAR_15, UINT VAR_16, UINT VAR_17)
{
    REBARBANDINFOW VAR_18;
    HINSTANCE VAR_19 = FUNC_1(0);
    WCHAR VAR_20[VAR_0];
    HWND VAR_21;

    FUNC_2(VAR_19, VAR_15, VAR_20, VAR_0);
    VAR_21 = FUNC_0(VAR_11, VAR_20,
                            VAR_13 | VAR_12, 5, 5, 100, 15,
                            VAR_14, FUNC_4(VAR_16), VAR_19, ((void*)0));

    VAR_18.cbSize = VAR_10;
    VAR_18.fMask = VAR_5 | VAR_2 | VAR_6 | VAR_1 | VAR_4 | VAR_3;
    VAR_18.fStyle = VAR_7 | VAR_8;
    VAR_18.hwndChild = VAR_21;
    VAR_18.cyChild = VAR_18.cyMinChild = 22;
    VAR_18.cx = VAR_18.cxMinChild = 90;
    VAR_18.cxIdeal = 100;
    VAR_18.wID = VAR_17;

    FUNC_3(VAR_14, VAR_9, -1, (LPARAM)&VAR_18);
}

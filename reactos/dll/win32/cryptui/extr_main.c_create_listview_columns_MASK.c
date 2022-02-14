
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int mask; int cx; int * pszText; } ;
struct TYPE_4__ {int right; int left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ LVCOLUMNW ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int,int ) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_5(HWND VAR_10)
{
    HWND VAR_11 = FUNC_1(VAR_10, VAR_0);
    RECT VAR_12;
    WCHAR VAR_13[VAR_8];
    LVCOLUMNW VAR_14;

    FUNC_4(VAR_11, VAR_6, 0, VAR_7);
    FUNC_2(VAR_11, &VAR_12);
    FUNC_3(VAR_9, VAR_1, VAR_13, FUNC_0(VAR_13));
    VAR_14.mask = VAR_4 | VAR_3;
    VAR_14.cx = (VAR_12.right - VAR_12.left) / 2 - 2;
    VAR_14.pszText = VAR_13;
    FUNC_4(VAR_11, VAR_5, 0, (LPARAM)&VAR_14);
    FUNC_3(VAR_9, VAR_2, VAR_13, FUNC_0(VAR_13));
    FUNC_4(VAR_11, VAR_5, 1, (LPARAM)&VAR_14);
}

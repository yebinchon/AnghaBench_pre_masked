
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwndToolTip; } ;
typedef TYPE_1__ TREEVIEW_INFO ;
typedef int LRESULT ;
typedef int HWND ;


 int FUNC_0 (char*) ;

__attribute__((used)) static LRESULT
FUNC_1(TREEVIEW_INFO *VAR_0, HWND VAR_1)
{
    HWND VAR_2;

    FUNC_0("\n");
    VAR_2 = VAR_0->hwndToolTip;
    VAR_0->hwndToolTip = VAR_1;

    return (LRESULT)VAR_2;
}

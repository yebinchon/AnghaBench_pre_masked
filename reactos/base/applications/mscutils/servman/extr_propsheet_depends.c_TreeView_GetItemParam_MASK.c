
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int lParam; int hItem; int member_0; } ;
typedef TYPE_1__ TVITEMW ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HTREEITEM ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static LPARAM
FUNC_1(HWND VAR_2,
                      HTREEITEM VAR_3)
{
    LPARAM VAR_4 = 0;
    TVITEMW VAR_5 = {0};

    VAR_5.mask = VAR_1 | VAR_0;
    VAR_5.hItem = VAR_3;

    if (FUNC_0(VAR_2, &VAR_5))
    {
        VAR_4 = VAR_5.lParam;
    }

    return VAR_4;
}

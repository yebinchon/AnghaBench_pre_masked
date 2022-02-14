
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_5__ {int clrWindow; int clrBtnFace; } ;
struct TYPE_4__ {int dwStyle; scalar_t__ hwndSelf; int hwndNotify; } ;
typedef int RECT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef scalar_t__ HDC ;
typedef int * HBRUSH ;
typedef TYPE_1__ DATETIME_INFO ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *,int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_5 (const DATETIME_INFO *VAR_3, HDC VAR_4)
{
    HBRUSH VAR_5, VAR_6 = ((void*)0);
    RECT VAR_7;

    if (VAR_3->dwStyle & VAR_1)
        VAR_5 = VAR_6 = FUNC_0(VAR_2.clrBtnFace);
    else
    {
        VAR_5 = (HBRUSH)FUNC_4(VAR_3->hwndNotify, VAR_0,
                                      (WPARAM)VAR_4, (LPARAM)VAR_3->hwndSelf);
        if (!VAR_5)
            VAR_5 = VAR_6 = FUNC_0(VAR_2.clrWindow);
    }

    FUNC_3 (VAR_3->hwndSelf, &VAR_7);

    FUNC_2 (VAR_4, &VAR_7, VAR_5);

    if (VAR_6)
        FUNC_1(VAR_6);

    return -1;
}

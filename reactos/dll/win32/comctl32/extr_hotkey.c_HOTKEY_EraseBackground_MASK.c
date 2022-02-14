
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_5__ {int clrWindow; int clrBtnFace; } ;
struct TYPE_4__ {scalar_t__ hwndSelf; int hwndNotify; } ;
typedef int RECT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef TYPE_1__ HOTKEY_INFO ;
typedef scalar_t__ HDC ;
typedef int * HBRUSH ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static LRESULT
FUNC_6 (const HOTKEY_INFO *VAR_4, HDC VAR_5)
{
    HBRUSH VAR_6, VAR_7 = ((void*)0);
    RECT VAR_8;

    if (FUNC_4(VAR_4->hwndSelf, VAR_0) & VAR_2)
        VAR_6 = VAR_7 = FUNC_0(VAR_3.clrBtnFace);
    else
    {
        VAR_6 = (HBRUSH)FUNC_5(VAR_4->hwndNotify, VAR_1,
                                      (WPARAM)VAR_5, (LPARAM)VAR_4->hwndSelf);
        if (!VAR_6)
            VAR_6 = VAR_7 = FUNC_0(VAR_3.clrWindow);
    }

    FUNC_3 (VAR_4->hwndSelf, &VAR_8);

    FUNC_2 (VAR_5, &VAR_8, VAR_6);

    if (VAR_7)
        FUNC_1(VAR_7);

    return -1;
}

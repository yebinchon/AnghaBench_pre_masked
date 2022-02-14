
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* SetWindowRgn ) (int ,int ,int ) ;} ;
struct TYPE_4__ {scalar_t__ hthemeScrollbar; scalar_t__ hthemeWindow; int * hTabBackgroundBmp; int * hTabBackgroundBrush; scalar_t__ HasThemeRgn; } ;
typedef TYPE_1__* PWND_DATA ;
typedef int LPCWSTR ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_10 (int ,int ,int ) ;

void FUNC_11(HWND VAR_3)
{
    PWND_DATA VAR_4;
    DWORD VAR_5;


    FUNC_6(VAR_3, &VAR_5);
    if(VAR_5 != FUNC_2())
    {
        return;
    }

    VAR_4 = (PWND_DATA)FUNC_4(VAR_3, (LPCWSTR)FUNC_8(VAR_1));
    if(VAR_4 == ((void*)0))
    {
        return;
    }

    if(VAR_4->HasThemeRgn)
    {
        VAR_2.SetWindowRgn(VAR_3, 0, VAR_0);
    }

    if (VAR_4->hTabBackgroundBrush != ((void*)0))
    {
        FUNC_0(FUNC_5(VAR_3));

        FUNC_1(VAR_4->hTabBackgroundBrush);
    }

    if (VAR_4->hTabBackgroundBmp != ((void*)0))
    {
        FUNC_1(VAR_4->hTabBackgroundBmp);
    }

    if (VAR_4->hthemeWindow)
    {
        FUNC_0(VAR_4->hthemeWindow);
    }

    if (VAR_4->hthemeScrollbar)
    {
        FUNC_0(VAR_4->hthemeScrollbar);
    }

    FUNC_7(FUNC_3(), 0, VAR_4);

    FUNC_9( VAR_3, (LPCWSTR)FUNC_8(VAR_1), ((void*)0));
}

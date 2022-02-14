
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hthemeScrollbar; } ;
typedef TYPE_1__* PWND_DATA ;
typedef int HWND ;
typedef int * HTHEME ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int * FUNC_2 (int ,char*,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

HTHEME FUNC_4(HWND VAR_4, DWORD VAR_5)
{
    PWND_DATA VAR_6;


    if((VAR_5 & (VAR_2|VAR_3)) == 0)
        return ((void*)0);


    VAR_6 = FUNC_3(VAR_4);
    if (VAR_6 == ((void*)0))
        return ((void*)0);

    if (!(FUNC_1() & VAR_1))
    {
        if (VAR_6->hthemeScrollbar)
        {
            FUNC_0(VAR_6->hthemeScrollbar);
            VAR_6->hthemeScrollbar = ((void*)0);
        }
        return ((void*)0);
    }


    if (!VAR_6->hthemeScrollbar)
        VAR_6->hthemeScrollbar = FUNC_2(VAR_4, L"SCROLLBAR", VAR_0);

    return VAR_6->hthemeScrollbar;
}

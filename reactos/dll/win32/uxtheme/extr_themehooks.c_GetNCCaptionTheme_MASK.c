
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hthemeWindow; } ;
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

HTHEME FUNC_4(HWND VAR_3, DWORD VAR_4)
{
    PWND_DATA VAR_5;


    if((VAR_4 & VAR_2) != VAR_2)
        return ((void*)0);


    VAR_5 = FUNC_3(VAR_3);
    if (VAR_5 == ((void*)0))
        return ((void*)0);

    if (!(FUNC_1() & VAR_1))
    {
        if (VAR_5->hthemeWindow)
        {
            FUNC_0(VAR_5->hthemeWindow);
            VAR_5->hthemeWindow = ((void*)0);
        }
        return ((void*)0);
    }


    if (!VAR_5->hthemeWindow)
        VAR_5->hthemeWindow = FUNC_2(VAR_3, L"WINDOW", VAR_0);

    return VAR_5->hthemeWindow;
}

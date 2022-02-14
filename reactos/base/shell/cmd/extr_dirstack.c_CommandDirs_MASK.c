
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* prev; int szPath; } ;
typedef int LPTSTR ;
typedef TYPE_1__* LPDIRENTRY ;
typedef int INT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;

INT FUNC_4 (LPTSTR VAR_4)
{
    LPDIRENTRY VAR_5;

    if (!FUNC_3(VAR_4, FUNC_2("/?"), 2))
    {
        FUNC_1(VAR_0);
        return 0;
    }

    VAR_3 = 0;

    VAR_5 = VAR_2;

    if (VAR_5 == ((void*)0))
    {
        FUNC_1(VAR_1);
        return 0;
    }

    while (VAR_5 != ((void*)0))
    {
        FUNC_0(VAR_5->szPath);
        VAR_5 = VAR_5->prev;
    }

    return 0;
}

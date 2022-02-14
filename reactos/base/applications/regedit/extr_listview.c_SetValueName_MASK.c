
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int * psz; int flags; } ;
typedef TYPE_1__ LVFINDINFOW ;
typedef int * LPCWSTR ;
typedef scalar_t__ INT ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int,int) ;
 scalar_t__ VAR_3 ;

VOID FUNC_3(HWND VAR_4, LPCWSTR VAR_5)
{
    INT VAR_6, VAR_7;
    LVFINDINFOW VAR_8;

    VAR_7 = FUNC_1(VAR_4);
    for(VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
    {
        FUNC_2(VAR_4, VAR_6, 0, VAR_1 | VAR_2);
    }
    if (VAR_5 == ((void*)0))
        VAR_6 = 0;
    else
    {
        VAR_8.flags = VAR_0;
        VAR_8.psz = VAR_5;
        VAR_6 = FUNC_0(VAR_4, -1, &VAR_8);
    }
    FUNC_2(VAR_4, VAR_6, VAR_1 | VAR_2,
                          VAR_1 | VAR_2);
    VAR_3 = VAR_6;
}

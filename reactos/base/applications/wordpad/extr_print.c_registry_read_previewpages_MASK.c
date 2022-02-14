
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pages_shown; } ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *,int ,int*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

void FUNC_1(HKEY VAR_3)
{
    DWORD VAR_4 = sizeof(DWORD);
    if(!VAR_3 ||
       FUNC_0(VAR_3, VAR_2, 0, ((void*)0),
                        (LPBYTE)&VAR_1.pages_shown, &VAR_4) != VAR_0 ||
       VAR_4 != sizeof(DWORD))
    {
        VAR_1.pages_shown = 1;
    } else {
        if (VAR_1.pages_shown < 1) VAR_1.pages_shown = 1;
        else if (VAR_1.pages_shown > 2) VAR_1.pages_shown = 2;
    }
}

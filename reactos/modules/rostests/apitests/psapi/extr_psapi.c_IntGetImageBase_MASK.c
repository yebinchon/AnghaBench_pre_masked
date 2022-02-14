
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwSize; int modBaseAddr; int szExePath; } ;
typedef TYPE_1__ MODULEENTRY32 ;
typedef int * LPVOID ;
typedef int LPCSTR ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static LPVOID FUNC_5(LPCSTR VAR_2)
{
    HANDLE VAR_3;
    MODULEENTRY32 VAR_4;

    VAR_3 = FUNC_1(VAR_1, 0);
    if (VAR_3 == VAR_0)
    {
        return ((void*)0);
    }

    VAR_4.dwSize = sizeof(MODULEENTRY32);
    if(!FUNC_2(VAR_3, &VAR_4))
    {
        FUNC_0(VAR_3);
        return ((void*)0);
    }

    do
    {
        if (FUNC_4(VAR_4.szExePath, VAR_2) == 0)
        {
            FUNC_0(VAR_3);
            return (LPVOID)VAR_4.modBaseAddr;
        }
    } while(FUNC_3(VAR_3, &VAR_4));

    FUNC_0(VAR_3);
    return ((void*)0);
}

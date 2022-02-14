
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwSize; scalar_t__ th32ParentProcessID; scalar_t__ th32ProcessID; int member_0; } ;
typedef int ProcessEntry ;
typedef TYPE_1__ PROCESSENTRY32W ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_1__*) ;
 int FUNC_5 (scalar_t__,int ) ;

BOOL FUNC_6(HANDLE VAR_3, HANDLE VAR_4, DWORD VAR_5)
{
    HANDLE VAR_6;
    PROCESSENTRY32W VAR_7 = {0};
    VAR_7.dwSize = sizeof(VAR_7);

    if (FUNC_3(VAR_3, &VAR_7))
    {
        do
        {
            if (VAR_7.th32ParentProcessID == VAR_5)
            {
                VAR_6 = FUNC_2(VAR_2 | VAR_1,
                                           VAR_0,
                                           VAR_7.th32ProcessID);
                if (!VAR_6 || FUNC_1(VAR_6))
                {
                    if (VAR_6)
                    {
                        FUNC_0(VAR_6);
                    }
                    continue;
                }
                if (!FUNC_6(VAR_3, VAR_6, VAR_7.th32ProcessID))
                {
                    FUNC_0(VAR_6);
                    return VAR_0;
                }
                FUNC_0(VAR_6);
            }
        } while (FUNC_4(VAR_3, &VAR_7));
    }

    return FUNC_5(VAR_4, 0);
}

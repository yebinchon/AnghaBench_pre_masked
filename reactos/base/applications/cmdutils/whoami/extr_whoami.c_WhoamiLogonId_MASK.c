
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t GroupCount; TYPE_1__* Groups; } ;
struct TYPE_4__ {int Attributes; scalar_t__ Sid; } ;
typedef TYPE_2__* PTOKEN_GROUPS ;
typedef scalar_t__ PSID ;
typedef char* LPWSTR ;
typedef size_t DWORD ;


 int FUNC_0 (scalar_t__,char**) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(void)
{
    PTOKEN_GROUPS VAR_2 = (PTOKEN_GROUPS) FUNC_3(VAR_1);
    DWORD VAR_3 = 0;
    LPWSTR VAR_4 = 0;
    PSID VAR_5 = 0;

    if (VAR_2 == ((void*)0))
        return 0;


    for (VAR_3 = 0; VAR_3 < VAR_2->GroupCount; VAR_3++)
    {
        if ((VAR_2->Groups[VAR_3].Attributes & VAR_0) == VAR_0)
        {
            VAR_5 = VAR_2->Groups[VAR_3].Sid;
        }
    }

    if (VAR_5 == 0)
    {
        FUNC_2(VAR_2);
        FUNC_4(L"ERROR: Couldn't find the logon SID.\n");
        return 1;
    }
    if (!FUNC_0(VAR_5, &VAR_4))
    {
        FUNC_2(VAR_2);
        FUNC_4(L"ERROR: Couldn't convert the logon SID to a string.\n");
        return 1;
    }
    else
    {

        FUNC_4(L"%s\n", VAR_4);
    }


    FUNC_1(VAR_4);
    FUNC_2(VAR_2);

    return 0;
}

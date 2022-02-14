
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* lpLocalName; char* lpRemoteName; char* lpProvider; } ;
typedef TYPE_1__* LPNETRESOURCE ;
typedef int LPCWSTR ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,char*,char*,char*,char*) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__*,TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int *,int *) ;
 int FUNC_7 (TYPE_1__*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (char*,int ) ;

__attribute__((used)) static
DWORD
FUNC_9(LPCWSTR VAR_6)
{
    DWORD VAR_7;
    HANDLE VAR_8;
    LPNETRESOURCE VAR_9;
    DWORD VAR_10 = 0x1000;
    DWORD VAR_11 = -1;
    LPNETRESOURCE VAR_12;

    FUNC_0(VAR_2, L"%s\t\t\t%s\t\t\t\t%s\n", L"Local", L"Remote", L"Provider");

    VAR_7 = FUNC_6(VAR_1, VAR_0, 0, ((void*)0), &VAR_8);
    if (VAR_7 != VAR_5)
    {
        return 1;
    }

    VAR_9 = FUNC_2(FUNC_1(), 0, VAR_10);
    if (!VAR_9)
    {
        FUNC_4(VAR_8);
        return 1;
    }

    do
    {
        VAR_10 = 0x1000;
        VAR_11 = -1;

        FUNC_7(VAR_9, 0, VAR_10);
        VAR_7 = FUNC_5(VAR_8, &VAR_11, VAR_9, &VAR_10);
        if (VAR_7 == VAR_5 || VAR_7 == VAR_3)
        {
            VAR_12 = VAR_9;
            for (; VAR_11; VAR_11--)
            {
                if (!VAR_6 || FUNC_8(VAR_12->lpLocalName, VAR_6) == 0)
                {
                    FUNC_0(VAR_2, L"%s\t\t\t%s\t\t%s\n", VAR_12->lpLocalName, VAR_12->lpRemoteName, VAR_12->lpProvider);
                }

                VAR_12++;
            }
        }
    } while (VAR_7 != VAR_4);

    FUNC_3(FUNC_1(), 0, VAR_9);
    FUNC_4(VAR_8);

    return 0;
}

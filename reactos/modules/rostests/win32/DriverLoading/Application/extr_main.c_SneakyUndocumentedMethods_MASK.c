
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPCWSTR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ,int *) ;
 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static BOOL
FUNC_5(LPCWSTR VAR_4)
{
    WCHAR VAR_5[VAR_2];

    if (FUNC_0(VAR_4, VAR_5))
    {
        FUNC_4(L"\nStarting %s.sys via NtSetSystemInformation with SystemLoadGdiDriverInformation\n", VAR_0);
        if (FUNC_2(VAR_5))
        {
            FUNC_4(L"\tStarted\n");

            FUNC_3(VAR_0);
        }

        FUNC_4(L"\nStarting %s.sys via NtSetSystemInformation with SystemExtendServiceTableInformation\n", VAR_0);
        if (FUNC_1(VAR_5))
        {
            FUNC_4(L"\tStarted\n");

            FUNC_3(VAR_0);
        }

        return VAR_3;
    }

    return VAR_1;
}

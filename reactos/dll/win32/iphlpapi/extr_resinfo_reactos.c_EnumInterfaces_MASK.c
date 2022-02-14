
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PVOID ;
typedef scalar_t__ LSTATUS ;
typedef char* LPWSTR ;
typedef int HKEY ;
typedef int (* ENUM_INTERFACE_CALLBACK ) (int ,char*,int ) ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int,char*,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int *,int *,int*,int*,int *,int *,int *,int *,int *,int *) ;

LSTATUS
FUNC_7(
    ENUM_INTERFACE_CALLBACK VAR_4,
    PVOID VAR_5)
{
    HKEY VAR_6, VAR_7;
    LSTATUS VAR_8;
    DWORD VAR_9, VAR_10, VAR_11, VAR_12;
    LPWSTR VAR_13;


    VAR_8 = FUNC_5(VAR_2, L"SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters\\Interfaces", 0, VAR_3, &VAR_6);


    if (VAR_8 != VAR_1)
    {

        return VAR_8;
    }


    VAR_8 = FUNC_6(VAR_6, ((void*)0), ((void*)0), ((void*)0), &VAR_9, &VAR_10, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (VAR_8 != VAR_1)
    {

        FUNC_3(VAR_6);
        return VAR_8;
    }


    VAR_10++;


    VAR_13 = (LPWSTR) FUNC_1(FUNC_0(), 0, VAR_10 * sizeof(WCHAR));

    if (!VAR_13)
    {

        FUNC_3(VAR_6);
        return VAR_0;
    }


    for(VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
    {

        VAR_12 = VAR_10;
        VAR_8 = FUNC_4(VAR_6, VAR_11, VAR_13, &VAR_12, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

        if (VAR_8 == VAR_1)
        {

            VAR_13[VAR_12] = L'\0';


            VAR_8 = FUNC_5(VAR_6, VAR_13, 0, VAR_3, &VAR_7);

            if (VAR_8 == VAR_1)
            {

                VAR_4(VAR_7, VAR_13, VAR_5);


                FUNC_3(VAR_7);
            }
        }
    }


    FUNC_2(FUNC_0(), 0, VAR_13);


    FUNC_3(VAR_6);


    return VAR_8;
}

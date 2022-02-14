
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int* LogName; } ;
typedef int* PWSTR ;
typedef TYPE_1__* PLOGFILE ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 () ;
 int* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int ,int,int*,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int ,int *,int *,int *,int*,int*,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_9 (int ,char*,int ,int ,int ,int) ;
 int FUNC_10 (int*,size_t,int*,int**,size_t*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_11 (int*,int*) ;
 int FUNC_12 (int*) ;

BOOL
FUNC_13(HKEY VAR_4,
                 PLOGFILE VAR_5)
{
    BOOL VAR_6;
    DWORD VAR_7, VAR_8;
    DWORD VAR_9, VAR_10;
    DWORD VAR_11;
    PWSTR VAR_12 = ((void*)0), VAR_13 = ((void*)0), VAR_14 = ((void*)0);
    size_t VAR_15 = 0;
    LONG VAR_16;

    FUNC_1("LoadEventSources\n");

    VAR_16 = FUNC_8(VAR_4, ((void*)0), ((void*)0), ((void*)0), &VAR_7, &VAR_8,
                              ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (VAR_16 != VAR_0)
    {
        FUNC_2("RegQueryInfoKeyW failed: %lu\n", VAR_16);
        return VAR_1;
    }

    VAR_8++;

    VAR_12 = FUNC_5(FUNC_4(), 0, VAR_8 * sizeof(WCHAR));
    if (!VAR_12)
    {
        FUNC_2("Error: cannot allocate heap!\n");
        return VAR_1;
    }






    VAR_10 = VAR_7 * VAR_8 + FUNC_12(VAR_5->LogName) + 2;
    VAR_13 = FUNC_5(FUNC_4(), 0, VAR_10 * sizeof(WCHAR));
    if (!VAR_13)
    {
        FUNC_2("Error: cannot allocate heap!\n");

    }
    else
    {
        VAR_15 = VAR_10;
        VAR_14 = VAR_13;
    }







    VAR_9 = VAR_8;
    VAR_11 = 0;
    while (FUNC_7(VAR_4,
                         VAR_11,
                         VAR_12,
                         &VAR_9,
                         ((void*)0), ((void*)0), ((void*)0), ((void*)0)) == VAR_0)
    {
        if (FUNC_11(VAR_5->LogName, VAR_12) != 0)
        {
            FUNC_1("Event Source: %S\n", VAR_12);
            VAR_6 = FUNC_0(VAR_5, VAR_12);
            if (VAR_6 && (VAR_14 != ((void*)0)))
            {

                FUNC_10(VAR_14, VAR_15, VAR_12, &VAR_14, &VAR_15, 0);
                if (VAR_15 > 0)
                {
                    *++VAR_14 = L'\0';
                    VAR_15--;
                }
            }
        }

        VAR_9 = VAR_8;
        VAR_11++;
    }


    FUNC_1("Event Source: %S\n", VAR_5->LogName);
    VAR_6 = FUNC_0(VAR_5, VAR_5->LogName);
    if (VAR_6 && (VAR_14 != ((void*)0)))
    {

        FUNC_10(VAR_14, VAR_15, VAR_5->LogName, &VAR_14, &VAR_15, 0);
        if (VAR_15 > 0)
        {
            *++VAR_14 = L'\0';
            VAR_15--;
        }
    }


    VAR_16 = FUNC_9(VAR_4,
                            L"Sources",
                            0,
                            VAR_2,
                            (LPBYTE)VAR_13,
                            (VAR_10 - VAR_15 + 1) * sizeof(WCHAR));
    if (VAR_16 != VAR_0)
    {
        FUNC_2("RegSetValueExW failed: %lu\n", VAR_16);
    }

    if (VAR_13)
        FUNC_6(FUNC_4(), 0, VAR_13);

    FUNC_6(FUNC_4(), 0, VAR_12);

    FUNC_3();

    return VAR_3;
}

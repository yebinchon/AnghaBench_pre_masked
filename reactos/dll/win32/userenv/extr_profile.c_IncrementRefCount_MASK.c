
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dwRefCount ;
typedef char* PWSTR ;
typedef scalar_t__* PDWORD ;
typedef int PBYTE ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,int ,int,int **) ;
 int FUNC_3 (int *,char*,int *,scalar_t__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *,char*,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static
DWORD
FUNC_5(
    PWSTR VAR_5,
    PDWORD VAR_6)
{
    HKEY VAR_7 = ((void*)0), VAR_8 = ((void*)0);
    DWORD VAR_9 = 0, VAR_10, VAR_11;
    DWORD VAR_12;

    FUNC_0("IncrementRefCount(%S %p)\n",
            VAR_5, VAR_6);

    VAR_12 = FUNC_2(VAR_1,
                            L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\ProfileList",
                            0,
                            VAR_2,
                            &VAR_7);
    if (VAR_12 != VAR_0)
    {
        FUNC_0("Error: %lu\n", VAR_12);
        goto done;
    }

    VAR_12 = FUNC_2(VAR_7,
                            VAR_5,
                            0,
                            VAR_2 | VAR_3,
                            &VAR_8);
    if (VAR_12 != VAR_0)
    {
        FUNC_0("Error: %lu\n", VAR_12);
        goto done;
    }


    VAR_10 = sizeof(VAR_9);
    FUNC_3(VAR_8,
                     L"RefCount",
                     ((void*)0),
                     &VAR_11,
                     (PBYTE)&VAR_9,
                     &VAR_10);

    VAR_9++;

    VAR_10 = sizeof(VAR_9);
    VAR_12 = FUNC_4(VAR_8,
                             L"RefCount",
                             0,
                             VAR_4,
                             (PBYTE)&VAR_9,
                             VAR_10);
    if (VAR_12 != VAR_0)
    {
        FUNC_0("Error: %lu\n", VAR_12);
        goto done;
    }

    if (VAR_6 != ((void*)0))
        *VAR_6 = VAR_9;

done:
    if (VAR_8 != ((void*)0))
        FUNC_1(VAR_8);

    if (VAR_7 != ((void*)0))
        FUNC_1(VAR_7);

    return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * HKEY ;
typedef char* DWORD ;


 int FUNC_0 (char*,int *) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,int *,int *) ;
 char* FUNC_3 (int ,int *,int ,int *,int ,int ,int *,int **,char**) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int ,int *,int ,int ,int **) ;
 char* FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,char*,char*) ;

__attribute__((used)) static
DWORD
FUNC_8(
    DWORD VAR_5,
    DWORD VAR_6)
{
    WCHAR VAR_7[32];
    WCHAR VAR_8[32];
    HKEY VAR_9 = ((void*)0);
    HKEY VAR_10 = ((void*)0);
    DWORD VAR_11;
    DWORD VAR_12;


    FUNC_7(VAR_7, L"SYSTEM\\ControlSet%03lu", VAR_5);
    FUNC_0("Source control set: %S\n", VAR_7);


    FUNC_7(VAR_8, L"SYSTEM\\ControlSet%03lu", VAR_6);
    FUNC_0("Destination control set: %S\n", VAR_8);


    VAR_12 = FUNC_5(VAR_1,
                            VAR_7,
                            0,
                            VAR_2,
                            &VAR_9);
    if (VAR_12 != VAR_0)
        goto done;


    VAR_12 = FUNC_3(VAR_1,
                              VAR_8,
                              0,
                              ((void*)0),
                              VAR_4,
                              VAR_3,
                              ((void*)0),
                              &VAR_10,
                              &VAR_11);
    if (VAR_12 != VAR_0)
        goto done;







    VAR_12 = FUNC_6(VAR_9,
                          VAR_10);

    if (VAR_12 != VAR_0)
        goto done;

    FUNC_4(VAR_10);

done:
    if (VAR_10 != ((void*)0))
        FUNC_1(VAR_10);

    if (VAR_9 != ((void*)0))
        FUNC_1(VAR_9);

    return VAR_12;
}

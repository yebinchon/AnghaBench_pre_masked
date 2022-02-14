
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REGSAM ;
typedef int ** PHKEY ;
typedef int LPCWSTR ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int ,int ,int *,int **,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int,int **) ;

DWORD
FUNC_3(LPCWSTR VAR_7,
                    REGSAM VAR_8,
                    PHKEY VAR_9)
{
    HKEY VAR_10 = ((void*)0);
    DWORD VAR_11;
    DWORD VAR_12;

    *VAR_9 = ((void*)0);

    VAR_12 = FUNC_2(VAR_2,
                            L"System\\CurrentControlSet\\Services",
                            0,
                            VAR_4 | VAR_3,
                            &VAR_10);
    if (VAR_12 != VAR_1)
        return VAR_12;

    VAR_12 = FUNC_1(VAR_10,
                              VAR_7,
                              0,
                              ((void*)0),
                              VAR_6,
                              VAR_8,
                              ((void*)0),
                              VAR_9,
                              &VAR_11);
    FUNC_0(VAR_10);

    return VAR_12;
}

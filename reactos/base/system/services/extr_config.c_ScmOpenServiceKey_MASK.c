
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REGSAM ;
typedef int ** PHKEY ;
typedef char* LPWSTR ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,int ,int ,int **) ;

DWORD
FUNC_2(LPWSTR VAR_3,
                  REGSAM VAR_4,
                  PHKEY VAR_5)
{
    HKEY VAR_6 = ((void*)0);
    DWORD VAR_7;

    *VAR_5 = ((void*)0);

    VAR_7 = FUNC_1(VAR_1,
                            L"System\\CurrentControlSet\\Services",
                            0,
                            VAR_2,
                            &VAR_6);
    if (VAR_7 != VAR_0)
        return VAR_7;

    VAR_7 = FUNC_1(VAR_6,
                            VAR_3,
                            0,
                            VAR_4,
                            VAR_5);

    FUNC_0(VAR_6);

    return VAR_7;
}

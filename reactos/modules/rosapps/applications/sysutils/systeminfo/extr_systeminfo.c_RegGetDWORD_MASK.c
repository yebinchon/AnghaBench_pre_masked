
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPDWORD ;
typedef char* LPCWSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int *,scalar_t__*,int ,scalar_t__*) ;
 int VAR_4 ;
 int FUNC_4 (char*,char*,int ,...) ;

__attribute__((used)) static
BOOL
FUNC_5(HKEY VAR_5, LPCWSTR VAR_6, LPCWSTR VAR_7, LPDWORD VAR_8)
{
    DWORD VAR_9 = sizeof(*VAR_8), VAR_10;
    BOOL VAR_11 = VAR_4;


    if (VAR_6 && FUNC_2(VAR_5,
                                 VAR_6,
                                 0,
                                 VAR_2,
                                 &VAR_5) != VAR_0)
    {
        FUNC_4(L"Warning! Cannot open %s. Last error: %lu.\n", VAR_6, FUNC_0());
        return VAR_1;
    }


    if (FUNC_3(VAR_5,
                         VAR_7,
                         ((void*)0),
                         &VAR_10,
                         (LPBYTE)VAR_8,
                         &VAR_9) != VAR_0 || VAR_10 != VAR_3)
    {
        FUNC_4(L"Warning! Cannot query %s. Last err: %lu, type: %lu\n", VAR_7, FUNC_0(), VAR_10);
        *VAR_8 = 0;
        VAR_11 = VAR_1;
    }


    if (VAR_6)
        FUNC_1(VAR_5);

    return VAR_11;
}

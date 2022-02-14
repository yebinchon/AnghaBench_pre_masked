
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*,int *,scalar_t__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,char*,int ,scalar_t__,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,int ,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static HRESULT FUNC_7(HKEY VAR_4, LPCWSTR VAR_5,
 LPWSTR VAR_6, LPCWSTR VAR_7)
{
    HRESULT VAR_8;
    DWORD VAR_9, VAR_10 = VAR_0 * sizeof(WCHAR);
    LONG VAR_11;

    FUNC_3("%p,%s,%p,%s\n", VAR_4, FUNC_4(VAR_5), VAR_6,
     FUNC_4(VAR_7));
    VAR_11 = FUNC_1(VAR_4, VAR_5, ((void*)0), &VAR_9,
     (LPBYTE)VAR_6, &VAR_10);
    if (!VAR_11 && (VAR_9 == VAR_2 || VAR_9 == VAR_1) && VAR_10
     && *VAR_6)
    {
        VAR_10 /= sizeof(WCHAR);
        VAR_6[VAR_10] = '\0';
        VAR_8 = VAR_3;
    }
    else
    {

        FUNC_5(VAR_6, VAR_7, VAR_0);
        FUNC_3("Setting missing value %s to %s\n", FUNC_4(VAR_5),
                                                  FUNC_4(VAR_6));
        VAR_11 = FUNC_2(VAR_4, VAR_5, 0, VAR_1,
                              (LPBYTE)VAR_6,
                              (FUNC_6(VAR_6) + 1) * sizeof(WCHAR));
        if (VAR_11)
            VAR_8 = FUNC_0(VAR_11);
        else
            VAR_8 = VAR_3;
    }
    FUNC_3("returning 0x%08x (output value is %s)\n", VAR_8, FUNC_4(VAR_6));
    return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef char* LPWSTR ;
typedef int LPCWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int *,int*,int ,int*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(HKEY VAR_1, HKEY VAR_2, LPCWSTR VAR_3, LPWSTR VAR_4, DWORD VAR_5)
{
    DWORD VAR_6 = VAR_0;
    DWORD VAR_7 = VAR_5 * sizeof(WCHAR);
    DWORD VAR_8;

    VAR_8 = FUNC_0(VAR_1, VAR_3, ((void*)0), &VAR_6, (LPBYTE) VAR_4, &VAR_7);

    if (VAR_8 && VAR_2) {
        VAR_7 = VAR_5 * sizeof(WCHAR);
        VAR_6 = VAR_0;
        VAR_8 = FUNC_0(VAR_2, VAR_3, ((void*)0), &VAR_6, (LPBYTE) VAR_4, &VAR_7);
    }

    if (VAR_8) {
        FUNC_1("%s failed: %d\n", FUNC_2(VAR_3), VAR_8);
        *VAR_4 = '\0';
    }
}

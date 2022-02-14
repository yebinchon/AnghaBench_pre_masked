
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPDWORD ;
typedef int LPCWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int *,int*,int ,int*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(HKEY VAR_1, HKEY VAR_2, LPCWSTR VAR_3, LPDWORD VAR_4)
{
    DWORD VAR_5 = VAR_0;
    DWORD VAR_6 = sizeof(DWORD);
    DWORD VAR_7;

    VAR_7 = FUNC_0(VAR_1, VAR_3, ((void*)0), &VAR_5, (LPBYTE) VAR_4, &VAR_6);

    if (VAR_7 && VAR_2) {
        VAR_6 = sizeof(DWORD);
        VAR_5 = VAR_0;
        VAR_7 = FUNC_0(VAR_2, VAR_3, ((void*)0), &VAR_5, (LPBYTE) VAR_4, &VAR_6);
    }

    if (VAR_7) {
        FUNC_1("%s failed: %d\n", FUNC_2(VAR_3), VAR_7);
        *VAR_4 = 0;
    }
}

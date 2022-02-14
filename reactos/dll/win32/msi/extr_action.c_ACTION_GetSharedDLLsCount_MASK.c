
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int count ;
typedef scalar_t__ UINT ;
typedef int LPCWSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_2 () ;

__attribute__((used)) static UINT FUNC_3(LPCWSTR VAR_1)
{
    HKEY VAR_2;
    DWORD VAR_3=0;
    DWORD VAR_4;
    DWORD VAR_5 = sizeof(VAR_3);
    DWORD VAR_6;

    VAR_2 = FUNC_2();
    VAR_6 = FUNC_1(VAR_2, VAR_1, ((void*)0), &VAR_4, (LPBYTE)&VAR_3, &VAR_5);
    if (VAR_6 != VAR_0)
        VAR_3 = 0;
    FUNC_0(VAR_2);
    return VAR_3;
}

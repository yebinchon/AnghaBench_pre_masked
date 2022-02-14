
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PBYTE ;
typedef scalar_t__ LPWSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int,int *,int ,int *) ;

__attribute__((used)) static DWORD FUNC_3(LPWSTR VAR_2)
{
    DWORD VAR_3;

    if (&FUNC_1) {
        VAR_3 = FUNC_1(((void*)0), 0, VAR_2);
    }
    else
    {
        VAR_3 = FUNC_2(VAR_1, VAR_0, (PBYTE) VAR_2, (FUNC_0(VAR_2) + 1) * sizeof(WCHAR), ((void*)0), 0, ((void*)0));
    }
    return VAR_3;
}

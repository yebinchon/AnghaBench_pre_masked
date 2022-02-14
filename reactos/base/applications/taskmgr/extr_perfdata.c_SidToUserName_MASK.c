
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szDomainNameUnused ;
typedef int WCHAR ;
typedef int SID_NAME_USE ;
typedef int * PSID ;
typedef int LPWSTR ;
typedef int DWORD ;


 int FUNC_0 (int *,int *,int ,int*,int *,int*,int *) ;

__attribute__((used)) static void FUNC_1(PSID VAR_0, LPWSTR VAR_1, DWORD VAR_2)
{
    static WCHAR VAR_3[255];
    DWORD VAR_4 = sizeof(VAR_3) / sizeof(VAR_3[0]);
    SID_NAME_USE VAR_5;

    if (VAR_0 != ((void*)0))
        FUNC_0(((void*)0), VAR_0, VAR_1, &VAR_2, VAR_3, &VAR_4, &VAR_5);
}

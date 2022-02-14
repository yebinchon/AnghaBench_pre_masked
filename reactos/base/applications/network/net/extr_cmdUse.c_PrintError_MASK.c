
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int VOID ;
typedef int LPWSTR ;
typedef char* DWORD ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int *,char*,int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,char*,char*) ;

__attribute__((used)) static
VOID
FUNC_5(DWORD VAR_4)
{
    WCHAR VAR_5[16];
    LPWSTR VAR_6;

    FUNC_4(VAR_5, L"%lu", VAR_4);
    FUNC_3(3502, VAR_5);

    if (FUNC_1(VAR_0 | VAR_1 | VAR_2, ((void*)0), VAR_4, 0, (LPWSTR)&VAR_6, 0, ((void*)0)))
    {
        FUNC_0(VAR_3, L"\n%s", VAR_6);
        FUNC_2(VAR_6);
    }
}

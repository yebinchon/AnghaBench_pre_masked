
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PWSTR ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(int VAR_3)
{
    PWSTR VAR_4 = FUNC_0(VAR_3);
    DWORD VAR_5 = FUNC_1(VAR_4);

    if (VAR_0 || VAR_1 == VAR_2)
        return;

    FUNC_2(L"\n%s\n", VAR_4);

    while (VAR_5--)
        FUNC_2(L"-");

    FUNC_2(L"\n\n");
}

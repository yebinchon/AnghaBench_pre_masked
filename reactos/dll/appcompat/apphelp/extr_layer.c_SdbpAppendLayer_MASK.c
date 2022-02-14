
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__* PWSTR ;
typedef int PCWSTR ;
typedef int NTSTATUS ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,int ,int,int) ;
 int FUNC_2 (scalar_t__*,int ,int) ;

BOOL FUNC_3(PWSTR VAR_2, DWORD VAR_3, PCWSTR VAR_4, PCWSTR VAR_5)
{
    NTSTATUS VAR_6 = VAR_1;
    if (VAR_2[0])
        VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_0);

    if (FUNC_0(VAR_6))
    {
        if (VAR_5)
            VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, (VAR_5 - VAR_4) * sizeof(WCHAR));
        else
            VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
    }

    return FUNC_0(VAR_6);
}

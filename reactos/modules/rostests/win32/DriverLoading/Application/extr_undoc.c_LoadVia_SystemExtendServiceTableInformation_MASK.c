
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef scalar_t__ NTSTATUS ;
typedef int LPWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,...) ;

BOOL
FUNC_6(LPWSTR VAR_5)
{
    NTSTATUS VAR_6;
    UNICODE_STRING VAR_7;
    DWORD VAR_8;

    FUNC_2(&VAR_7, VAR_5);
    VAR_8 = sizeof(UNICODE_STRING);

    if (FUNC_4(VAR_4))
    {
        VAR_6 = FUNC_0(VAR_3,
                                        &VAR_7,
                                        VAR_8);
        if (VAR_6 == VAR_1)
        {
            FUNC_5(L"SystemExtendServiceTableInformation can only be used in kmode.\n");
        }
        else if (VAR_6 == VAR_2)
        {
            FUNC_5(L"SystemExtendServiceTableInformation incorrectly loaded the driver\n");
            FUNC_1(&VAR_7);

            return VAR_4;
        }
        else
        {
            DWORD VAR_9 = FUNC_3(VAR_6);
            FUNC_5(L"LoadVia_SystemExtendServiceTableInformation failed [%lu] - 0x%x\n", VAR_9, VAR_6);
        }

        FUNC_4(VAR_0);
    }

    return VAR_0;
}

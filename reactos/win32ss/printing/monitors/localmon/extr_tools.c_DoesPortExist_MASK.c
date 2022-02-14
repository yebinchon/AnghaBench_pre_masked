
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pName; } ;
typedef TYPE_1__* PPORT_INFO_1W ;
typedef int PCWSTR ;
typedef int * PBYTE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int,int *,scalar_t__,scalar_t__*,scalar_t__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ,int ) ;

BOOL
FUNC_7(PCWSTR VAR_5)
{
    BOOL VAR_6 = VAR_3;
    DWORD VAR_7;
    DWORD VAR_8;
    DWORD VAR_9;
    DWORD VAR_10;
    PPORT_INFO_1W VAR_11;
    PPORT_INFO_1W VAR_12 = ((void*)0);


    FUNC_3(((void*)0), 1, ((void*)0), 0, &VAR_7, &VAR_9);
    if (FUNC_4() != VAR_0)
    {
        VAR_8 = FUNC_4();
        FUNC_2("EnumPortsW failed with error %lu!\n", VAR_8);
        goto Cleanup;
    }


    VAR_12 = FUNC_0(VAR_7);
    if (!VAR_12)
    {
        VAR_8 = VAR_1;
        FUNC_2("DllAllocSplMem failed with error %lu!\n", FUNC_4());
        goto Cleanup;
    }


    if (!FUNC_3(((void*)0), 1, (PBYTE)VAR_12, VAR_7, &VAR_7, &VAR_9))
    {
        VAR_8 = FUNC_4();
        FUNC_2("EnumPortsW failed with error %lu!\n", VAR_8);
        goto Cleanup;
    }


    VAR_8 = VAR_2;
    VAR_11 = VAR_12;

    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
    {

        if (FUNC_6(VAR_11->pName, VAR_5) == 0)
        {
            VAR_6 = VAR_4;
            goto Cleanup;
        }

        VAR_11++;
    }

Cleanup:
    if (VAR_12)
        FUNC_1(VAR_12);

    FUNC_5(VAR_8);
    return VAR_6;
}

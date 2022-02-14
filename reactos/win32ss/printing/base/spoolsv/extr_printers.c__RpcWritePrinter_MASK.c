
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINSPOOL_PRINTER_HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,scalar_t__,scalar_t__*) ;

DWORD
FUNC_5(WINSPOOL_PRINTER_HANDLE VAR_1, BYTE* VAR_2, DWORD VAR_3, DWORD* VAR_4)
{
    DWORD VAR_5;

    VAR_5 = FUNC_2(((void*)0));
    if (VAR_5 != VAR_0)
    {
        FUNC_0("RpcImpersonateClient failed with error %lu!\n", VAR_5);
        return VAR_5;
    }

    if (!FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4))
        VAR_5 = FUNC_1();

    FUNC_3();
    return VAR_5;
}

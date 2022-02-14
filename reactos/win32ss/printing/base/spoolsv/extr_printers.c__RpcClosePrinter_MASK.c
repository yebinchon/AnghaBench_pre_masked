
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * WINSPOOL_PRINTER_HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;

DWORD
FUNC_5(WINSPOOL_PRINTER_HANDLE* VAR_1)
{
    DWORD VAR_2;

    VAR_2 = FUNC_3(((void*)0));
    if (VAR_2 != VAR_0)
    {
        FUNC_1("RpcImpersonateClient failed with error %lu!\n", VAR_2);
        return VAR_2;
    }

    if (FUNC_0(*VAR_1))
        *VAR_1 = ((void*)0);
    else
        VAR_2 = FUNC_2();

    FUNC_4();
    return VAR_2;
}

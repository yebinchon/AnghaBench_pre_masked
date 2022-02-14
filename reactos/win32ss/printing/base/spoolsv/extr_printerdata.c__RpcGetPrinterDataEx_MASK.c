
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINSPOOL_PRINTER_HANDLE ;
typedef int WCHAR ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int const*,int const*,scalar_t__*,int *,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;

DWORD
FUNC_4(WINSPOOL_PRINTER_HANDLE VAR_1, const WCHAR* VAR_2, const WCHAR* VAR_3, DWORD* VAR_4, BYTE* VAR_5, DWORD VAR_6, DWORD* VAR_7)
{
    DWORD VAR_8;

    VAR_8 = FUNC_2(((void*)0));
    if (VAR_8 != VAR_0)
    {
        FUNC_0("RpcImpersonateClient failed with error %lu!\n", VAR_8);
        return VAR_8;
    }

    VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    FUNC_3();

    return VAR_8;
}

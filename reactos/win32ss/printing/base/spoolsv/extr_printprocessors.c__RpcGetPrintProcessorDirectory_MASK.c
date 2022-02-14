
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINSPOOL_HANDLE ;
typedef int WCHAR ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int *,scalar_t__,int *,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;

DWORD
FUNC_5(WINSPOOL_HANDLE VAR_1, WCHAR* VAR_2, DWORD VAR_3, BYTE* VAR_4, DWORD VAR_5, DWORD* VAR_6)
{
    DWORD VAR_7;

    VAR_7 = FUNC_3(((void*)0));
    if (VAR_7 != VAR_0)
    {
        FUNC_0("RpcImpersonateClient failed with error %lu!\n", VAR_7);
        return VAR_7;
    }

    if (!FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))
        VAR_7 = FUNC_1();

    FUNC_4();
    return VAR_7;
}

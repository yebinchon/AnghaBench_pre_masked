
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WINSPOOL_HANDLE ;
typedef int WCHAR ;
struct TYPE_2__ {int cbStructureSize; int pInfo; } ;
typedef int PBYTE ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 (int *,scalar_t__*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int *,scalar_t__,int ,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (int *,int ,scalar_t__,scalar_t__*) ;

DWORD
FUNC_8(WINSPOOL_HANDLE VAR_3, WCHAR* VAR_4, DWORD VAR_5, BYTE* VAR_6, DWORD VAR_7, DWORD* VAR_8, DWORD* VAR_9)
{
    DWORD VAR_10;
    PBYTE VAR_11;

    VAR_10 = FUNC_5(((void*)0));
    if (VAR_10 != VAR_1)
    {
        FUNC_1("RpcImpersonateClient failed with error %lu!\n", VAR_10);
        return VAR_10;
    }

    VAR_11 = FUNC_0(VAR_6, &VAR_7);

    if (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_11, VAR_7, VAR_8, VAR_9))
    {

        FUNC_4(VAR_11, *VAR_9, VAR_0.pInfo, VAR_0.cbStructureSize, VAR_2);
    }
    else
    {
        VAR_10 = FUNC_3();
    }

    FUNC_6();
    FUNC_7(VAR_6, VAR_11, VAR_7, VAR_8);

    return VAR_10;
}

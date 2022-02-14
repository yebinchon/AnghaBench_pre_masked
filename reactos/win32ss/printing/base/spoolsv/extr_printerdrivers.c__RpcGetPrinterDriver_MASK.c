
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WINSPOOL_PRINTER_HANDLE ;
typedef int WCHAR ;
struct TYPE_2__ {int cbStructureSize; int pInfo; } ;
typedef int PBYTE ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int *,scalar_t__,int ,scalar_t__,scalar_t__*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 () ;
 int VAR_1 ;
 int FUNC_8 (int *,int ,scalar_t__,scalar_t__*) ;
 TYPE_1__** VAR_2 ;

DWORD
FUNC_9(WINSPOOL_PRINTER_HANDLE VAR_3, WCHAR* VAR_4, DWORD VAR_5, BYTE* VAR_6, DWORD VAR_7, DWORD* VAR_8)
{
    DWORD VAR_9;
    PBYTE VAR_10;

    VAR_9 = FUNC_6(((void*)0));
    if (VAR_9 != VAR_0)
    {
        FUNC_2("RpcImpersonateClient failed with error %lu!\n", VAR_9);
        return VAR_9;
    }

    VAR_10 = FUNC_1(VAR_6, &VAR_7);

    if (FUNC_4(VAR_3, VAR_4, VAR_5, VAR_10, VAR_7, VAR_8))
    {

        FUNC_0(VAR_5 >= 1 && VAR_5 <= 3);
        FUNC_5(VAR_10, VAR_2[VAR_5]->pInfo, VAR_2[VAR_5]->cbStructureSize, VAR_1);
    }
    else
    {
        VAR_9 = FUNC_3();
    }

    FUNC_7();
    FUNC_8(VAR_6, VAR_10, VAR_7, VAR_8);

    return VAR_9;
}

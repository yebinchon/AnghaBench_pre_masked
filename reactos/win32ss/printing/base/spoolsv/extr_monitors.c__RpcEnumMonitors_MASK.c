
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WINSPOOL_HANDLE ;
struct TYPE_2__ {int cbStructureSize; int pInfo; } ;
typedef int PBYTE ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 () ;
 int VAR_1 ;
 int FUNC_8 (int *,int ,scalar_t__,scalar_t__*) ;
 TYPE_1__** VAR_2 ;

DWORD
FUNC_9(WINSPOOL_HANDLE VAR_3, DWORD VAR_4, BYTE* VAR_5, DWORD VAR_6, DWORD* VAR_7, DWORD* VAR_8)
{
    DWORD VAR_9;
    PBYTE VAR_10;

    VAR_9 = FUNC_6(((void*)0));
    if (VAR_9 != VAR_0)
    {
        FUNC_2("RpcImpersonateClient failed with error %lu!\n", VAR_9);
        return VAR_9;
    }

    VAR_10 = FUNC_1(VAR_5, &VAR_6);

    if(FUNC_3(VAR_3, VAR_4, VAR_10, VAR_6, VAR_7, VAR_8))
    {

        FUNC_0(VAR_4 >= 1 && VAR_4 <= 2);
        FUNC_5(VAR_10, *VAR_8, VAR_2[VAR_4]->pInfo, VAR_2[VAR_4]->cbStructureSize, VAR_1);
    }
    else
    {
        VAR_9 = FUNC_4();
    }

    FUNC_7();
    FUNC_8(VAR_5, VAR_10, VAR_6, VAR_7);

    return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pNext; int szId; } ;
typedef TYPE_1__ NetCfgComponentItem ;
typedef int LPVOID ;
typedef int LPCWSTR ;
typedef int INetCfgComponent ;
typedef int INetCfg ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,TYPE_1__*,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

HRESULT
FUNC_2(
    NetCfgComponentItem * VAR_2,
    LPCWSTR VAR_3,
    INetCfgComponent **VAR_4,
    INetCfg * VAR_5)
{
    while(VAR_2)
    {
        if (!FUNC_1(VAR_2->szId, VAR_3))
        {
            return FUNC_0(((void*)0), &VAR_0, (LPVOID*)VAR_4, VAR_2, VAR_5);
        }
        VAR_2 = VAR_2->pNext;
    }
    return VAR_1;
}

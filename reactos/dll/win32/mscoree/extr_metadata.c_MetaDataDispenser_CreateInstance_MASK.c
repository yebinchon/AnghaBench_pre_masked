
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_1__ IMetaDataDispenserEx_iface; } ;
typedef TYPE_2__ MetaDataDispenser ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

HRESULT FUNC_2(IUnknown **VAR_3)
{
    MetaDataDispenser *VAR_4;

    VAR_4 = FUNC_1(FUNC_0(), 0, sizeof(MetaDataDispenser));

    if (!VAR_4)
        return VAR_0;

    VAR_4->IMetaDataDispenserEx_iface.lpVtbl = &VAR_1;
    VAR_4->ref = 1;

    *VAR_3 = (IUnknown*)VAR_4;

    return VAR_2;
}

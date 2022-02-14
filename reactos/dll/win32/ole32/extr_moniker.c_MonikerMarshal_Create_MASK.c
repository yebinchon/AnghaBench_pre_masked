
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_3__ IUnknown_iface; int * moniker; TYPE_1__ IMarshal_iface; } ;
typedef TYPE_2__ MonikerMarshal ;
typedef TYPE_3__ IUnknown ;
typedef int IMoniker ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

HRESULT FUNC_2(IMoniker *VAR_4, IUnknown **VAR_5)
{
    MonikerMarshal *VAR_6 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_6));
    if (!VAR_6) return VAR_0;

    VAR_6->IUnknown_iface.lpVtbl = &VAR_3;
    VAR_6->IMarshal_iface.lpVtbl = &VAR_2;
    VAR_6->ref = 1;
    VAR_6->moniker = VAR_4;

    *VAR_5 = &VAR_6->IUnknown_iface;
    return VAR_1;
}

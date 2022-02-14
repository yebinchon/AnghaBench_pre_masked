
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int const* lpVtbl; } ;
struct TYPE_8__ {int ref; TYPE_2__ IUnknown_iface; TYPE_2__* ref_unk; TYPE_2__* iface; } ;
typedef TYPE_1__ iface_wrapper_t ;
typedef int IUnknownVtbl ;
typedef TYPE_2__ IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ VAR_2 ;

HRESULT FUNC_2(IUnknown *VAR_3, IUnknown *VAR_4, IUnknown **VAR_5)
{
    iface_wrapper_t *VAR_6;

    VAR_6 = FUNC_1(sizeof(*VAR_6));
    if(!VAR_6)
        return VAR_0;

    VAR_6->IUnknown_iface.lpVtbl = (const IUnknownVtbl*)VAR_2;
    VAR_6->ref = 1;

    FUNC_0(VAR_3);
    VAR_6->iface = VAR_3;

    FUNC_0(VAR_4);
    VAR_6->ref_unk = VAR_4;

    *VAR_5 = &VAR_6->IUnknown_iface;
    return VAR_1;
}

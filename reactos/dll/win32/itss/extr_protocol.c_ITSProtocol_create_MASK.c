
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_11__ {int ref; TYPE_3__ IUnknown_inner; TYPE_3__* outer; TYPE_2__ IInternetProtocolInfo_iface; TYPE_1__ IInternetProtocol_iface; } ;
typedef TYPE_3__ IUnknown ;
typedef TYPE_4__ ITSProtocol ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (char*,TYPE_3__*,void**) ;

HRESULT FUNC_4(IUnknown *VAR_6, void **VAR_7)
{
    ITSProtocol *VAR_8;

    FUNC_3("(%p %p)\n", VAR_6, VAR_7);

    FUNC_2();

    VAR_8 = FUNC_1(FUNC_0(), VAR_1, sizeof(ITSProtocol));
    if(!VAR_8)
        return VAR_0;

    VAR_8->IUnknown_inner.lpVtbl = &VAR_3;
    VAR_8->IInternetProtocol_iface.lpVtbl = &VAR_4;
    VAR_8->IInternetProtocolInfo_iface.lpVtbl = &VAR_2;
    VAR_8->ref = 1;
    VAR_8->outer = VAR_6 ? VAR_6 : &VAR_8->IUnknown_inner;

    *VAR_7 = &VAR_8->IUnknown_inner;
    return VAR_5;
}

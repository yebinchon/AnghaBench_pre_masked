
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_9__ {int * vtbl; } ;
struct TYPE_11__ {int ref; TYPE_3__ IInternetProtocol_iface; TYPE_1__ IInternetPriority_iface; TYPE_2__ base; } ;
typedef TYPE_3__* LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef TYPE_4__ GopherProtocol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int *,TYPE_3__**) ;
 int FUNC_1 () ;
 TYPE_4__* FUNC_2 (int) ;

HRESULT FUNC_3(IUnknown *VAR_4, LPVOID *VAR_5)
{
    GopherProtocol *VAR_6;

    FUNC_0("(%p %p)\n", VAR_4, VAR_5);

    FUNC_1();

    VAR_6 = FUNC_2(sizeof(GopherProtocol));

    VAR_6->base.vtbl = &VAR_0;
    VAR_6->IInternetProtocol_iface.lpVtbl = &VAR_2;
    VAR_6->IInternetPriority_iface.lpVtbl = &VAR_1;
    VAR_6->ref = 1;

    *VAR_5 = &VAR_6->IInternetProtocol_iface;

    return VAR_3;
}

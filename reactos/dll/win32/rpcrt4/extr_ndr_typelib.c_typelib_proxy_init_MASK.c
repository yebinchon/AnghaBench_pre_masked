
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int RefCount; scalar_t__ PVtbl; TYPE_4__ IRpcProxyBuffer_iface; int base_object; int base_proxy; int * pUnkOuter; int piid; } ;
struct typelib_proxy {TYPE_3__ proxy; TYPE_2__* proxy_vtbl; } ;
typedef int ULONG ;
struct TYPE_6__ {int piid; } ;
struct TYPE_7__ {TYPE_1__ header; scalar_t__ Vtbl; } ;
typedef int IUnknownVtbl ;
typedef int IUnknown ;
typedef TYPE_4__ IRpcProxyBuffer ;
typedef int HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*,int *) ;
 int VAR_2 ;
 int FUNC_3 (int const*,int *,int *,void**) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_5(struct typelib_proxy *VAR_4, IUnknown *VAR_5,
        ULONG VAR_6, const GUID *VAR_7, IRpcProxyBuffer **VAR_8, void **VAR_9)
{
    if (!FUNC_4((IUnknownVtbl *)VAR_4->proxy_vtbl->Vtbl, VAR_6))
        return VAR_0;

    if (!VAR_5) VAR_5 = (IUnknown *)&VAR_4->proxy;

    VAR_4->proxy.IRpcProxyBuffer_iface.lpVtbl = &VAR_3;
    VAR_4->proxy.PVtbl = VAR_4->proxy_vtbl->Vtbl;
    VAR_4->proxy.RefCount = 1;
    VAR_4->proxy.piid = VAR_4->proxy_vtbl->header.piid;
    VAR_4->proxy.pUnkOuter = VAR_5;

    if (!FUNC_2(VAR_7, &VAR_1))
    {
        HRESULT VAR_10 = FUNC_3(VAR_7, ((void*)0), &VAR_4->proxy.base_proxy,
                (void **)&VAR_4->proxy.base_object);
        if (FUNC_0(VAR_10)) return VAR_10;
    }

    *VAR_8 = &VAR_4->proxy.IRpcProxyBuffer_iface;
    *VAR_9 = &VAR_4->proxy.PVtbl;
    FUNC_1((IUnknown *)*VAR_9);

    return VAR_2;
}

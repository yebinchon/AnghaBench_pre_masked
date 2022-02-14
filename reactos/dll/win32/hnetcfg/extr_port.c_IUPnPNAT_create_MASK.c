
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_1__ IUPnPNAT_iface; } ;
typedef TYPE_2__ upnpnat ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,void*,...) ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_2 ;

HRESULT FUNC_2(IUnknown *VAR_3, void **VAR_4)
{
    upnpnat *VAR_5;

    FUNC_0("(%p,%p)\n", VAR_3, VAR_4);

    VAR_5 = FUNC_1( sizeof(*VAR_5) );
    if (!VAR_5) return VAR_0;

    VAR_5->IUPnPNAT_iface.lpVtbl = &VAR_2;
    VAR_5->ref = 1;

    *VAR_4 = &VAR_5->IUPnPNAT_iface;

    FUNC_0("returning iface %p\n", *VAR_4);
    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_14__ {int ref; TYPE_5__ IBindStatusCallbackEx_iface; TYPE_4__ IAuthenticate_iface; TYPE_3__ IHttpNegotiate2_iface; TYPE_2__ IServiceProvider_iface; TYPE_1__ IInternetBindInfo_iface; } ;
typedef int IBindStatusCallback ;
typedef int HRESULT ;
typedef TYPE_6__ BindStatusCallback ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,int *) ;

HRESULT FUNC_2(IBindStatusCallback *VAR_7, IBindStatusCallback **VAR_8)
{
    BindStatusCallback *VAR_9;

    VAR_9 = FUNC_0(sizeof(BindStatusCallback));
    if(!VAR_9)
        return VAR_5;

    VAR_9->IBindStatusCallbackEx_iface.lpVtbl = &VAR_4;
    VAR_9->IInternetBindInfo_iface.lpVtbl = &VAR_2;
    VAR_9->IServiceProvider_iface.lpVtbl = &VAR_3;
    VAR_9->IHttpNegotiate2_iface.lpVtbl = &VAR_1;
    VAR_9->IAuthenticate_iface.lpVtbl = &VAR_0;

    VAR_9->ref = 1;
    FUNC_1(VAR_9, VAR_7);

    *VAR_8 = (IBindStatusCallback*)&VAR_9->IBindStatusCallbackEx_iface;
    return VAR_6;
}

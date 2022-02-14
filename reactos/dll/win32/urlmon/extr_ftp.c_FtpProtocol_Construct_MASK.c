
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * vtbl; } ;
struct TYPE_15__ {int ref; TYPE_5__ IUnknown_outer; TYPE_5__* outer; TYPE_4__ IWinInetHttpInfo_iface; TYPE_3__ IInternetPriority_iface; TYPE_2__ IInternetProtocolEx_iface; TYPE_1__ base; } ;
typedef TYPE_5__ IUnknown ;
typedef int HRESULT ;
typedef TYPE_6__ FtpProtocol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,TYPE_5__*,void**) ;
 int FUNC_1 () ;
 int VAR_5 ;
 TYPE_6__* FUNC_2 (int) ;

HRESULT FUNC_3(IUnknown *VAR_6, void **VAR_7)
{
    FtpProtocol *VAR_8;

    FUNC_0("(%p %p)\n", VAR_6, VAR_7);

    FUNC_1();

    VAR_8 = FUNC_2(sizeof(FtpProtocol));

    VAR_8->base.vtbl = &VAR_0;
    VAR_8->IUnknown_outer.lpVtbl = &VAR_2;
    VAR_8->IInternetProtocolEx_iface.lpVtbl = &VAR_3;
    VAR_8->IInternetPriority_iface.lpVtbl = &VAR_1;
    VAR_8->IWinInetHttpInfo_iface.lpVtbl = &VAR_5;
    VAR_8->ref = 1;
    VAR_8->outer = VAR_6 ? VAR_6 : &VAR_8->IUnknown_outer;

    *VAR_7 = &VAR_8->IUnknown_outer;
    return VAR_4;
}

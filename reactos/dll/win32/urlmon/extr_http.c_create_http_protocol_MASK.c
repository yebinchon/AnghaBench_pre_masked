
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
struct TYPE_9__ {int * vtbl; } ;
struct TYPE_14__ {int ref; TYPE_5__ IUnknown_outer; TYPE_5__* outer; int https; TYPE_4__ IWinInetHttpInfo_iface; TYPE_3__ IInternetPriority_iface; TYPE_2__ IInternetProtocolEx_iface; TYPE_1__ base; } ;
typedef TYPE_5__ IUnknown ;
typedef TYPE_6__ HttpProtocol ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 TYPE_6__* FUNC_1 (int) ;

__attribute__((used)) static HRESULT FUNC_2(BOOL VAR_7, IUnknown *VAR_8, void **VAR_9)
{
    HttpProtocol *VAR_10;

    VAR_10 = FUNC_1(sizeof(HttpProtocol));
    if(!VAR_10)
        return VAR_1;

    VAR_10->base.vtbl = &VAR_0;
    VAR_10->IUnknown_outer.lpVtbl = &VAR_3;
    VAR_10->IInternetProtocolEx_iface.lpVtbl = &VAR_4;
    VAR_10->IInternetPriority_iface.lpVtbl = &VAR_2;
    VAR_10->IWinInetHttpInfo_iface.lpVtbl = &VAR_6;

    VAR_10->https = VAR_7;
    VAR_10->ref = 1;
    VAR_10->outer = VAR_8 ? VAR_8 : &VAR_10->IUnknown_outer;

    *VAR_9 = &VAR_10->IUnknown_outer;

    FUNC_0();
    return VAR_5;
}

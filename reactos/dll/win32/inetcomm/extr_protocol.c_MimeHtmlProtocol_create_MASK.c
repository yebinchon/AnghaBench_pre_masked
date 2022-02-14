
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_9__ {int ref; TYPE_4__ IUnknown_inner; int * sink; int * stream; int * location; TYPE_4__* outer_unk; TYPE_2__ IInternetProtocolInfo_iface; TYPE_1__ IInternetProtocol_iface; } ;
typedef TYPE_3__ MimeHtmlProtocol ;
typedef TYPE_4__ IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (int) ;

HRESULT FUNC_1(IUnknown *VAR_5, void **VAR_6)
{
    MimeHtmlProtocol *VAR_7;

    VAR_7 = FUNC_0(sizeof(*VAR_7));
    if(!VAR_7)
        return VAR_0;

    VAR_7->IUnknown_inner.lpVtbl = &VAR_2;
    VAR_7->IInternetProtocol_iface.lpVtbl = &VAR_3;
    VAR_7->IInternetProtocolInfo_iface.lpVtbl = &VAR_1;
    VAR_7->ref = 1;
    VAR_7->outer_unk = VAR_5 ? VAR_5 : &VAR_7->IUnknown_inner;
    VAR_7->location = ((void*)0);
    VAR_7->stream = ((void*)0);
    VAR_7->sink = ((void*)0);

    *VAR_6 = &VAR_7->IUnknown_inner;
    return VAR_4;
}

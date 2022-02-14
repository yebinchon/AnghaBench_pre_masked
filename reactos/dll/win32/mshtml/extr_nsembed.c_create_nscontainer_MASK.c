
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_19__ {int * lpVtbl; } ;
struct TYPE_17__ {int * lpVtbl; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_18__ {int ref; TYPE_8__ nsIWebBrowserChrome_iface; int * doc; TYPE_6__ nsISupportsWeakReference_iface; TYPE_5__ nsIInterfaceRequestor_iface; TYPE_4__ nsITooltipListener_iface; TYPE_3__ nsIEmbeddingSiteWindow_iface; TYPE_2__ nsIURIContentListener_iface; TYPE_1__ nsIContextMenuListener_iface; } ;
typedef TYPE_7__ NSContainer ;
typedef int HTMLDocumentObj ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_7__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_8__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

HRESULT FUNC_5(HTMLDocumentObj *VAR_9, NSContainer **VAR_10)
{
    NSContainer *VAR_11;
    HRESULT VAR_12;

    if(!FUNC_3())
        return VAR_0;

    VAR_11 = FUNC_1(sizeof(NSContainer));
    if(!VAR_11)
        return VAR_1;

    VAR_11->nsIWebBrowserChrome_iface.lpVtbl = &VAR_8;
    VAR_11->nsIContextMenuListener_iface.lpVtbl = &VAR_2;
    VAR_11->nsIURIContentListener_iface.lpVtbl = &VAR_7;
    VAR_11->nsIEmbeddingSiteWindow_iface.lpVtbl = &VAR_3;
    VAR_11->nsITooltipListener_iface.lpVtbl = &VAR_6;
    VAR_11->nsIInterfaceRequestor_iface.lpVtbl = &VAR_4;
    VAR_11->nsISupportsWeakReference_iface.lpVtbl = &VAR_5;

    VAR_11->doc = VAR_9;
    VAR_11->ref = 1;

    VAR_12 = FUNC_2(VAR_11);
    if(FUNC_0(VAR_12))
        *VAR_10 = VAR_11;
    else
        FUNC_4(&VAR_11->nsIWebBrowserChrome_iface);
    return VAR_12;
}

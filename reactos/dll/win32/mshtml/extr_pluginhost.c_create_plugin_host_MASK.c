
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_29__ {int * lpVtbl; } ;
struct TYPE_28__ {int * lpVtbl; } ;
struct TYPE_27__ {int * lpVtbl; } ;
struct TYPE_26__ {int * lpVtbl; } ;
struct TYPE_25__ {int * lpVtbl; } ;
struct TYPE_24__ {int * lpVtbl; } ;
struct TYPE_23__ {int * lpVtbl; } ;
struct TYPE_22__ {int * lpVtbl; } ;
struct TYPE_21__ {int nselem; } ;
struct TYPE_20__ {int plugin_hosts; } ;
struct TYPE_19__ {TYPE_10__* plugin_host; TYPE_1__ element; } ;
struct TYPE_18__ {int ref; TYPE_11__* element; int entry; TYPE_12__* doc; int clsid; int * plugin_unk; TYPE_9__ IServiceProvider_iface; TYPE_8__ IBindHost_iface; TYPE_7__ IOleControlSite_iface; TYPE_6__ IOleInPlaceSiteEx_iface; TYPE_5__ IDispatch_iface; TYPE_4__ IPropertyNotifySink_iface; TYPE_3__ IAdviseSinkEx_iface; TYPE_2__ IOleClientSite_iface; } ;
typedef TYPE_10__ PluginHost ;
typedef int IUnknown ;
typedef TYPE_11__ HTMLPluginContainer ;
typedef TYPE_12__ HTMLDocumentNode ;
typedef int HRESULT ;
typedef int CLSID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (TYPE_12__*,int ,int *) ;
 TYPE_10__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (int *,int *) ;

HRESULT FUNC_6(HTMLDocumentNode *VAR_11, HTMLPluginContainer *VAR_12)
{
    PluginHost *VAR_13;
    IUnknown *VAR_14;
    CLSID VAR_15;

    FUNC_1(!VAR_12->plugin_host);

    VAR_14 = FUNC_2(VAR_11, VAR_12->element.nselem, &VAR_15);
    if(!VAR_14)
        return VAR_3;

    VAR_13 = FUNC_3(sizeof(*VAR_13));
    if(!VAR_13) {
        FUNC_0(VAR_14);
        return VAR_4;
    }

    VAR_13->IOleClientSite_iface.lpVtbl = &VAR_5;
    VAR_13->IAdviseSinkEx_iface.lpVtbl = &VAR_0;
    VAR_13->IPropertyNotifySink_iface.lpVtbl = &VAR_8;
    VAR_13->IDispatch_iface.lpVtbl = &VAR_2;
    VAR_13->IOleInPlaceSiteEx_iface.lpVtbl = &VAR_7;
    VAR_13->IOleControlSite_iface.lpVtbl = &VAR_6;
    VAR_13->IBindHost_iface.lpVtbl = &VAR_1;
    VAR_13->IServiceProvider_iface.lpVtbl = &VAR_10;

    VAR_13->ref = 1;

    VAR_13->plugin_unk = VAR_14;
    VAR_13->clsid = VAR_15;

    VAR_13->doc = VAR_11;
    FUNC_5(&VAR_11->plugin_hosts, &VAR_13->entry);

    VAR_12->plugin_host = VAR_13;
    VAR_13->element = VAR_12;

    FUNC_4(VAR_13);

    return VAR_9;
}

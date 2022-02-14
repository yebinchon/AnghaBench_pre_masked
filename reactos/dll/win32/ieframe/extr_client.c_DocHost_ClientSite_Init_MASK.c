
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_15__ {TYPE_2__ IServiceProvider_iface; TYPE_1__ IDispatch_iface; TYPE_6__ IOleControlSite_iface; TYPE_5__ IOleDocumentSite_iface; TYPE_4__ IOleInPlaceSiteEx_iface; TYPE_3__ IOleClientSite_iface; } ;
typedef TYPE_7__ DocHost ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(DocHost *VAR_6)
{
    VAR_6->IOleClientSite_iface.lpVtbl = &VAR_1;
    VAR_6->IOleInPlaceSiteEx_iface.lpVtbl = &VAR_4;
    VAR_6->IOleDocumentSite_iface.lpVtbl = &VAR_3;
    VAR_6->IOleControlSite_iface.lpVtbl = &VAR_2;
    VAR_6->IDispatch_iface.lpVtbl = &VAR_0;
    VAR_6->IServiceProvider_iface.lpVtbl = &VAR_5;
}


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
struct TYPE_15__ {TYPE_2__ IObjectSafety_iface; TYPE_1__ IOleContainer_iface; TYPE_6__ IObjectWithSite_iface; TYPE_5__ IOleControl_iface; TYPE_4__ IOleDocument_iface; TYPE_3__ IOleObject_iface; } ;
typedef TYPE_7__ HTMLDocument ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(HTMLDocument *VAR_6)
{
    VAR_6->IOleObject_iface.lpVtbl = &VAR_5;
    VAR_6->IOleDocument_iface.lpVtbl = &VAR_4;
    VAR_6->IOleControl_iface.lpVtbl = &VAR_3;
    VAR_6->IObjectWithSite_iface.lpVtbl = &VAR_1;
    VAR_6->IOleContainer_iface.lpVtbl = &VAR_2;
    VAR_6->IObjectSafety_iface.lpVtbl = &VAR_0;
}

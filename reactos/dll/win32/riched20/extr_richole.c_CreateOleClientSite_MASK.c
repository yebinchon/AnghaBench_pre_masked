
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_9__ {int entry; TYPE_3__* reole; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_12__ {int ref; TYPE_5__ IOleClientSite_iface; TYPE_1__ child; TYPE_2__ IOleInPlaceSite_iface; } ;
struct TYPE_11__ {int clientsites; } ;
typedef TYPE_3__ IRichEditOleImpl ;
typedef TYPE_4__ IOleClientSiteImpl ;
typedef TYPE_5__ IOleClientSite ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_2(IRichEditOleImpl *VAR_4, IOleClientSite **VAR_5)
{
    IOleClientSiteImpl *VAR_6 = FUNC_0(sizeof *VAR_6);

    if (!VAR_6)
        return VAR_0;

    VAR_6->IOleClientSite_iface.lpVtbl = &VAR_2;
    VAR_6->IOleInPlaceSite_iface.lpVtbl = &VAR_3;
    VAR_6->ref = 1;
    VAR_6->child.reole = VAR_4;
    FUNC_1(&VAR_4->clientsites, &VAR_6->child.entry);

    *VAR_5 = &VAR_6->IOleClientSite_iface;
    return VAR_1;
}

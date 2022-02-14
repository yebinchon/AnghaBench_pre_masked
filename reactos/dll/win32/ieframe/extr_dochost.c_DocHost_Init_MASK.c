
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int loading_pos; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_15__ {int cps; TYPE_3__ travellog; int task_queue; int ready_state; int const* container_vtbl; int * wb; TYPE_2__ IPropertyNotifySink_iface; TYPE_1__ IOleCommandTarget_iface; TYPE_4__ IDocHostUIHandler2_iface; } ;
typedef int IWebBrowser2 ;
typedef int IUnknown ;
typedef int IDocHostContainerVtbl ;
typedef TYPE_5__ DocHost ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;

void FUNC_6(DocHost *VAR_4, IWebBrowser2 *VAR_5, const IDocHostContainerVtbl* VAR_6)
{
    VAR_4->IDocHostUIHandler2_iface.lpVtbl = &VAR_0;
    VAR_4->IOleCommandTarget_iface.lpVtbl = &VAR_1;
    VAR_4->IPropertyNotifySink_iface.lpVtbl = &VAR_2;

    VAR_4->wb = VAR_5;
    VAR_4->container_vtbl = VAR_6;

    VAR_4->ready_state = VAR_3;
    FUNC_5(&VAR_4->task_queue);

    VAR_4->travellog.loading_pos = -1;

    FUNC_1(VAR_4);
    FUNC_2(VAR_4);

    FUNC_0(&VAR_4->cps, (IUnknown*)VAR_5);
    FUNC_3(VAR_4);
    FUNC_4(VAR_4);
}

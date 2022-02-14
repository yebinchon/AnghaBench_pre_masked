
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int nsIDOMNode ;
typedef int nsIDOMHTMLElement ;
struct TYPE_21__ {int * vtbl; } ;
typedef TYPE_7__ dispex_static_data_t ;
struct TYPE_18__ {int dispex; } ;
struct TYPE_14__ {TYPE_6__* vtbl; int * cp_container; int * nsnode; TYPE_4__ event_target; } ;
struct TYPE_19__ {int * lpVtbl; } ;
struct TYPE_17__ {int * lpVtbl; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_22__ {TYPE_13__ node; TYPE_5__ IHTMLElement_iface; int cp_container; int * nselem; TYPE_3__ IHTMLElement4_iface; TYPE_2__ IHTMLElement3_iface; TYPE_1__ IHTMLElement2_iface; } ;
struct TYPE_20__ {int cpc_entries; } ;
typedef int IUnknown ;
typedef TYPE_8__ HTMLElement ;
typedef int HTMLDocumentNode ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,TYPE_13__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,TYPE_7__*) ;

void FUNC_4(HTMLElement *VAR_6, HTMLDocumentNode *VAR_7, nsIDOMHTMLElement *VAR_8, dispex_static_data_t *VAR_9)
{
    VAR_6->IHTMLElement_iface.lpVtbl = &VAR_3;
    VAR_6->IHTMLElement2_iface.lpVtbl = &VAR_0;
    VAR_6->IHTMLElement3_iface.lpVtbl = &VAR_1;
    VAR_6->IHTMLElement4_iface.lpVtbl = &VAR_2;

    if(VAR_9 && !VAR_9->vtbl)
        VAR_9->vtbl = &VAR_5;
    FUNC_3(&VAR_6->node.event_target.dispex, (IUnknown*)&VAR_6->IHTMLElement_iface,
            VAR_9 ? VAR_9 : &VAR_4);

    if(VAR_8) {
        FUNC_1(VAR_7, &VAR_6->node, (nsIDOMNode*)VAR_8);


        FUNC_2((nsIDOMNode*)VAR_8 == VAR_6->node.nsnode);
        VAR_6->nselem = VAR_8;
    }

    VAR_6->node.cp_container = &VAR_6->cp_container;
    FUNC_0(&VAR_6->cp_container, (IUnknown*)&VAR_6->IHTMLElement_iface, VAR_6->node.vtbl->cpc_entries);
}

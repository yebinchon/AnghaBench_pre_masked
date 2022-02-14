
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
typedef int nsIDOMNode ;
struct TYPE_10__ {int dispex; } ;
struct TYPE_13__ {int * nsnode; TYPE_2__ event_target; int * vtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_12__ {TYPE_5__ node; scalar_t__ nstext; TYPE_3__ IHTMLDOMTextNode_iface; TYPE_1__ IHTMLDOMTextNode2_iface; } ;
typedef int IUnknown ;
typedef int HTMLDocumentNode ;
typedef TYPE_4__ HTMLDOMTextNode ;
typedef TYPE_5__ HTMLDOMNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_5__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;

HRESULT FUNC_6(HTMLDocumentNode *VAR_8, nsIDOMNode *VAR_9, HTMLDOMNode **VAR_10)
{
    HTMLDOMTextNode *VAR_11;
    nsresult VAR_12;

    VAR_11 = FUNC_2(sizeof(*VAR_11));
    if(!VAR_11)
        return VAR_0;

    VAR_11->node.vtbl = &VAR_2;
    VAR_11->IHTMLDOMTextNode_iface.lpVtbl = &VAR_3;
    VAR_11->IHTMLDOMTextNode2_iface.lpVtbl = &VAR_1;

    FUNC_3(&VAR_11->node.event_target.dispex, (IUnknown*)&VAR_11->IHTMLDOMTextNode_iface,
            &VAR_4);

    FUNC_0(VAR_8, &VAR_11->node, VAR_9);

    VAR_12 = FUNC_4(VAR_9, &VAR_5, (void**)&VAR_11->nstext);
    FUNC_1(VAR_12 == VAR_6 && (nsIDOMNode*)VAR_11->nstext == VAR_11->node.nsnode);


    FUNC_5(VAR_11->node.nsnode);

    *VAR_10 = &VAR_11->node;
    return VAR_7;
}

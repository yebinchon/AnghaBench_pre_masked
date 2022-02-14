
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
typedef int nsIDOMHTMLElement ;
struct TYPE_12__ {int * vtbl; } ;
struct TYPE_15__ {TYPE_3__ node; } ;
struct TYPE_13__ {TYPE_6__ element; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_14__ {TYPE_4__ plugin_container; int nsobject; TYPE_2__ IHTMLObjectElement2_iface; TYPE_1__ IHTMLObjectElement_iface; } ;
typedef TYPE_5__ HTMLObjectElement ;
typedef TYPE_6__ HTMLElement ;
typedef int HTMLDocumentNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 TYPE_5__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;

HRESULT FUNC_4(HTMLDocumentNode *VAR_8, nsIDOMHTMLElement *VAR_9, HTMLElement **VAR_10)
{
    HTMLObjectElement *VAR_11;
    nsresult VAR_12;

    VAR_11 = FUNC_2(sizeof(*VAR_11));
    if(!VAR_11)
        return VAR_0;

    VAR_11->IHTMLObjectElement_iface.lpVtbl = &VAR_3;
    VAR_11->IHTMLObjectElement2_iface.lpVtbl = &VAR_1;
    VAR_11->plugin_container.element.node.vtbl = &VAR_2;

    FUNC_0(&VAR_11->plugin_container.element, VAR_8, VAR_9, &VAR_4);

    VAR_12 = FUNC_3(VAR_9, &VAR_5, (void**)&VAR_11->nsobject);
    FUNC_1(VAR_12 == VAR_6);

    *VAR_10 = &VAR_11->plugin_container.element;
    return VAR_7;
}

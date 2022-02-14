
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int nsIDOMHTMLElement ;
struct TYPE_12__ {int * vtbl; } ;
struct TYPE_15__ {TYPE_3__ node; } ;
struct TYPE_16__ {TYPE_6__ element; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_14__ {TYPE_9__ framebase; TYPE_2__ IHTMLIFrameElement3_iface; TYPE_1__ IHTMLIFrameElement2_iface; TYPE_4__ IHTMLIFrameElement_iface; } ;
typedef TYPE_5__ HTMLIFrame ;
typedef TYPE_6__ HTMLElement ;
typedef int HTMLDocumentNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_9__*,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* FUNC_1 (int) ;

HRESULT FUNC_2(HTMLDocumentNode *VAR_7, nsIDOMHTMLElement *VAR_8, HTMLElement **VAR_9)
{
    HTMLIFrame *VAR_10;

    VAR_10 = FUNC_1(sizeof(HTMLIFrame));
    if(!VAR_10)
        return VAR_0;

    VAR_10->IHTMLIFrameElement_iface.lpVtbl = &VAR_3;
    VAR_10->IHTMLIFrameElement2_iface.lpVtbl = &VAR_1;
    VAR_10->IHTMLIFrameElement3_iface.lpVtbl = &VAR_2;
    VAR_10->framebase.element.node.vtbl = &VAR_4;

    FUNC_0(&VAR_10->framebase, VAR_7, VAR_8, &VAR_5);

    *VAR_9 = &VAR_10->framebase.element;
    return VAR_6;
}

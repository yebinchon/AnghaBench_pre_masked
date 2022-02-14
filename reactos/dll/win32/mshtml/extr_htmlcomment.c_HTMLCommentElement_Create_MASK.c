
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int nsIDOMNode ;
struct TYPE_11__ {int * vtbl; } ;
struct TYPE_9__ {TYPE_6__ node; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_10__ {TYPE_2__ element; TYPE_1__ IHTMLCommentElement_iface; } ;
typedef TYPE_2__ HTMLElement ;
typedef int HTMLDocumentNode ;
typedef TYPE_3__ HTMLCommentElement ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_6__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int *,int *) ;
 int VAR_4 ;
 TYPE_3__* FUNC_2 (int) ;

HRESULT FUNC_3(HTMLDocumentNode *VAR_5, nsIDOMNode *VAR_6, HTMLElement **VAR_7)
{
    HTMLCommentElement *VAR_8;

    VAR_8 = FUNC_2(sizeof(*VAR_8));
    if(!VAR_8)
        return VAR_0;

    VAR_8->element.node.vtbl = &VAR_1;
    VAR_8->IHTMLCommentElement_iface.lpVtbl = &VAR_2;

    FUNC_1(&VAR_8->element, VAR_5, ((void*)0), &VAR_3);
    FUNC_0(VAR_5, &VAR_8->element.node, VAR_6);

    *VAR_7 = &VAR_8->element;
    return VAR_4;
}

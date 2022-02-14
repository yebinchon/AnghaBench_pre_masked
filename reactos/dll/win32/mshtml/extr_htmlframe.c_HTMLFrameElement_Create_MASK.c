
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int nsIDOMHTMLElement ;
struct TYPE_8__ {int * vtbl; } ;
struct TYPE_11__ {TYPE_1__ node; } ;
struct TYPE_12__ {TYPE_4__ element; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_10__ {TYPE_7__ framebase; TYPE_2__ IHTMLFrameElement3_iface; } ;
typedef TYPE_3__ HTMLFrameElement ;
typedef TYPE_4__ HTMLElement ;
typedef int HTMLDocumentNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (int) ;

HRESULT FUNC_2(HTMLDocumentNode *VAR_5, nsIDOMHTMLElement *VAR_6, HTMLElement **VAR_7)
{
    HTMLFrameElement *VAR_8;

    VAR_8 = FUNC_1(sizeof(HTMLFrameElement));
    if(!VAR_8)
        return VAR_0;

    VAR_8->framebase.element.node.vtbl = &VAR_2;
    VAR_8->IHTMLFrameElement3_iface.lpVtbl = &VAR_1;

    FUNC_0(&VAR_8->framebase, VAR_5, VAR_6, &VAR_3);

    *VAR_7 = &VAR_8->framebase.element;
    return VAR_4;
}

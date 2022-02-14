
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
typedef int nsIDOMHTMLElement ;
struct TYPE_8__ {int * vtbl; } ;
struct TYPE_11__ {TYPE_1__ node; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_10__ {TYPE_4__ element; int nsscript; TYPE_2__ IHTMLScriptElement_iface; } ;
typedef TYPE_3__ HTMLScriptElement ;
typedef TYPE_4__ HTMLElement ;
typedef int HTMLDocumentNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;

HRESULT FUNC_4(HTMLDocumentNode *VAR_7, nsIDOMHTMLElement *VAR_8, HTMLElement **VAR_9)
{
    HTMLScriptElement *VAR_10;
    nsresult VAR_11;

    VAR_10 = FUNC_2(sizeof(HTMLScriptElement));
    if(!VAR_10)
        return VAR_0;

    VAR_10->IHTMLScriptElement_iface.lpVtbl = &VAR_2;
    VAR_10->element.node.vtbl = &VAR_1;

    FUNC_0(&VAR_10->element, VAR_7, VAR_8, &VAR_3);

    VAR_11 = FUNC_3(VAR_8, &VAR_4, (void**)&VAR_10->nsscript);
    FUNC_1(VAR_11 == VAR_5);

    *VAR_9 = &VAR_10->element;
    return VAR_6;
}

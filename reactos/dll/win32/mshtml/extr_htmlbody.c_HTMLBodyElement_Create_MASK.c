
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMHTMLElement ;
struct TYPE_10__ {int * vtbl; } ;
struct TYPE_11__ {TYPE_2__ node; } ;
struct TYPE_13__ {TYPE_3__ element; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_12__ {TYPE_7__ textcont; int nsbody; TYPE_1__ IHTMLBodyElement_iface; } ;
typedef TYPE_3__ HTMLElement ;
typedef int HTMLDocumentNode ;
typedef TYPE_4__ HTMLBodyElement ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_7__*,int *,int *,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 TYPE_4__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,int *,void**) ;

HRESULT FUNC_6(HTMLDocumentNode *VAR_6, nsIDOMHTMLElement *VAR_7, HTMLElement **VAR_8)
{
    HTMLBodyElement *VAR_9;
    nsresult VAR_10;

    VAR_9 = FUNC_3(sizeof(HTMLBodyElement));
    if(!VAR_9)
        return VAR_0;

    VAR_9->IHTMLBodyElement_iface.lpVtbl = &VAR_2;
    VAR_9->textcont.element.node.vtbl = &VAR_1;

    VAR_10 = FUNC_5(VAR_7, &VAR_4, (void**)&VAR_9->nsbody);
    if(FUNC_2(VAR_10)) {
        FUNC_0("Could not get nsDOMHTMLBodyElement: %08x\n", VAR_10);
        FUNC_4(VAR_9);
        return VAR_0;
    }

    FUNC_1(&VAR_9->textcont, VAR_6, VAR_7, &VAR_3);

    *VAR_8 = &VAR_9->textcont.element;
    return VAR_5;
}

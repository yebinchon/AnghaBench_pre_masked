
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMWindow ;
typedef int nsIDOMElement ;
typedef int nsIDOMCSSStyleDeclaration ;
typedef int nsAString ;
struct TYPE_17__ {int * lpVtbl; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_19__ {int ref; TYPE_6__ IHTMLCurrentStyle_iface; TYPE_7__* elem; int dispex; int * nsstyle; TYPE_5__ IHTMLCurrentStyle4_iface; TYPE_4__ IHTMLCurrentStyle3_iface; TYPE_3__ IHTMLCurrentStyle2_iface; } ;
struct TYPE_13__ {TYPE_1__* doc; } ;
struct TYPE_18__ {int IHTMLElement_iface; scalar_t__ nselem; TYPE_2__ node; } ;
struct TYPE_12__ {int nsdoc; } ;
typedef int IUnknown ;
typedef TYPE_6__ IHTMLCurrentStyle ;
typedef TYPE_7__ HTMLElement ;
typedef TYPE_8__ HTMLCurrentStyle ;
typedef int HRESULT ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (char*) ;
 TYPE_8__* FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int **) ;
 int FUNC_10 (int *,int *,int *,int **) ;
 int FUNC_11 (int *) ;

HRESULT FUNC_12(HTMLElement *VAR_9, IHTMLCurrentStyle **VAR_10)
{
    nsIDOMCSSStyleDeclaration *VAR_11;
    nsIDOMWindow *VAR_12;
    nsAString VAR_13;
    HTMLCurrentStyle *VAR_14;
    nsresult VAR_15;

    if(!VAR_9->node.doc->nsdoc) {
        FUNC_3("NULL nsdoc\n");
        return VAR_2;
    }

    VAR_15 = FUNC_9(VAR_9->node.doc->nsdoc, &VAR_12);
    if(FUNC_2(VAR_15)) {
        FUNC_0("GetDefaultView failed: %08x\n", VAR_15);
        return VAR_0;
    }

    FUNC_7(&VAR_13, ((void*)0));
    VAR_15 = FUNC_10(VAR_12, (nsIDOMElement*)VAR_9->nselem, &VAR_13, &VAR_11);
    FUNC_6(&VAR_13);
    FUNC_11(VAR_12);
    if(FUNC_2(VAR_15)) {
        FUNC_0("GetComputedStyle failed: %08x\n", VAR_15);
        return VAR_0;
    }

    if(!VAR_11) {
        FUNC_0("GetComputedStyle returned NULL nsstyle\n");
        return VAR_0;
    }

    VAR_14 = FUNC_4(sizeof(HTMLCurrentStyle));
    if(!VAR_14) {
        FUNC_8(VAR_11);
        return VAR_1;
    }

    VAR_14->IHTMLCurrentStyle_iface.lpVtbl = &VAR_6;
    VAR_14->IHTMLCurrentStyle2_iface.lpVtbl = &VAR_3;
    VAR_14->IHTMLCurrentStyle3_iface.lpVtbl = &VAR_4;
    VAR_14->IHTMLCurrentStyle4_iface.lpVtbl = &VAR_5;
    VAR_14->ref = 1;
    VAR_14->nsstyle = VAR_11;

    FUNC_5(&VAR_14->dispex, (IUnknown*)&VAR_14->IHTMLCurrentStyle_iface, &VAR_7);

    FUNC_1(&VAR_9->IHTMLElement_iface);
    VAR_14->elem = VAR_9;

    *VAR_10 = &VAR_14->IHTMLCurrentStyle_iface;
    return VAR_8;
}

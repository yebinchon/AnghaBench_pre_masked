
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


typedef int nsIDOMNode ;
typedef int nsIDOMHTMLDocument ;
struct TYPE_21__ {int * forward_container; } ;
struct TYPE_22__ {TYPE_3__ cp_container; } ;
struct TYPE_18__ {TYPE_3__* cp_container; int * vtbl; } ;
struct TYPE_25__ {TYPE_4__ basedoc; TYPE_17__ node; int * nsdoc; } ;
struct TYPE_20__ {scalar_t__ window; int cp_container; } ;
struct TYPE_24__ {TYPE_2__ basedoc; } ;
struct TYPE_19__ {scalar_t__ outer_window; } ;
struct TYPE_23__ {TYPE_1__ base; } ;
typedef TYPE_5__ HTMLInnerWindow ;
typedef TYPE_6__ HTMLDocumentObj ;
typedef TYPE_7__ HTMLDocumentNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,TYPE_17__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_1 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int *) ;

HRESULT FUNC_5(nsIDOMHTMLDocument *VAR_3, HTMLDocumentObj *VAR_4, HTMLInnerWindow *VAR_5, HTMLDocumentNode **VAR_6)
{
    HTMLDocumentNode *VAR_7;

    VAR_7 = FUNC_1(VAR_4, VAR_5);
    if(!VAR_7)
        return VAR_0;

    if(!VAR_4->basedoc.window || VAR_5->base.outer_window == VAR_4->basedoc.window)
        VAR_7->basedoc.cp_container.forward_container = &VAR_4->basedoc.cp_container;

    FUNC_0(VAR_7, &VAR_7->node, (nsIDOMNode*)VAR_3);

    FUNC_4(VAR_3);
    VAR_7->nsdoc = VAR_3;

    FUNC_3(VAR_7);
    FUNC_2(VAR_7);

    VAR_7->node.vtbl = &VAR_1;
    VAR_7->node.cp_container = &VAR_7->basedoc.cp_container;

    *VAR_6 = VAR_7;
    return VAR_2;
}

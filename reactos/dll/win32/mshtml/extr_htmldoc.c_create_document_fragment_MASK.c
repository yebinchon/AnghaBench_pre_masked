
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int nsIDOMNode ;
struct TYPE_14__ {int * cp_container; int * vtbl; } ;
struct TYPE_11__ {int IHTMLWindow2_iface; } ;
struct TYPE_13__ {TYPE_2__ base; } ;
struct TYPE_10__ {int cp_container; int doc_obj; } ;
struct TYPE_12__ {TYPE_1__ basedoc; TYPE_9__ node; TYPE_7__* window; } ;
typedef TYPE_3__ HTMLDocumentNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_9__*,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 TYPE_3__* FUNC_2 (int ,TYPE_7__*) ;

__attribute__((used)) static HRESULT FUNC_3(nsIDOMNode *VAR_3, HTMLDocumentNode *VAR_4, HTMLDocumentNode **VAR_5)
{
    HTMLDocumentNode *VAR_6;

    VAR_6 = FUNC_2(VAR_4->basedoc.doc_obj, VAR_4->window);
    if(!VAR_6)
        return VAR_0;

    FUNC_1(&VAR_6->window->base.IHTMLWindow2_iface);

    FUNC_0(VAR_4, &VAR_6->node, VAR_3);
    VAR_6->node.vtbl = &VAR_1;
    VAR_6->node.cp_container = &VAR_6->basedoc.cp_container;

    *VAR_5 = VAR_6;
    return VAR_2;
}

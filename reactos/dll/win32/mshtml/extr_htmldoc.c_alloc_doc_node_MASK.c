
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int IDispatchEx_iface; } ;
struct TYPE_17__ {int window; int * doc_obj; TYPE_5__* doc_node; } ;
struct TYPE_13__ {TYPE_7__ dispex; } ;
struct TYPE_14__ {TYPE_2__ event_target; int IHTMLDOMNode_iface; } ;
struct TYPE_16__ {int ref; int plugin_hosts; int range_list; int selection_list; TYPE_3__ node; TYPE_6__ basedoc; TYPE_4__* window; } ;
struct TYPE_12__ {int outer_window; } ;
struct TYPE_15__ {TYPE_1__ base; } ;
typedef int IUnknown ;
typedef TYPE_4__ HTMLInnerWindow ;
typedef int HTMLDocumentObj ;
typedef TYPE_5__ HTMLDocumentNode ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 TYPE_5__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*,int *,int *) ;
 int FUNC_3 (TYPE_6__*,int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static HTMLDocumentNode *FUNC_5(HTMLDocumentObj *VAR_1, HTMLInnerWindow *VAR_2)
{
    HTMLDocumentNode *VAR_3;

    VAR_3 = FUNC_1(sizeof(HTMLDocumentNode));
    if(!VAR_3)
        return ((void*)0);

    VAR_3->ref = 1;
    VAR_3->basedoc.doc_node = VAR_3;
    VAR_3->basedoc.doc_obj = VAR_1;
    VAR_3->basedoc.window = VAR_2->base.outer_window;
    VAR_3->window = VAR_2;

    FUNC_2(&VAR_3->node.event_target.dispex, (IUnknown*)&VAR_3->node.IHTMLDOMNode_iface,
            &VAR_0);
    FUNC_3(&VAR_3->basedoc, (IUnknown*)&VAR_3->node.IHTMLDOMNode_iface,
            &VAR_3->node.event_target.dispex.IDispatchEx_iface);
    FUNC_0(VAR_3);

    FUNC_4(&VAR_3->selection_list);
    FUNC_4(&VAR_3->range_list);
    FUNC_4(&VAR_3->plugin_hosts);

    return VAR_3;
}

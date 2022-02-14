
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_17__ {TYPE_4__* inner_window; } ;
struct TYPE_21__ {TYPE_8__* frame_element; TYPE_5__ base; TYPE_2__* doc_obj; int readystate_pending; } ;
struct TYPE_18__ {int nsnode; TYPE_11__* doc; } ;
struct TYPE_19__ {TYPE_6__ node; } ;
struct TYPE_20__ {TYPE_7__ element; } ;
struct TYPE_16__ {TYPE_11__* doc; } ;
struct TYPE_15__ {int nsnode; } ;
struct TYPE_13__ {int cp_container; TYPE_9__* window; } ;
struct TYPE_14__ {TYPE_1__ basedoc; } ;
struct TYPE_12__ {TYPE_3__ node; } ;
typedef TYPE_9__ HTMLOuterWindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_11__*,int ,int ,int ,int *,int *) ;

__attribute__((used)) static void FUNC_2(HTMLOuterWindow *VAR_4)
{
    VAR_4->readystate_pending = VAR_2;

    if(VAR_4->doc_obj && VAR_4->doc_obj->basedoc.window == VAR_4)
        FUNC_0(&VAR_4->doc_obj->basedoc.cp_container, VAR_0);

    FUNC_1(VAR_4->base.inner_window->doc, VAR_1, VAR_2,
            VAR_4->base.inner_window->doc->node.nsnode, ((void*)0), ((void*)0));

    if(VAR_4->frame_element)
        FUNC_1(VAR_4->frame_element->element.node.doc, VAR_1,
                   VAR_3, VAR_4->frame_element->element.node.nsnode, ((void*)0), ((void*)0));
}

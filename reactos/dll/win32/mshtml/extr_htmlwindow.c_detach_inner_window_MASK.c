
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_19__ {int IHTMLWindow2_iface; TYPE_7__* outer_window; } ;
struct TYPE_21__ {TYPE_6__ base; int task_magic; TYPE_11__* doc; } ;
struct TYPE_18__ {TYPE_8__* inner_window; } ;
struct TYPE_20__ {TYPE_5__ base; TYPE_2__* doc_obj; } ;
struct TYPE_16__ {int * forward_container; } ;
struct TYPE_17__ {TYPE_3__ cp_container; } ;
struct TYPE_14__ {TYPE_7__* window; } ;
struct TYPE_15__ {TYPE_1__ basedoc; } ;
struct TYPE_13__ {int plugin_hosts; TYPE_4__ basedoc; } ;
typedef TYPE_7__ HTMLOuterWindow ;
typedef TYPE_8__ HTMLInnerWindow ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_11__*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(HTMLInnerWindow *VAR_2)
{
    HTMLOuterWindow *VAR_3 = VAR_2->base.outer_window;

    if(VAR_3 && VAR_3->doc_obj && VAR_3 == VAR_3->doc_obj->basedoc.window)
        VAR_2->doc->basedoc.cp_container.forward_container = ((void*)0);

    if(VAR_2->doc) {
        FUNC_3(VAR_2->doc);
        while(!FUNC_5(&VAR_2->doc->plugin_hosts))
            FUNC_4(FUNC_1(FUNC_6(&VAR_2->doc->plugin_hosts), VAR_0, VAR_1));
    }

    FUNC_2(VAR_2);
    FUNC_8(VAR_2->task_magic);
    FUNC_7(VAR_2);
    VAR_2->base.outer_window = ((void*)0);

    if(VAR_3 && VAR_3->base.inner_window == VAR_2) {
        VAR_3->base.inner_window = ((void*)0);
        FUNC_0(&VAR_2->base.IHTMLWindow2_iface);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int windowref_t ;
typedef int nsIDOMWindow ;
struct TYPE_12__ {int ref; TYPE_2__* window; } ;
struct TYPE_10__ {int * inner_window; int IHTMLWindow2_iface; TYPE_2__* outer_window; } ;
struct TYPE_11__ {TYPE_1__ base; int sibling_entry; int children; struct TYPE_11__* parent; int entry; int task_magic; int secmgr; int pending_window; int readystate; int scriptmode; int * nswindow; TYPE_4__* window_ref; int * doc_obj; } ;
typedef TYPE_2__ HTMLOuterWindow ;
typedef int HTMLDocumentObj ;
typedef int HRESULT ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (char*,TYPE_2__*,int *) ;
 TYPE_2__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 () ;
 TYPE_4__* FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int VAR_4 ;

HRESULT FUNC_16(HTMLDocumentObj *VAR_5, nsIDOMWindow *VAR_6,
        HTMLOuterWindow *VAR_7, HTMLOuterWindow **VAR_8)
{
    HTMLOuterWindow *VAR_9;
    HRESULT VAR_10;

    VAR_9 = FUNC_6(sizeof(HTMLOuterWindow));
    if(!VAR_9)
        return VAR_0;

    VAR_9->base.outer_window = VAR_9;
    VAR_9->base.inner_window = ((void*)0);

    VAR_9->window_ref = FUNC_9(sizeof(windowref_t));
    if(!VAR_9->window_ref) {
        FUNC_10(VAR_9);
        return VAR_0;
    }

    VAR_9->doc_obj = VAR_5;

    VAR_9->window_ref->window = VAR_9;
    VAR_9->window_ref->ref = 1;

    if(VAR_6) {
        FUNC_14(VAR_6);
        VAR_9->nswindow = VAR_6;
    }

    VAR_9->scriptmode = VAR_7 ? VAR_7->scriptmode : VAR_2;
    VAR_9->readystate = VAR_1;

    VAR_10 = FUNC_7(VAR_9, ((void*)0));
    if(FUNC_4(VAR_10))
        VAR_10 = FUNC_15(VAR_9->pending_window);
    if(FUNC_1(VAR_10)) {
        FUNC_3(&VAR_9->base.IHTMLWindow2_iface);
        return VAR_10;
    }

    VAR_10 = FUNC_0(((void*)0), &VAR_9->secmgr, 0);
    if(FUNC_1(VAR_10)) {
        FUNC_3(&VAR_9->base.IHTMLWindow2_iface);
        return VAR_10;
    }

    VAR_9->task_magic = FUNC_8();

    FUNC_13(&VAR_9->children);
    FUNC_11(&VAR_4, &VAR_9->entry);

    if(VAR_7) {
        FUNC_2(&VAR_9->base.IHTMLWindow2_iface);

        VAR_9->parent = VAR_7;
        FUNC_12(&VAR_7->children, &VAR_9->sibling_entry);
    }

    FUNC_5("%p inner_window %p\n", VAR_9, VAR_9->base.inner_window);

    *VAR_8 = VAR_9;
    return VAR_3;
}

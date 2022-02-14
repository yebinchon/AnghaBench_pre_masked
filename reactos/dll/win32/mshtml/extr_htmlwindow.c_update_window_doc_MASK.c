
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int nsresult ;
typedef int nsIDOMHTMLDocument ;
typedef int nsIDOMDocument ;
typedef int nsAString ;
struct TYPE_14__ {TYPE_10__* doc_node; TYPE_4__* window; } ;
struct TYPE_17__ {scalar_t__ usermode; TYPE_3__ basedoc; } ;
struct TYPE_12__ {TYPE_4__* outer_window; } ;
struct TYPE_16__ {TYPE_10__* doc; TYPE_1__ base; } ;
struct TYPE_13__ {TYPE_5__* inner_window; } ;
struct TYPE_15__ {TYPE_8__* doc_obj; TYPE_5__* pending_window; TYPE_2__ base; int nswindow; } ;
struct TYPE_11__ {int basedoc; int nsdoc; } ;
typedef char PRUnichar ;
typedef TYPE_4__ HTMLOuterWindow ;
typedef TYPE_5__ HTMLInnerWindow ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,TYPE_8__*,TYPE_5__*,TYPE_10__**) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *,int *,void**) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int **) ;

HRESULT FUNC_15(HTMLInnerWindow *VAR_5)
{
    HTMLOuterWindow *VAR_6 = VAR_5->base.outer_window;
    nsIDOMHTMLDocument *VAR_7;
    nsIDOMDocument *VAR_8;
    nsresult VAR_9;
    HRESULT VAR_10;

    FUNC_3(!VAR_5->doc);

    if(!VAR_6) {
        FUNC_0("NULL outer window\n");
        return VAR_2;
    }

    VAR_9 = FUNC_14(VAR_6->nswindow, &VAR_8);
    if(FUNC_2(VAR_9) || !VAR_8) {
        FUNC_0("GetDocument failed: %08x\n", VAR_9);
        return VAR_1;
    }

    VAR_9 = FUNC_10(VAR_8, &VAR_3, (void**)&VAR_7);
    FUNC_11(VAR_8);
    if(FUNC_2(VAR_9)) {
        FUNC_0("Could not get nsIDOMHTMLDocument iface: %08x\n", VAR_9);
        return VAR_1;
    }

    VAR_10 = FUNC_4(VAR_7, VAR_6->doc_obj, VAR_5, &VAR_5->doc);
    FUNC_12(VAR_7);
    if(FUNC_1(VAR_10))
        return VAR_10;

    if(VAR_6->doc_obj->usermode == VAR_0) {
        nsAString VAR_11;
        nsresult VAR_12;

        static const PRUnichar VAR_13[] = {'o','n',0};

        FUNC_9(&VAR_11, VAR_13);
        VAR_12 = FUNC_13(VAR_5->doc->nsdoc, &VAR_11);
        FUNC_8(&VAR_11);
        if(FUNC_2(VAR_12))
            FUNC_0("SetDesignMode failed: %08x\n", VAR_12);
    }

    if(VAR_5 != VAR_6->pending_window) {
        FUNC_0("not current pending window\n");
        return VAR_4;
    }

    if(VAR_6->base.inner_window)
        FUNC_5(VAR_6->base.inner_window);
    VAR_6->base.inner_window = VAR_5;
    VAR_6->pending_window = ((void*)0);

    if(VAR_6->doc_obj->basedoc.window == VAR_6 || !VAR_6->doc_obj->basedoc.window) {
        if(VAR_6->doc_obj->basedoc.doc_node)
            FUNC_7(&VAR_6->doc_obj->basedoc.doc_node->basedoc);
        VAR_6->doc_obj->basedoc.doc_node = VAR_5->doc;
        FUNC_6(&VAR_5->doc->basedoc);
    }

    return VAR_10;
}

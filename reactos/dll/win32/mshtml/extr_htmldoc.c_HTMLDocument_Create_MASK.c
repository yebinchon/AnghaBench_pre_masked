
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
typedef struct TYPE_18__ TYPE_16__ ;
typedef struct TYPE_17__ TYPE_13__ ;


typedef int nsresult ;
typedef int nsIDOMWindow ;
struct TYPE_25__ {int IDispatchEx_iface; } ;
struct TYPE_24__ {TYPE_4__* doc_node; TYPE_16__* window; TYPE_5__* doc_obj; } ;
struct TYPE_19__ {int * lpVtbl; } ;
struct TYPE_23__ {int ref; TYPE_6__ basedoc; TYPE_13__* nscontainer; int usermode; TYPE_1__ ICustomDoc_iface; TYPE_7__ dispex; } ;
struct TYPE_22__ {int basedoc; } ;
struct TYPE_21__ {TYPE_2__* inner_window; } ;
struct TYPE_20__ {TYPE_4__* doc; } ;
struct TYPE_18__ {TYPE_3__ base; } ;
struct TYPE_17__ {int webbrowser; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_5__ HTMLDocumentObj ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_5__*,int *,int *,TYPE_16__**) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,int *,int ,void**) ;
 int FUNC_5 (TYPE_5__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_5__*,TYPE_13__**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 TYPE_5__* FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_6__*,int ,void**) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_7__*,int *,int *) ;
 int FUNC_15 (TYPE_6__*,int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int **) ;

HRESULT FUNC_18(IUnknown *VAR_5, REFIID VAR_6, void** VAR_7)
{
    HTMLDocumentObj *VAR_8;
    nsIDOMWindow *VAR_9 = ((void*)0);
    nsresult VAR_10;
    HRESULT VAR_11;

    FUNC_4("(%p %s %p)\n", VAR_5, FUNC_7(VAR_6), VAR_7);

    VAR_8 = FUNC_9(sizeof(HTMLDocumentObj));
    if(!VAR_8)
        return VAR_1;

    FUNC_14(&VAR_8->dispex, (IUnknown*)&VAR_8->ICustomDoc_iface, &VAR_2);
    FUNC_15(&VAR_8->basedoc, (IUnknown*)&VAR_8->ICustomDoc_iface, &VAR_8->dispex.IDispatchEx_iface);
    FUNC_5(VAR_8);

    VAR_8->ICustomDoc_iface.lpVtbl = &VAR_0;
    VAR_8->ref = 1;
    VAR_8->basedoc.doc_obj = VAR_8;

    VAR_8->usermode = VAR_4;

    FUNC_13(VAR_8);

    VAR_11 = FUNC_6(VAR_8, &VAR_8->nscontainer);
    if(FUNC_1(VAR_11)) {
        FUNC_0("Failed to init Gecko, returning CLASS_E_CLASSNOTAVAILABLE\n");
        FUNC_12(&VAR_8->basedoc);
        return VAR_11;
    }

    VAR_11 = FUNC_11(&VAR_8->basedoc, VAR_6, VAR_7);
    FUNC_12(&VAR_8->basedoc);
    if(FUNC_1(VAR_11))
        return VAR_11;

    VAR_10 = FUNC_17(VAR_8->nscontainer->webbrowser, &VAR_9);
    if(FUNC_3(VAR_10))
        FUNC_0("GetContentDOMWindow failed: %08x\n", VAR_10);

    VAR_11 = FUNC_2(VAR_8, VAR_9, ((void*)0) , &VAR_8->basedoc.window);
    if(VAR_9)
        FUNC_16(VAR_9);
    if(FUNC_1(VAR_11)) {
        FUNC_12(&VAR_8->basedoc);
        return VAR_11;
    }

    if(!VAR_8->basedoc.doc_node && VAR_8->basedoc.window->base.inner_window->doc) {
        VAR_8->basedoc.doc_node = VAR_8->basedoc.window->base.inner_window->doc;
        FUNC_10(&VAR_8->basedoc.doc_node->basedoc);
    }

    FUNC_8();

    return VAR_3;
}

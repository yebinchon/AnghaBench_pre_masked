
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


typedef int nsresult ;
typedef int nsAString ;
struct TYPE_16__ {int IDispatchEx_iface; } ;
struct TYPE_21__ {TYPE_3__ dispex; } ;
struct TYPE_14__ {TYPE_8__ event_target; } ;
struct TYPE_20__ {TYPE_2__* window; int basedoc; TYPE_1__ node; } ;
struct TYPE_17__ {TYPE_8__ event_target; } ;
struct TYPE_19__ {TYPE_4__ node; } ;
struct TYPE_18__ {int nsscript; } ;
struct TYPE_15__ {TYPE_8__ event_target; } ;
typedef int PRUnichar ;
typedef TYPE_5__ HTMLScriptElement ;
typedef TYPE_6__ HTMLElement ;
typedef TYPE_7__ HTMLDocumentNode ;
typedef int HRESULT ;
typedef TYPE_8__ EventTarget ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_7__*,int const*,TYPE_6__**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const**) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int const*,int ) ;
 int VAR_1 ;

__attribute__((used)) static EventTarget *FUNC_12(HTMLDocumentNode *VAR_2, HTMLScriptElement *VAR_3)
{
    EventTarget *VAR_4 = ((void*)0);
    const PRUnichar *VAR_5;
    nsAString VAR_6;
    nsresult VAR_7;
    HRESULT VAR_8;

    FUNC_9(&VAR_6, ((void*)0));
    VAR_7 = FUNC_10(VAR_3->nsscript, &VAR_6);
    if(FUNC_3(VAR_7)) {
        FUNC_0("GetScriptFor failed: %08x\n", VAR_7);
        FUNC_7(&VAR_6);
        return ((void*)0);
    }

    FUNC_8(&VAR_6, &VAR_5);
    if(!*VAR_5) {
        FUNC_1("Empty for attribute\n");
    }else if(!FUNC_11(VAR_5, VAR_0)) {
        VAR_4 = &VAR_2->node.event_target;
        FUNC_6(&VAR_2->basedoc);
    }else if(!FUNC_11(VAR_5, VAR_1)) {
        if(VAR_2->window) {
            VAR_4 = &VAR_2->window->event_target;
            FUNC_2(&VAR_4->dispex.IDispatchEx_iface);
        }
    }else {
        HTMLElement *VAR_9;

        VAR_8 = FUNC_5(VAR_2, VAR_5, &VAR_9);
        if(FUNC_4(VAR_8) && VAR_9) {
            VAR_4 = &VAR_9->node.event_target;
        }
    }

    FUNC_7(&VAR_6);
    return VAR_4;
}

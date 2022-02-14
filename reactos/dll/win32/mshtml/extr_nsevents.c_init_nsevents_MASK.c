
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMEventTarget ;
struct TYPE_15__ {int nsIDOMEventListener_iface; } ;
struct TYPE_13__ {int ref; TYPE_6__ load_listener; TYPE_6__ keypress_listener; TYPE_6__ focus_listener; TYPE_6__ blur_listener; TYPE_6__ htmlevent_listener; TYPE_4__* doc; } ;
typedef TYPE_3__ nsDocumentEventListener ;
struct TYPE_12__ {TYPE_1__* window; } ;
struct TYPE_14__ {TYPE_2__ basedoc; TYPE_3__* nsevent_listener; } ;
struct TYPE_11__ {int nswindow; } ;
typedef TYPE_4__ HTMLDocumentNode ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_4__*,TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_3__*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,void**) ;

void FUNC_8(HTMLDocumentNode *VAR_12)
{
    nsDocumentEventListener *VAR_13;
    nsIDOMEventTarget *VAR_14;
    nsresult VAR_15;

    VAR_13 = FUNC_3(sizeof(nsDocumentEventListener));
    if(!VAR_13)
        return;

    FUNC_2("%p %p\n", VAR_12, VAR_13);

    VAR_13->ref = 1;
    VAR_13->doc = VAR_12;

    FUNC_5(&VAR_13->blur_listener, VAR_13, &VAR_4);
    FUNC_5(&VAR_13->focus_listener, VAR_13, &VAR_6);
    FUNC_5(&VAR_13->keypress_listener, VAR_13, &VAR_9);
    FUNC_5(&VAR_13->load_listener, VAR_13, &VAR_11);
    FUNC_5(&VAR_13->htmlevent_listener, VAR_13, &VAR_7);

    VAR_12->nsevent_listener = VAR_13;

    VAR_15 = FUNC_7(VAR_12->basedoc.window->nswindow, &VAR_1, (void**)&VAR_14);
    if(FUNC_1(VAR_15)) {
        FUNC_0("Could not get nsIDOMEventTarget interface: %08x\n", VAR_15);
        return;
    }

    FUNC_4(VAR_14, VAR_3, &VAR_13->blur_listener.nsIDOMEventListener_iface, VAR_2);
    FUNC_4(VAR_14, VAR_5, &VAR_13->focus_listener.nsIDOMEventListener_iface, VAR_2);
    FUNC_4(VAR_14, VAR_8, &VAR_13->keypress_listener.nsIDOMEventListener_iface, VAR_0);
    FUNC_4(VAR_14, VAR_10, &VAR_13->load_listener.nsIDOMEventListener_iface, VAR_2);

    FUNC_6(VAR_14);
}

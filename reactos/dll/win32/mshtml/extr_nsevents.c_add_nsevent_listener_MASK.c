
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMNode ;
typedef int nsIDOMEventTarget ;
struct TYPE_10__ {TYPE_3__* window; } ;
struct TYPE_11__ {TYPE_2__* nsevent_listener; TYPE_4__ basedoc; } ;
struct TYPE_9__ {int nswindow; } ;
struct TYPE_7__ {int nsIDOMEventListener_iface; } ;
struct TYPE_8__ {TYPE_1__ htmlevent_listener; } ;
typedef int LPCWSTR ;
typedef TYPE_5__ HTMLDocumentNode ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int ,int *,void**) ;

void FUNC_6(HTMLDocumentNode *VAR_2, nsIDOMNode *VAR_3, LPCWSTR VAR_4)
{
    nsIDOMEventTarget *VAR_5;
    nsresult VAR_6;

    if(VAR_3)
        VAR_6 = FUNC_4(VAR_3, &VAR_0, (void**)&VAR_5);
    else
        VAR_6 = FUNC_5(VAR_2->basedoc.window->nswindow, &VAR_0, (void**)&VAR_5);
    if(FUNC_1(VAR_6)) {
        FUNC_0("Could not get nsIDOMEventTarget interface: %08x\n", VAR_6);
        return;
    }

    FUNC_2(VAR_5, VAR_4, &VAR_2->nsevent_listener->htmlevent_listener.nsIDOMEventListener_iface,
            VAR_1);
    FUNC_3(VAR_5);
}

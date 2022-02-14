
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
typedef int nsIDOMEventTarget ;
typedef int nsAString ;
typedef char WCHAR ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; TYPE_2__ nsIDOMEventListener_iface; TYPE_1__* xhr; } ;
struct TYPE_6__ {TYPE_4__* event_listener; int nsxhr; } ;
typedef TYPE_1__ HTMLXMLHttpRequest ;
typedef int DispatchEx ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 TYPE_4__* FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char const*) ;
 scalar_t__ FUNC_8 (int *,int *,TYPE_2__*,int ,int ,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *,void**) ;

__attribute__((used)) static void FUNC_11(DispatchEx *VAR_6, int VAR_7)
{
    HTMLXMLHttpRequest *VAR_8 = FUNC_5(VAR_6);
    nsIDOMEventTarget *VAR_9;
    nsAString VAR_10;
    nsresult VAR_11;

    static const WCHAR VAR_12[] = {'r','e','a','d','y','s','t','a','t','e','c','h','a','n','g','e',0};

    FUNC_2("(%p)\n", VAR_8);

    FUNC_3(VAR_7 == VAR_0);

    if(VAR_8->event_listener)
        return;

    VAR_8->event_listener = FUNC_4(sizeof(*VAR_8->event_listener));
    if(!VAR_8->event_listener)
        return;

    VAR_8->event_listener->nsIDOMEventListener_iface.lpVtbl = &VAR_5;
    VAR_8->event_listener->ref = 1;
    VAR_8->event_listener->xhr = VAR_8;

    VAR_11 = FUNC_10(VAR_8->nsxhr, &VAR_2, (void**)&VAR_9);
    FUNC_3(VAR_11 == VAR_3);

    FUNC_7(&VAR_10, VAR_12);
    VAR_11 = FUNC_8(VAR_9, &VAR_10, &VAR_8->event_listener->nsIDOMEventListener_iface, VAR_1, VAR_4, 2);
    FUNC_6(&VAR_10);
    FUNC_9(VAR_9);
    if(FUNC_1(VAR_11))
        FUNC_0("AddEventListener failed: %08x\n", VAR_11);
}

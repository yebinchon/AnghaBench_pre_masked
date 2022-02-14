
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
typedef int nsIDOMEventTarget ;
typedef int nsAString ;
struct TYPE_5__ {int nsIDOMEventListener_iface; TYPE_1__* xhr; } ;
typedef TYPE_2__ XMLHttpReqEventListener ;
typedef char WCHAR ;
struct TYPE_4__ {int * event_listener; int nsxhr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int *,int ) ;
 scalar_t__ FUNC_6 (int ,int *,void**) ;

__attribute__((used)) static void FUNC_7(XMLHttpReqEventListener *VAR_3)
{
    nsIDOMEventTarget *VAR_4;
    nsAString VAR_5;
    nsresult VAR_6;

    static const WCHAR VAR_7[] =
        {'o','n','r','e','a','d','y','s','t','a','t','e','c','h','a','n','g','e',0};

    VAR_6 = FUNC_6(VAR_3->xhr->nsxhr, &VAR_1, (void**)&VAR_4);
    FUNC_0(VAR_6 == VAR_2);

    FUNC_2(&VAR_5, VAR_7);
    VAR_6 = FUNC_5(VAR_4, &VAR_5, &VAR_3->nsIDOMEventListener_iface, VAR_0);
    FUNC_1(&VAR_5);
    FUNC_4(VAR_4);

    VAR_3->xhr->event_listener = ((void*)0);
    VAR_3->xhr = ((void*)0);
    FUNC_3(&VAR_3->nsIDOMEventListener_iface);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMEventTarget ;
struct TYPE_9__ {int nsIDOMEventListener_iface; } ;
typedef TYPE_3__ nsEventListener ;
typedef int nsAString ;
typedef int cpp_bool ;
typedef int WCHAR ;
struct TYPE_7__ {TYPE_2__* window; } ;
struct TYPE_10__ {TYPE_1__ basedoc; } ;
struct TYPE_8__ {int nswindow; } ;
typedef TYPE_4__ HTMLDocumentNode ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int ) ;
 int FUNC_6 (int ,int *,void**) ;

__attribute__((used)) static void FUNC_7(HTMLDocumentNode *VAR_1, const WCHAR *VAR_2, nsEventListener *VAR_3, cpp_bool VAR_4)
{
    nsIDOMEventTarget *VAR_5;
    nsAString VAR_6;
    nsresult VAR_7;

    if(!VAR_1->basedoc.window)
        return;

    VAR_7 = FUNC_6(VAR_1->basedoc.window->nswindow, &VAR_0, (void**)&VAR_5);
    if(FUNC_1(VAR_7)) {
        FUNC_0("Could not get nsIDOMEventTarget interface: %08x\n", VAR_7);
        return;
    }

    FUNC_3(&VAR_6, VAR_2);
    VAR_7 = FUNC_5(VAR_5, &VAR_6,
            &VAR_3->nsIDOMEventListener_iface, VAR_4);
    FUNC_2(&VAR_6);
    FUNC_4(VAR_5);
    if(FUNC_1(VAR_7))
        FUNC_0("RemoveEventTarget failed: %08x\n", VAR_7);
}

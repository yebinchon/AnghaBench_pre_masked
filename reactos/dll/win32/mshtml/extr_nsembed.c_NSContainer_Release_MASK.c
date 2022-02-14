
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nsIWebBrowserChrome_iface; int * hwnd; int * content_listener; int * editor; int * editor_controller; int * focus; int * window; int * navigation; int * webbrowser; int * doc; } ;
typedef TYPE_1__ NSContainer ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;

void FUNC_15(NSContainer *VAR_2)
{
    FUNC_3("(%p)\n", VAR_2);

    VAR_2->doc = ((void*)0);

    FUNC_2(VAR_2->hwnd, VAR_1);
    FUNC_1(VAR_2->hwnd, ((void*)0));

    FUNC_6(VAR_2->window, VAR_0);
    FUNC_4(VAR_2->window);

    FUNC_13(VAR_2->webbrowser, ((void*)0));

    FUNC_12(VAR_2->webbrowser);
    VAR_2->webbrowser = ((void*)0);

    FUNC_14(VAR_2->navigation);
    VAR_2->navigation = ((void*)0);

    FUNC_5(VAR_2->window);
    VAR_2->window = ((void*)0);

    FUNC_11(VAR_2->focus);
    VAR_2->focus = ((void*)0);

    if(VAR_2->editor_controller) {
        FUNC_7(VAR_2->editor_controller);
        VAR_2->editor_controller = ((void*)0);
    }

    if(VAR_2->editor) {
        FUNC_8(VAR_2->editor);
        VAR_2->editor = ((void*)0);
    }

    if(VAR_2->content_listener) {
        FUNC_9(VAR_2->content_listener);
        VAR_2->content_listener = ((void*)0);
    }

    if(VAR_2->hwnd) {
        FUNC_0(VAR_2->hwnd);
        VAR_2->hwnd = ((void*)0);
    }

    FUNC_10(&VAR_2->nsIWebBrowserChrome_iface);
}

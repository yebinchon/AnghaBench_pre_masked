
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIWebBrowserSetup ;
typedef int nsIScrollable ;
struct TYPE_4__ {int webbrowser; int nsIURIContentListener_iface; int window; int hwnd; int focus; int navigation; int nsIWebBrowserChrome_iface; } ;
typedef TYPE_1__ NSContainer ;
typedef int HRESULT ;


 int FUNC_0 (int ,int ,int *,int,int ,int ,int,int,int ,int *,int ,TYPE_1__*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (char*,...) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *,int ,int ,int,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int *,int *,void**) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int ,int *,void**) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_18 () ;
 int VAR_21 ;

__attribute__((used)) static HRESULT FUNC_19(NSContainer *VAR_22)
{
    nsIWebBrowserSetup *VAR_23;
    nsIScrollable *VAR_24;
    nsresult VAR_25;

    VAR_25 = FUNC_10(VAR_20, VAR_8,
            ((void*)0), &VAR_4, (void**)&VAR_22->webbrowser);
    if(FUNC_3(VAR_25)) {
        FUNC_1("Creating WebBrowser failed: %08x\n", VAR_25);
        return VAR_0;
    }

    VAR_25 = FUNC_16(VAR_22->webbrowser, &VAR_22->nsIWebBrowserChrome_iface);
    if(FUNC_3(VAR_25)) {
        FUNC_1("SetContainerWindow failed: %08x\n", VAR_25);
        return VAR_0;
    }

    VAR_25 = FUNC_15(VAR_22->webbrowser, &VAR_2,
            (void**)&VAR_22->window);
    if(FUNC_3(VAR_25)) {
        FUNC_1("Could not get nsIBaseWindow interface: %08x\n", VAR_25);
        return VAR_0;
    }

    VAR_25 = FUNC_15(VAR_22->webbrowser, &VAR_6,
                                         (void**)&VAR_23);
    if(FUNC_4(VAR_25)) {
        VAR_25 = FUNC_14(VAR_23, VAR_9, VAR_1);
        FUNC_13(VAR_23);
        if(FUNC_3(VAR_25)) {
            FUNC_1("SetProperty(SETUP_IS_CHROME_WRAPPER) failed: %08x\n", VAR_25);
            return VAR_0;
        }
    }else {
        FUNC_1("Could not get nsIWebBrowserSetup interface\n");
        return VAR_0;
    }

    VAR_25 = FUNC_15(VAR_22->webbrowser, &VAR_7,
            (void**)&VAR_22->navigation);
    if(FUNC_3(VAR_25)) {
        FUNC_1("Could not get nsIWebNavigation interface: %08x\n", VAR_25);
        return VAR_0;
    }

    VAR_25 = FUNC_15(VAR_22->webbrowser, &VAR_5,
            (void**)&VAR_22->focus);
    if(FUNC_3(VAR_25)) {
        FUNC_1("Could not get nsIWebBrowserFocus interface: %08x\n", VAR_25);
        return VAR_0;
    }

    if(!VAR_19) {
        FUNC_18();
        if(!VAR_19)
            return VAR_0;
    }

    VAR_22->hwnd = FUNC_0(0, VAR_21, ((void*)0),
            VAR_15 | VAR_17 | VAR_16, 0, 0, 100, 100,
            FUNC_2(), ((void*)0), VAR_18, VAR_22);
    if(!VAR_22->hwnd) {
        FUNC_5("Could not create window\n");
        return VAR_0;
    }

    VAR_25 = FUNC_7(VAR_22->window, VAR_22->hwnd, ((void*)0), 0, 0, 100, 100);
    if(FUNC_4(VAR_25)) {
        VAR_25 = FUNC_6(VAR_22->window);
        if(FUNC_3(VAR_25)) {
            FUNC_5("Creating window failed: %08x\n", VAR_25);
            return VAR_0;
        }

        FUNC_9(VAR_22->window, VAR_1);
        FUNC_8(VAR_22->window, VAR_1);
    }else {
        FUNC_1("InitWindow failed: %08x\n", VAR_25);
        return VAR_0;
    }

    VAR_25 = FUNC_17(VAR_22->webbrowser,
            &VAR_22->nsIURIContentListener_iface);
    if(FUNC_3(VAR_25))
        FUNC_1("SetParentURIContentListener failed: %08x\n", VAR_25);

    VAR_25 = FUNC_15(VAR_22->webbrowser, &VAR_3, (void**)&VAR_24);
    if(FUNC_4(VAR_25)) {
        VAR_25 = FUNC_12(VAR_24,
                VAR_12, VAR_13);
        if(FUNC_3(VAR_25))
            FUNC_1("Could not set default Y scrollbar prefs: %08x\n", VAR_25);

        VAR_25 = FUNC_12(VAR_24,
                VAR_11, VAR_14);
        if(FUNC_3(VAR_25))
            FUNC_1("Could not set default X scrollbar prefs: %08x\n", VAR_25);

        FUNC_11(VAR_24);
    }else {
        FUNC_1("Could not get nsIScrollable: %08x\n", VAR_25);
    }

    return VAR_10;
}

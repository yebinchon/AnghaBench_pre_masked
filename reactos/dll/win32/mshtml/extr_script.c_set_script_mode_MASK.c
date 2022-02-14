
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIWebBrowserSetup ;
struct TYPE_7__ {scalar_t__ scriptmode; TYPE_2__* doc_obj; } ;
struct TYPE_6__ {TYPE_1__* nscontainer; } ;
struct TYPE_5__ {int webbrowser; } ;
typedef scalar_t__ SCRIPTMODE ;
typedef TYPE_3__ HTMLOuterWindow ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ,int *,void**) ;

void FUNC_8(HTMLOuterWindow *VAR_6, SCRIPTMODE VAR_7)
{
    nsIWebBrowserSetup *VAR_8;
    nsresult VAR_9;

    if(VAR_7 == VAR_1 && !FUNC_4()) {
        FUNC_3("jscript.dll not available\n");
        VAR_6->scriptmode = VAR_2;
        return;
    }

    VAR_6->scriptmode = VAR_7;

    if(!VAR_6->doc_obj->nscontainer || !VAR_6->doc_obj->nscontainer->webbrowser)
        return;

    VAR_9 = FUNC_7(VAR_6->doc_obj->nscontainer->webbrowser,
            &VAR_0, (void**)&VAR_8);
    if(FUNC_2(VAR_9)) {
        VAR_9 = FUNC_6(VAR_8, VAR_3,
                VAR_6->scriptmode == VAR_2);

        if(FUNC_2(VAR_9))
            VAR_9 = FUNC_6(VAR_8, VAR_4, VAR_5);

        FUNC_5(VAR_8);
    }

    if(FUNC_1(VAR_9))
        FUNC_0("JavaScript setup failed: %08x\n", VAR_9);
}

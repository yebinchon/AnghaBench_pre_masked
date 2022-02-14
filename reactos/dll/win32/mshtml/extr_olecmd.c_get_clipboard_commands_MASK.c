
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsISupports ;
typedef int nsIDocShell ;
typedef int nsIClipboardCommands ;
struct TYPE_5__ {TYPE_1__* window; } ;
struct TYPE_4__ {scalar_t__ nswindow; } ;
typedef TYPE_2__ HTMLDocument ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static nsIClipboardCommands *FUNC_5(HTMLDocument *VAR_2)
{
    nsIClipboardCommands *VAR_3;
    nsIDocShell *VAR_4;
    nsresult VAR_5;

    VAR_5 = FUNC_2((nsISupports*)VAR_2->window->nswindow, &VAR_1, (void**)&VAR_4);
    if(FUNC_1(VAR_5)) {
        FUNC_0("Could not get nsIDocShell interface\n");
        return ((void*)0);
    }

    VAR_5 = FUNC_3(VAR_4, &VAR_0, (void**)&VAR_3);
    FUNC_4(VAR_4);
    if(FUNC_1(VAR_5)) {
        FUNC_0("Could not get nsIClipboardCommands interface\n");
        return ((void*)0);
    }

    return VAR_3;
}

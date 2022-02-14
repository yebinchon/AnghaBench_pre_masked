
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsISupports ;
typedef int nsIEditingSession ;
typedef int nsIControllerContext ;
struct TYPE_9__ {int * editor_controller; int * editor; TYPE_3__* doc; scalar_t__ webbrowser; } ;
struct TYPE_7__ {TYPE_1__* window; } ;
struct TYPE_8__ {TYPE_2__ basedoc; } ;
struct TYPE_6__ {int nswindow; } ;
typedef TYPE_4__ NSContainer ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int ,int ,int *,int *,void**) ;
 int FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int **) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_4 ;

void FUNC_12(NSContainer *VAR_5)
{
    nsIEditingSession *VAR_6 = ((void*)0);
    nsIControllerContext *VAR_7;
    nsresult VAR_8;

    if(VAR_5->editor) {
        FUNC_11(VAR_5->editor);
        VAR_5->editor = ((void*)0);
    }

    if(VAR_5->editor_controller) {
        FUNC_8(VAR_5->editor_controller);
        VAR_5->editor_controller = ((void*)0);
    }

    VAR_8 = FUNC_3((nsISupports*)VAR_5->webbrowser, &VAR_2,
            (void**)&VAR_6);
    if(FUNC_1(VAR_8)) {
        FUNC_0("Could not get nsIEditingSession: %08x\n", VAR_8);
        return;
    }

    VAR_8 = FUNC_9(VAR_6,
            VAR_5->doc->basedoc.window->nswindow, &VAR_5->editor);
    FUNC_10(VAR_6);
    if(FUNC_1(VAR_8)) {
        FUNC_0("Could not get editor: %08x\n", VAR_8);
        return;
    }

    VAR_8 = FUNC_4(VAR_4,
            VAR_3, ((void*)0), &VAR_1, (void**)&VAR_7);
    if(FUNC_2(VAR_8)) {
        VAR_8 = FUNC_7(VAR_7, (nsISupports *)VAR_5->editor);
        if(FUNC_1(VAR_8))
            FUNC_0("SetCommandContext failed: %08x\n", VAR_8);
        VAR_8 = FUNC_5(VAR_7, &VAR_0,
                (void**)&VAR_5->editor_controller);
        FUNC_6(VAR_7);
        if(FUNC_1(VAR_8))
            FUNC_0("Could not get nsIController interface: %08x\n", VAR_8);
    }else {
        FUNC_0("Could not create edit controller: %08x\n", VAR_8);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
typedef int nsISupports ;
typedef int nsIDocShell ;
typedef int nsIContentViewer ;
struct TYPE_3__ {scalar_t__ navigation; } ;
typedef TYPE_1__ NSContainer ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,float) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,float) ;
 scalar_t__ FUNC_7 (int *,int **) ;
 int FUNC_8 (int *) ;

void FUNC_9(NSContainer *VAR_2, float VAR_3)
{
    nsIContentViewer *VAR_4;
    nsIDocShell *VAR_5;
    nsresult VAR_6;

    FUNC_2("Setting to %f\n", VAR_3);

    VAR_6 = FUNC_4((nsISupports*)VAR_2->navigation, &VAR_0, (void**)&VAR_5);
    FUNC_3(VAR_6 == VAR_1);

    VAR_6 = FUNC_7(VAR_5, &VAR_4);
    FUNC_3(VAR_6 == VAR_1 && VAR_4);
    FUNC_8(VAR_5);

    VAR_6 = FUNC_6(VAR_4, VAR_3);
    if(FUNC_1(VAR_6))
        FUNC_0("SetFullZoom failed: %08x\n", VAR_6);

    FUNC_5(VAR_4);
}

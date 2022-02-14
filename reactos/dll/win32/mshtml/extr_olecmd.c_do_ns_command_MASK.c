
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsISupports ;
typedef int nsICommandParams ;
typedef int nsICommandManager ;
struct TYPE_10__ {TYPE_1__* window; TYPE_3__* doc_obj; } ;
struct TYPE_9__ {TYPE_2__* nscontainer; } ;
struct TYPE_8__ {scalar_t__ webbrowser; } ;
struct TYPE_7__ {int nswindow; } ;
typedef TYPE_4__ HTMLDocument ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_4__*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *,char const*,int *,int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(HTMLDocument *VAR_1, const char *VAR_2, nsICommandParams *VAR_3)
{
    nsICommandManager *VAR_4;
    nsresult VAR_5;

    FUNC_2("(%p)\n", VAR_1);

    if(!VAR_1->doc_obj || !VAR_1->doc_obj->nscontainer)
        return;

    VAR_5 = FUNC_4((nsISupports*)VAR_1->doc_obj->nscontainer->webbrowser, &VAR_0, (void**)&VAR_4);
    if(FUNC_1(VAR_5)) {
        FUNC_0("Could not get nsICommandManager: %08x\n", VAR_5);
        return;
    }

    VAR_5 = FUNC_5(VAR_4, VAR_2, VAR_3, VAR_1->window->nswindow);
    if(FUNC_1(VAR_5))
        FUNC_0("DoCommand(%s) failed: %08x\n", FUNC_3(VAR_2), VAR_5);

    FUNC_6(VAR_4);
}

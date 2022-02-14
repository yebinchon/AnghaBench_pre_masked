
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
typedef int nsICommandParams ;
typedef int nsICommandManager ;
struct TYPE_9__ {TYPE_2__* doc; scalar_t__ webbrowser; } ;
struct TYPE_8__ {int nswindow; } ;
struct TYPE_6__ {TYPE_3__* window; } ;
struct TYPE_7__ {TYPE_1__ basedoc; } ;
typedef TYPE_4__ NSContainer ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *,char const*,int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static nsresult FUNC_6(NSContainer *VAR_1, const char *VAR_2, nsICommandParams *VAR_3)
{
    nsICommandManager *VAR_4;
    nsresult VAR_5;

    VAR_5 = FUNC_3((nsISupports*)VAR_1->webbrowser, &VAR_0, (void**)&VAR_4);
    if(FUNC_1(VAR_5)) {
        FUNC_0("Could not get nsICommandManager: %08x\n", VAR_5);
        return VAR_5;
    }

    VAR_5 = FUNC_4(VAR_4, VAR_2, VAR_1->doc->basedoc.window->nswindow, VAR_3);
    if(FUNC_1(VAR_5))
        FUNC_0("GetCommandState(%s) failed: %08x\n", FUNC_2(VAR_2), VAR_5);

    FUNC_5(VAR_4);
    return VAR_5;
}

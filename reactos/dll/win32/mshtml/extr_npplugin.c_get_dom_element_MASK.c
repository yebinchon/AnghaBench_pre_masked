
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsISupports ;
typedef int nsIPluginInstance ;
typedef int nsIDOMHTMLElement ;
typedef int nsIDOMElement ;
struct TYPE_3__ {scalar_t__ ndata; } ;
typedef TYPE_1__* NPP ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,void**) ;

__attribute__((used)) static nsIDOMHTMLElement *FUNC_7(NPP VAR_2)
{
    nsISupports *VAR_3 = (nsISupports*)VAR_2->ndata;
    nsIPluginInstance *VAR_4;
    nsIDOMHTMLElement *VAR_5;
    nsIDOMElement *VAR_6;
    nsresult VAR_7;

    VAR_7 = FUNC_6(VAR_3, &VAR_1, (void**)&VAR_4);
    if(FUNC_1(VAR_7)) {
        FUNC_0("Could not get nsIPluginInstance interface: %08x\n", VAR_7);
        return ((void*)0);
    }

    VAR_7 = FUNC_4(VAR_4, &VAR_6);
    FUNC_5(VAR_4);
    if(FUNC_1(VAR_7)) {
        FUNC_0("GetDOMElement failed: %08x\n", VAR_7);
        return ((void*)0);
    }

    VAR_7 = FUNC_2(VAR_6, &VAR_0, (void**)&VAR_5);
    FUNC_3(VAR_6);
    if(FUNC_1(VAR_7)) {
        FUNC_0("Could not get nsIDOMHTMLElement iface: %08x\n", VAR_7);
        return ((void*)0);
    }

    return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* container; } ;
typedef TYPE_1__ nsWineURI ;
struct TYPE_8__ {int nsIWebBrowserChrome_iface; } ;
typedef TYPE_2__ NSContainer ;


 int FUNC_0 (char*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(nsWineURI *VAR_0, NSContainer *VAR_1)
{
    if(VAR_0->container) {
        if(VAR_0->container == VAR_1)
            return;
        FUNC_0("Changing %p -> %p\n", VAR_0->container, VAR_1);
        FUNC_2(&VAR_0->container->nsIWebBrowserChrome_iface);
    }

    if(VAR_1)
        FUNC_1(&VAR_1->nsIWebBrowserChrome_iface);
    VAR_0->container = VAR_1;
}

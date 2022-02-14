
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIServiceManager ;
typedef int nsIComponentRegistrar ;
struct TYPE_4__ {int nsIFactory_iface; } ;
struct TYPE_3__ {int nsIFactory_iface; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,char*,int ,int *) ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;

void FUNC_3(nsIComponentRegistrar *VAR_7, nsIServiceManager *VAR_8)
{
    nsresult VAR_9;

    VAR_9 = FUNC_2(VAR_7, &VAR_0,
            "Prompt Service", VAR_1, &VAR_5.nsIFactory_iface);
    if(FUNC_1(VAR_9))
        FUNC_0("RegisterFactory failed: %08x\n", VAR_9);

    VAR_9 = FUNC_2(VAR_7, &VAR_2,
            VAR_3, VAR_4,
            &VAR_6.nsIFactory_iface);
    if(FUNC_1(VAR_9))
        FUNC_0("RegisterFactory failed: %08x\n", VAR_9);
}

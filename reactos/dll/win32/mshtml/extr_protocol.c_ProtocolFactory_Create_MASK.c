
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int IInternetProtocolInfo_iface; } ;
typedef int REFIID ;
typedef int REFCLSID ;
typedef TYPE_1__ ProtocolFactory ;
typedef int HRESULT ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int ,void**) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (int ) ;

HRESULT FUNC_4(REFCLSID VAR_7, REFIID VAR_8, void **VAR_9)
{
    ProtocolFactory *VAR_10 = ((void*)0);

    if(FUNC_2(&VAR_2, VAR_7))
        VAR_10 = &VAR_0;
    else if(FUNC_2(&VAR_4, VAR_7))
        VAR_10 = &VAR_6;
    else if(FUNC_2(&VAR_3, VAR_7))
        VAR_10 = &VAR_5;

    if(!VAR_10) {
        FUNC_0("not implemented protocol %s\n", FUNC_3(VAR_7));
        return VAR_1;
    }

    return FUNC_1(&VAR_10->IInternetProtocolInfo_iface, VAR_8, VAR_9);
}

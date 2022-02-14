
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsIFactory ;
typedef int nsIComponentRegistrar ;
typedef int nsIComponentManager ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int ) ;
 int VAR_6 ;
 int FUNC_3 (int *,int *,int *,void**) ;
 int FUNC_4 (int *,int *,int ,int ,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *,void**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,void**) ;
 int FUNC_9 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_10(nsIComponentManager *VAR_9, nsIComponentRegistrar *VAR_10)
{
    nsIFactory *VAR_11 = ((void*)0);
    nsresult VAR_12;

    VAR_12 = FUNC_3(VAR_9, &VAR_3,
                                               &VAR_0, (void**)&VAR_11);
    if(FUNC_1(VAR_12)) {
        FUNC_0("Could not get factory: %08x\n", VAR_12);
        return;
    }

    VAR_12 = FUNC_6(VAR_11, ((void*)0), &VAR_1, (void**)&VAR_8);
    if(FUNC_1(VAR_12)) {
        FUNC_0("Couldn not create nsIOService instance %08x\n", VAR_12);
        FUNC_7(VAR_11);
        return;
    }

    VAR_12 = FUNC_8(VAR_8, &VAR_2, (void**)&VAR_6);
    if(FUNC_1(VAR_12)) {
        FUNC_2("Could not get nsINetUtil interface: %08x\n", VAR_12);
        FUNC_9(VAR_8);
        return;
    }

    VAR_12 = FUNC_5(VAR_10, &VAR_3, VAR_11);
    FUNC_7(VAR_11);
    if(FUNC_1(VAR_12))
        FUNC_0("UnregisterFactory failed: %08x\n", VAR_12);

    VAR_12 = FUNC_4(VAR_10, &VAR_3,
            VAR_4, VAR_5, &VAR_7);
    if(FUNC_1(VAR_12))
        FUNC_0("RegisterFactory failed: %08x\n", VAR_12);
}

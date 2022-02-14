
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsIFactory ;
typedef int nsIComponentManager ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int *,int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,void**) ;
 int FUNC_5 (int *) ;

void FUNC_6(nsIComponentManager *VAR_4)
{
    nsIFactory *VAR_5;
    nsresult VAR_6;

    if(!VAR_4) {
        if(VAR_3) {
            FUNC_3(VAR_3);
            VAR_3 = ((void*)0);
        }
        return;
    }

    VAR_6 = FUNC_2(VAR_4, &VAR_2,
            &VAR_1, (void**)&VAR_5);
    if(FUNC_1(VAR_6)) {
        FUNC_0("Could not create nsIContentUtils service: %08x\n", VAR_6);
        return;
    }

    VAR_6 = FUNC_4(VAR_5, ((void*)0), &VAR_0, (void**)&VAR_3);
    FUNC_5(VAR_5);
    if(FUNC_1(VAR_6))
        FUNC_0("Could not create nsIContentUtils instance: %08x\n", VAR_6);
}

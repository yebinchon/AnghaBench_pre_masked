
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ nsresult ;
typedef int nsIXMLHttpRequest ;
typedef int nsIScriptSecurityManager ;
typedef int nsIPrincipal ;
typedef int nsIGlobalObject ;
typedef int nsIDOMWindow ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int *,void**) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int **) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int ,int *,void**) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_11 (int *) ;
 int VAR_6 ;
 int VAR_7 ;

nsIXMLHttpRequest *FUNC_12(nsIDOMWindow *VAR_8)
{
    nsIScriptSecurityManager *VAR_9;
    nsIPrincipal *VAR_10;
    nsIGlobalObject *VAR_11;
    nsIXMLHttpRequest *VAR_12;
    nsresult VAR_13;

    VAR_13 = FUNC_8(VAR_7,
            VAR_4,
            &VAR_1, (void**)&VAR_9);
    if(FUNC_1(VAR_13)) {
        FUNC_0("Could not get sec manager service: %08x\n", VAR_13);
        return ((void*)0);
    }

    VAR_13 = FUNC_6(VAR_9, &VAR_10);
    FUNC_7(VAR_9);
    if(FUNC_1(VAR_13)) {
        FUNC_0("GetSystemPrincipal failed: %08x\n", VAR_13);
        return ((void*)0);
    }

    VAR_13 = FUNC_4(VAR_8, &VAR_0, (void **)&VAR_11);
    FUNC_2(VAR_13 == VAR_3);

    VAR_13 = FUNC_3(VAR_6,
            VAR_5, ((void*)0), &VAR_2,
            (void**)&VAR_12);
    if(FUNC_1(VAR_13)) {
        FUNC_0("Could not get nsIXMLHttpRequest: %08x\n", VAR_13);
        FUNC_9(VAR_10);
        FUNC_5(VAR_11);
        return ((void*)0);
    }

    VAR_13 = FUNC_10(VAR_12, VAR_10, ((void*)0), VAR_11, ((void*)0), ((void*)0));

    FUNC_9(VAR_10);
    FUNC_5(VAR_11);
    if(FUNC_1(VAR_13)) {
        FUNC_0("nsIXMLHttpRequest_Init failed: %08x\n", VAR_13);
        FUNC_11(VAR_12);
        return ((void*)0);
    }
    return VAR_12;
}

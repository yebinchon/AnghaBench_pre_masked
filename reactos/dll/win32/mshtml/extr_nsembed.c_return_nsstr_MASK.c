
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsresult ;
typedef int nsAString ;
typedef scalar_t__ PRUnichar ;
typedef int HRESULT ;
typedef int * BSTR ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int * FUNC_2 (scalar_t__ const*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (scalar_t__ const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__ const**) ;

HRESULT FUNC_7(nsresult VAR_3, nsAString *VAR_4, BSTR *VAR_5)
{
    const PRUnichar *VAR_6;

    if(FUNC_1(VAR_3)) {
        FUNC_0("failed: %08x\n", VAR_3);
        FUNC_5(VAR_4);
        return VAR_0;
    }

    FUNC_6(VAR_4, &VAR_6);
    FUNC_3("ret %s\n", FUNC_4(VAR_6));
    if(*VAR_6) {
        *VAR_5 = FUNC_2(VAR_6);
        if(!*VAR_5)
            return VAR_1;
    }else {
        *VAR_5 = ((void*)0);
    }

    FUNC_5(VAR_4);
    return VAR_2;
}

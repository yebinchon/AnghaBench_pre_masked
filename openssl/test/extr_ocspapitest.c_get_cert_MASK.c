
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(X509 **VAR_1)
{
    BIO *VAR_2;
    X509 *VAR_3 = ((void*)0);

    if (!FUNC_3(VAR_2 = FUNC_1(VAR_0, "r")))
        return 0;
    VAR_3 = FUNC_2(VAR_2, ((void*)0), ((void*)0), ((void*)0));
    FUNC_0(VAR_2);
    if (!FUNC_3(VAR_3))
        goto end;
    *VAR_1 = VAR_3;
    return 1;
 end:
    FUNC_4(VAR_3);
    return 0;
}

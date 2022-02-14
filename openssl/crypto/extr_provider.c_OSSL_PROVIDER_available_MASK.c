
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PROVIDER ;
typedef int OPENSSL_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(OPENSSL_CTX *VAR_0, const char *VAR_1)
{
    OSSL_PROVIDER *VAR_2 = ((void*)0);
    int VAR_3 = 0;


    VAR_2 = FUNC_1(VAR_0, VAR_1, 0);
    VAR_3 = FUNC_0(VAR_2);
    FUNC_2(VAR_2);
    return VAR_3;
}

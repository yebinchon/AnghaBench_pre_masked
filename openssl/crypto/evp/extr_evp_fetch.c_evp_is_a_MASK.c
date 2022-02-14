
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PROVIDER ;
typedef int OSSL_NAMEMAP ;
typedef int OPENSSL_CTX ;


 int FUNC_0 (int *,char const*) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

int FUNC_3(OSSL_PROVIDER *VAR_0, int VAR_1, const char *VAR_2)
{
    OPENSSL_CTX *VAR_3 = FUNC_2(VAR_0);
    OSSL_NAMEMAP *VAR_4 = FUNC_1(VAR_3);

    return FUNC_0(VAR_4, VAR_2) == VAR_1;
}

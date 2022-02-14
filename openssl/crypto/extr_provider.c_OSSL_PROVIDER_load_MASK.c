
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PROVIDER ;
typedef int OPENSSL_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char const*,int *,int ) ;

OSSL_PROVIDER *FUNC_4(OPENSSL_CTX *VAR_0, const char *VAR_1)
{
    OSSL_PROVIDER *VAR_2 = ((void*)0);


    if ((VAR_2 = FUNC_1(VAR_0, VAR_1, 0)) == ((void*)0)
        && (VAR_2 = FUNC_3(VAR_0, VAR_1, ((void*)0), 0)) == ((void*)0))
        return ((void*)0);

    if (!FUNC_0(VAR_2)) {
        FUNC_2(VAR_2);
        return ((void*)0);
    }

    return VAR_2;
}

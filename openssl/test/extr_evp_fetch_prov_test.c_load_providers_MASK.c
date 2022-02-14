
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PROVIDER ;
typedef int OPENSSL_CTX ;


 int * FUNC_0 () ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (size_t) ;
 size_t FUNC_4 () ;

__attribute__((used)) static int FUNC_5(OPENSSL_CTX **VAR_0, OSSL_PROVIDER *VAR_1[])
{
    OPENSSL_CTX *VAR_2;
    int VAR_3 = 0;
    size_t VAR_4;

    VAR_2 = FUNC_0();
    if (!FUNC_2(VAR_2))
        goto err;

    if (FUNC_4() > 2)
        goto err;

    for (VAR_4 = 0; VAR_4 < FUNC_4(); ++VAR_4) {
        char *VAR_5 = FUNC_3(VAR_4);
        VAR_1[VAR_4] = FUNC_1(VAR_2, VAR_5);
        if (!FUNC_2(VAR_1[VAR_4]))
            goto err;
    }
    VAR_3 = 1;
    *VAR_0 = VAR_2;
err:
    return VAR_3;
}

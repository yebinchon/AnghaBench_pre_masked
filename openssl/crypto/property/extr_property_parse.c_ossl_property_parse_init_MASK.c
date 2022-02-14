
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPENSSL_CTX ;


 size_t FUNC_0 (char const* const*) ;
 void* VAR_0 ;
 scalar_t__ FUNC_1 (int *,char const* const,int) ;
 void* VAR_1 ;
 void* FUNC_2 (int *,char*,int) ;

int FUNC_3(OPENSSL_CTX *VAR_2)
{
    static const char *const VAR_3[] = {
        "default",
        "legacy",
        "provider",
        "version",
        "fips",
        "engine",
    };
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++)
        if (FUNC_1(VAR_2, VAR_3[VAR_4], 1) == 0)
            goto err;


    if ((VAR_1 = FUNC_2(VAR_2, "yes", 1)) == 0
        || (VAR_0 = FUNC_2(VAR_2, "no", 1)) == 0)
        goto err;

    return 1;
err:
    return 0;
}

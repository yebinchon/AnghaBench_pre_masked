
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;
typedef int EVP_PKEY ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int *,unsigned char*,unsigned char*) ;
 int VAR_0 ;
 int FUNC_5 (unsigned char*,unsigned char*,int ,int *) ;
 int FUNC_6 (unsigned char*,int) ;
 scalar_t__ FUNC_7 (unsigned char*,scalar_t__) ;

int FUNC_8(EVP_CIPHER_CTX *VAR_1, const EVP_CIPHER *VAR_2,
                 unsigned char **VAR_3, int *VAR_4, unsigned char *VAR_5,
                 EVP_PKEY **VAR_6, int VAR_7)
{
    unsigned char VAR_8[VAR_0];
    int VAR_9;
    int VAR_10 = 0;

    if (VAR_2) {
        FUNC_3(VAR_1);
        if (!FUNC_4(VAR_1, VAR_2, ((void*)0), ((void*)0), ((void*)0)))
            return 0;
    }
    if ((VAR_7 <= 0) || !VAR_6)
        return 1;
    if (FUNC_2(VAR_1, VAR_8) <= 0)
        return 0;

    if (FUNC_0(VAR_1)
            && FUNC_7(VAR_5, FUNC_0(VAR_1)) <= 0)
        goto err;

    if (!FUNC_4(VAR_1, ((void*)0), ((void*)0), VAR_8, VAR_5))
        goto err;

    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
        VAR_4[VAR_9] =
            FUNC_5(VAR_3[VAR_9], VAR_8, FUNC_1(VAR_1),
                                 VAR_6[VAR_9]);
        if (VAR_4[VAR_9] <= 0) {
            VAR_10 = -1;
            goto err;
        }
    }
    VAR_10 = VAR_7;
err:
    FUNC_6(VAR_8, sizeof(VAR_8));
    return VAR_10;
}

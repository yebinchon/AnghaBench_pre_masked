
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;
typedef int EVP_MAC_CTX ;
typedef int Ai ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned char*,size_t*,size_t) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char const*,size_t) ;
 int VAR_0 ;
 int FUNC_7 (unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,void*,size_t) ;
 int FUNC_10 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_11(EVP_MAC_CTX *VAR_2,
                           const unsigned char *VAR_3, size_t VAR_4,
                           const unsigned char *VAR_5, size_t VAR_6,
                           unsigned char *VAR_7, size_t VAR_8)
{
    size_t VAR_9;
    EVP_MAC_CTX *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    unsigned char VAR_12[VAR_0];
    size_t VAR_13;
    int VAR_14 = 0;
    OSSL_PARAM VAR_15[2], *VAR_16 = VAR_15;

    *VAR_16++ = FUNC_9(VAR_1,
                                             (void *)VAR_3, VAR_4);
    *VAR_16 = FUNC_8();
    if (!FUNC_2(VAR_2, VAR_15))
        goto err;
    if (!FUNC_4(VAR_2))
        goto err;
    VAR_9 = FUNC_5(VAR_2);
    if (VAR_9 == 0)
        goto err;

    VAR_11 = FUNC_0(VAR_2);
    if (VAR_11 == ((void*)0))
        goto err;
    if (VAR_5 != ((void*)0) && !FUNC_6(VAR_11, VAR_5, VAR_6))
        goto err;

    for (;;) {

        if (!FUNC_3(VAR_11, VAR_12, &VAR_13, sizeof(VAR_12)))
            goto err;
        FUNC_1(VAR_11);
        VAR_11 = ((void*)0);


        VAR_10 = FUNC_0(VAR_2);
        if (VAR_10 == ((void*)0))
            goto err;
        if (!FUNC_6(VAR_10, VAR_12, VAR_13))
            goto err;

        if (VAR_8 > VAR_9) {
            VAR_11 = FUNC_0(VAR_10);
            if (VAR_11 == ((void*)0))
                goto err;
        }
        if (VAR_5 != ((void*)0) && !FUNC_6(VAR_10, VAR_5, VAR_6))
            goto err;
        if (VAR_8 <= VAR_9) {

            if (!FUNC_3(VAR_10, VAR_12, &VAR_13, sizeof(VAR_12)))
                goto err;
            FUNC_10(VAR_7, VAR_12, VAR_8);
            break;
        }
        if (!FUNC_3(VAR_10, VAR_7, ((void*)0), VAR_8))
            goto err;
        FUNC_1(VAR_10);
        VAR_10 = ((void*)0);
        VAR_7 += VAR_9;
        VAR_8 -= VAR_9;
    }
    VAR_14 = 1;
 err:
    FUNC_1(VAR_10);
    FUNC_1(VAR_11);
    FUNC_7(VAR_12, sizeof(VAR_12));
    return VAR_14;
}

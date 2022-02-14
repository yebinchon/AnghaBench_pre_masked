
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;

int FUNC_12(SSL_CTX *VAR_0, SSL_CTX *VAR_1, SSL **VAR_2,
                          SSL **VAR_3, BIO *VAR_4, BIO *VAR_5)
{
    SSL *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    BIO *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);

    if (*VAR_2 != ((void*)0))
        VAR_6 = *VAR_2;
    else if (!FUNC_10(VAR_6 = FUNC_8(VAR_0)))
        goto error;
    if (*VAR_3 != ((void*)0))
        VAR_7 = *VAR_3;
    else if (!FUNC_10(VAR_7 = FUNC_8(VAR_1)))
        goto error;

    if (FUNC_7(VAR_7)) {
        if (!FUNC_10(VAR_8 = FUNC_1(FUNC_11()))
                || !FUNC_10(VAR_9 = FUNC_1(FUNC_11())))
            goto error;
    } else {
        if (!FUNC_10(VAR_8 = FUNC_1(FUNC_3()))
                || !FUNC_10(VAR_9 = FUNC_1(FUNC_3())))
            goto error;
    }

    if (VAR_4 != ((void*)0)
            && !FUNC_10(VAR_8 = FUNC_2(VAR_4, VAR_8)))
        goto error;
    if (VAR_5 != ((void*)0)
            && !FUNC_10(VAR_9 = FUNC_2(VAR_5, VAR_9)))
        goto error;


    FUNC_4(VAR_8, -1);
    FUNC_4(VAR_9, -1);


    FUNC_9(VAR_6, VAR_9, VAR_8);
    FUNC_5(VAR_8);
    FUNC_5(VAR_9);
    FUNC_9(VAR_7, VAR_8, VAR_9);
    *VAR_2 = VAR_6;
    *VAR_3 = VAR_7;
    return 1;

 error:
    FUNC_6(VAR_6);
    FUNC_6(VAR_7);
    FUNC_0(VAR_8);
    FUNC_0(VAR_9);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);

    return 0;
}

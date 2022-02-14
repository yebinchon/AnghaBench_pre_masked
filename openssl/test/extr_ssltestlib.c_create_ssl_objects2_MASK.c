
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(SSL_CTX *VAR_1, SSL_CTX *VAR_2, SSL **VAR_3,
                          SSL **VAR_4, int VAR_5, int VAR_6)
{
    SSL *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    BIO *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);

    if (*VAR_3 != ((void*)0))
        VAR_7 = *VAR_3;
    else if (!FUNC_5(VAR_7 = FUNC_3(VAR_1)))
        goto error;
    if (*VAR_4 != ((void*)0))
        VAR_8 = *VAR_4;
    else if (!FUNC_5(VAR_8 = FUNC_3(VAR_2)))
        goto error;

    if (!FUNC_5(VAR_9 = FUNC_1(VAR_5, VAR_0))
            || !FUNC_5(VAR_10 = FUNC_1(VAR_6, VAR_0)))
        goto error;

    FUNC_4(VAR_8, VAR_10, VAR_10);
    FUNC_4(VAR_7, VAR_9, VAR_9);
    *VAR_3 = VAR_7;
    *VAR_4 = VAR_8;
    return 1;

 error:
    FUNC_2(VAR_7);
    FUNC_2(VAR_8);
    FUNC_0(VAR_9);
    FUNC_0(VAR_10);
    return 0;
}

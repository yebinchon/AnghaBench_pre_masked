
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_METHOD ;
typedef int SSL_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

int FUNC_11(const SSL_METHOD *VAR_1, const SSL_METHOD *VAR_2,
                        int VAR_3, int VAR_4,
                        SSL_CTX **VAR_5, SSL_CTX **VAR_6, char *VAR_7,
                        char *VAR_8)
{
    SSL_CTX *VAR_9 = ((void*)0);
    SSL_CTX *VAR_10 = ((void*)0);

    if (!FUNC_9(VAR_9 = FUNC_2(VAR_1))
            || (VAR_6 != ((void*)0) && !FUNC_9(VAR_10 = FUNC_2(VAR_2))))
        goto err;

    if ((VAR_3 > 0
         && !FUNC_10(FUNC_5(VAR_9,
                                                     VAR_3)))
        || (VAR_4 > 0
            && !FUNC_10(FUNC_4(VAR_9,
                                                        VAR_4))))
        goto err;
    if (VAR_10 != ((void*)0)
        && ((VAR_3 > 0
             && !FUNC_10(FUNC_5(VAR_10,
                                                         VAR_3)))
            || (VAR_4 > 0
                && !FUNC_10(FUNC_4(VAR_10,
                                                            VAR_4)))))
        goto err;

    if (VAR_7 != ((void*)0) && VAR_8 != ((void*)0)) {
        if (!FUNC_8(FUNC_7(VAR_9, VAR_7,
                                                      VAR_0), 1)
                || !FUNC_8(FUNC_6(VAR_9,
                                                            VAR_8,
                                                            VAR_0), 1)
                || !FUNC_8(FUNC_0(VAR_9), 1))
            goto err;
    }


    FUNC_3(VAR_9, 1);


    *VAR_5 = VAR_9;
    if (VAR_6 != ((void*)0))
        *VAR_6 = VAR_10;
    return 1;

 err:
    FUNC_1(VAR_9);
    FUNC_1(VAR_10);
    return 0;
}

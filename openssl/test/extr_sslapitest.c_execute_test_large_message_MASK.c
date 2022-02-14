
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL_METHOD ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_3 ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int const*,int const*,int,int,int **,int **,int ,int ) ;
 int FUNC_15 (int *,int *,int **,int **,int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_17(const SSL_METHOD *VAR_5,
                                      const SSL_METHOD *VAR_6,
                                      int VAR_7, int VAR_8,
                                      int VAR_9)
{
    SSL_CTX *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    SSL *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    int VAR_14 = 0;
    int VAR_15;
    BIO *VAR_16 = ((void*)0);
    X509 *VAR_17 = ((void*)0);
    int VAR_18;

    if (!FUNC_9(VAR_16 = FUNC_1(VAR_3, "r")))
        goto end;
    VAR_17 = FUNC_3(VAR_16, ((void*)0), ((void*)0), ((void*)0));
    FUNC_0(VAR_16);
    VAR_16 = ((void*)0);
    if (!FUNC_9(VAR_17))
        goto end;

    if (!FUNC_10(FUNC_14(VAR_5, VAR_6, VAR_7, VAR_8,
                                       &VAR_11, &VAR_10, VAR_3, VAR_4)))
        goto end;

    if (VAR_9) {




        FUNC_6(VAR_10, 1);
    }
    VAR_18 = FUNC_16(VAR_17, ((void*)0));
    FUNC_2(VAR_18 * VAR_0 >
                   (VAR_1 * 4) / 3);
    for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
        if (!FUNC_12(VAR_17))
            goto end;
        if (!FUNC_4(VAR_11, VAR_17)) {
            FUNC_11(VAR_17);
            goto end;
        }
    }

    if (!FUNC_10(FUNC_15(VAR_11, VAR_10, &VAR_13, &VAR_12,
                                      ((void*)0), ((void*)0)))
            || !FUNC_10(FUNC_13(VAR_13, VAR_12,
                                                VAR_2)))
        goto end;





    if (!FUNC_10(FUNC_7(VAR_13)))
        goto end;

    VAR_14 = 1;
 end:
    FUNC_11(VAR_17);
    FUNC_8(VAR_13);
    FUNC_8(VAR_12);
    FUNC_5(VAR_11);
    FUNC_5(VAR_10);

    return VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_SESSION ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *,int ,int,int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int VAR_11 ;
 int FUNC_17 () ;
 int VAR_12 ;
 int FUNC_18 (int *,int *,int ) ;
 int FUNC_19 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_20 (int *,int *,int **,int **,int *,int *) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_21(int VAR_15)
{
    SSL_CTX *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    SSL *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
    BIO *VAR_20, *VAR_21;
    int VAR_22 = 0;
    int VAR_23 = 0;
    SSL_SESSION *VAR_24 = ((void*)0);
    int VAR_25, VAR_26, VAR_27;

    if (!FUNC_16(FUNC_19(FUNC_4(),
                                       FUNC_3(),
                                       VAR_4, 0,
                                       &VAR_16, &VAR_17, VAR_12, VAR_13)))
        return 0;

    if (VAR_15 >= VAR_11) {

        if (!FUNC_16(FUNC_20(VAR_16, VAR_17, &VAR_18, &VAR_19,
                                          ((void*)0), ((void*)0)))
                || !FUNC_16(FUNC_18(VAR_18, VAR_19,
                              VAR_10))
                || !FUNC_15(VAR_24 = FUNC_9(VAR_19)))
            goto end;

        FUNC_13(VAR_19);
        FUNC_13(VAR_18);
        FUNC_8(VAR_18);
        FUNC_8(VAR_19);
        VAR_18 = VAR_19 = ((void*)0);

        VAR_25 = VAR_2;
        VAR_26 = VAR_3;
        VAR_27 = VAR_9;
        VAR_15 -= VAR_11;
    } else {
        VAR_25 = VAR_0;
        VAR_26 = VAR_1;
        VAR_27 = VAR_8;
    }

    VAR_20 = FUNC_1(FUNC_17());
    if (!FUNC_15(VAR_20))
        goto end;


    if (!FUNC_16(FUNC_20(VAR_16, VAR_17, &VAR_18, &VAR_19,
                                      ((void*)0), VAR_20)))
        goto end;

    if (VAR_24 != ((void*)0)) {
        if (!FUNC_16(FUNC_12(VAR_19, VAR_24)))
            goto end;
    }

    FUNC_5(VAR_19, VAR_14);
    FUNC_5(VAR_18, VAR_14);


    if (VAR_15 >= VAR_25 + VAR_26) {
        VAR_21 = FUNC_10(VAR_18);
        VAR_15 -= VAR_25 + VAR_26;
        if (VAR_15 >= VAR_27) {
            VAR_23 = 1;
            VAR_15 -= VAR_27;
        }
    } else {
        VAR_21 = FUNC_10(VAR_19);
        if (VAR_15 >= VAR_25) {
            VAR_23 = 1;
            VAR_15 -= VAR_25;
        }
         VAR_21 = FUNC_2(VAR_21);
    }
    FUNC_0(VAR_21, VAR_6, VAR_23, ((void*)0));
    FUNC_0(VAR_21, VAR_7, VAR_15, ((void*)0));

    if (!FUNC_16(FUNC_18(VAR_18, VAR_19, VAR_10)))
        goto end;

    if (VAR_24 != ((void*)0) && !FUNC_16(FUNC_11(VAR_19)))
        goto end;


    if (!FUNC_14((int)FUNC_0(VAR_21, VAR_5, 0,
                                   ((void*)0)), -1))
        goto end;

    VAR_22 = 1;
 end:
    FUNC_7(VAR_24);
    FUNC_8(VAR_18);
    FUNC_8(VAR_19);
    FUNC_6(VAR_16);
    FUNC_6(VAR_17);

    return VAR_22;
}

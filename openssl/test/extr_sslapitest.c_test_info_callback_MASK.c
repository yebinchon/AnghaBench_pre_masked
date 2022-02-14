
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL_SESSION ;
typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,int,size_t*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ,size_t*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,size_t,unsigned char*,int ) ;
 int FUNC_15 (size_t,int ) ;
 int FUNC_16 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int VAR_6 ;
 int FUNC_19 (int *,int *,int ) ;
 int FUNC_20 (int ,int ,int,int,int **,int **,int ,int ) ;
 int FUNC_21 (int *,int *,int **,int **,int *,int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_22 (int **,int **,int **,int **,int **,int ) ;
 int VAR_11 ;
 int FUNC_23 (int ) ;

__attribute__((used)) static int FUNC_24(int VAR_12)
{
    SSL_CTX *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
    SSL *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
    SSL_SESSION *VAR_17 = ((void*)0);
    int VAR_18 = 0;
    int VAR_19;

    if (VAR_12 < 2) {



        VAR_19 = VAR_4;



    } else {

        VAR_19 = VAR_5;



    }


    VAR_7 = 0;
    VAR_9 = -1;
    VAR_8 = VAR_12;


    if (VAR_12 >= 4) {
        SSL_SESSION *VAR_20 = ((void*)0);
        size_t VAR_21, VAR_22;
        unsigned char VAR_23[80];


        if (!FUNC_16(FUNC_22(&VAR_13, &VAR_14, &VAR_15,
                                            &VAR_16, &VAR_20, 0)))
            goto end;


        FUNC_2(VAR_20);

        FUNC_8((VAR_12 % 2) == 0 ? VAR_16 : VAR_15,
                              VAR_11);


        if (!FUNC_16(FUNC_11(VAR_15, VAR_0, FUNC_23(VAR_0),
                                            &VAR_21))
                || !FUNC_15(VAR_21, FUNC_23(VAR_0))
                || !FUNC_13(FUNC_6(VAR_16, VAR_23,
                                                    sizeof(VAR_23), &VAR_22),
                                VAR_3)
                || !FUNC_14(VAR_0, VAR_22, VAR_23, FUNC_23(VAR_0))
                || !FUNC_13(FUNC_5(VAR_16),
                                VAR_1)
                || !FUNC_16(FUNC_19(VAR_16, VAR_15,
                                                    VAR_2))
                || !FUNC_12(VAR_7))
            goto end;

        VAR_18 = 1;
        goto end;
    }


    if (!FUNC_16(FUNC_20(FUNC_18(),
                                       FUNC_17(),
                                       VAR_19, VAR_19, &VAR_14, &VAR_13, VAR_6,
                                       VAR_10)))
        goto end;





    FUNC_1((VAR_12 % 2) == 0 ? VAR_14 : VAR_13,
                              VAR_11);

    if (!FUNC_16(FUNC_21(VAR_14, VAR_13, &VAR_16,
                                          &VAR_15, ((void*)0), ((void*)0)))
        || !FUNC_16(FUNC_19(VAR_16, VAR_15,
                                            VAR_2))
        || !FUNC_12(VAR_7))
    goto end;



    VAR_17 = FUNC_4(VAR_15);
    FUNC_10(VAR_15);
    FUNC_10(VAR_16);
    FUNC_3(VAR_16);
    FUNC_3(VAR_15);
    VAR_16 = VAR_15 = ((void*)0);


    if (!FUNC_16(FUNC_21(VAR_14, VAR_13, &VAR_16, &VAR_15, ((void*)0),
                                      ((void*)0)))
            || !FUNC_16(FUNC_9(VAR_15, VAR_17))
            || !FUNC_16(FUNC_19(VAR_16, VAR_15,
                                                VAR_2))
            || !FUNC_16(FUNC_7(VAR_15))
            || !FUNC_12(VAR_7))
        goto end;

    VAR_18 = 1;

 end:
    FUNC_3(VAR_16);
    FUNC_3(VAR_15);
    FUNC_2(VAR_17);
    FUNC_0(VAR_14);
    FUNC_0(VAR_13);
    return VAR_18;
}

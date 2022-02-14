
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;
typedef int buf ;
typedef int SSL_SESSION ;
typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char*,int,size_t*) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,int) ;
 int FUNC_13 (int *,char*,int,size_t*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (size_t,int) ;
 int FUNC_18 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int VAR_9 ;
 int FUNC_21 (int *,int *,int ,int) ;
 int FUNC_22 (int *,int *,int ) ;
 int FUNC_23 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_24 (int *,int *,int **,int **,int *,int *) ;
 int FUNC_25 (char*,char*,size_t) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_26(int VAR_11)
{
    SSL_CTX *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    SSL *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    int VAR_16 = 0;
    char VAR_17[] = "A test message";
    char VAR_18[80];
    size_t VAR_19, VAR_20;
    SSL_SESSION *VAR_21;
    if (!FUNC_18(FUNC_23(FUNC_20(),
                                       FUNC_19(),
                                       VAR_8,
                                       (VAR_11 <= 1) ? VAR_6
                                                  : VAR_7,
                                       &VAR_13, &VAR_12, VAR_9, VAR_10)))
        goto end;

    if (VAR_11 == 5)
        FUNC_1(VAR_12, 1);

    if (!FUNC_18(FUNC_24(VAR_13, VAR_12, &VAR_15, &VAR_14,
                                             ((void*)0), ((void*)0))))
        goto end;

    if (VAR_11 == 3) {
        if (!FUNC_18(FUNC_21(VAR_15, VAR_14,
                                                  VAR_0, 1))
                || !FUNC_16(VAR_21 = FUNC_5(VAR_14), ((void*)0))
                || !FUNC_14(FUNC_2(VAR_21)))
            goto end;
    } else if (!FUNC_18(FUNC_22(VAR_15, VAR_14,
                                              VAR_0))
            || !FUNC_16(VAR_21 = FUNC_5(VAR_14), ((void*)0))
            || !FUNC_18(FUNC_2(VAR_21))) {
        goto end;
    }

    if (!FUNC_15(FUNC_10(VAR_14), 0))
        goto end;

    if (VAR_11 >= 4) {




        if (!FUNC_14(FUNC_8(VAR_15, VAR_18, sizeof(VAR_18), &VAR_20))
                || !FUNC_15(FUNC_4(VAR_15, 0),
                                VAR_2)
                || !FUNC_15(FUNC_6(VAR_15),
                                VAR_4)




                || !FUNC_18(FUNC_12(VAR_15, VAR_17, sizeof(VAR_17))))
            goto end;
        if (VAR_11 == 4
                && !FUNC_18(FUNC_7(VAR_15,
                                             VAR_3)))
            goto end;
        if (VAR_11 == 5) {
            FUNC_9(VAR_15, VAR_5, ((void*)0));
            if (!FUNC_18(FUNC_11(VAR_15)))
                goto end;
        }
        if ((VAR_11 == 4 || VAR_11 == 5)
                && !FUNC_18(FUNC_12(VAR_15, VAR_17, sizeof(VAR_17))))
            goto end;
        if (!FUNC_15(FUNC_10(VAR_15), 1))
            goto end;
        if (VAR_11 == 4 || VAR_11 == 5) {

            if (!FUNC_18(FUNC_8(VAR_14, VAR_18, sizeof(VAR_18),
                                       &VAR_20))
                    || !FUNC_17(VAR_20, sizeof(VAR_17))
                    || !FUNC_15(FUNC_25(VAR_17, VAR_18, VAR_20), 0)
                    || !FUNC_18(FUNC_8(VAR_14, VAR_18, sizeof(VAR_18),
                                              &VAR_20))
                    || !FUNC_17(VAR_20, sizeof(VAR_17))
                    || !FUNC_15(FUNC_25(VAR_17, VAR_18, VAR_20), 0))
                goto end;
        }
    }


    if (!FUNC_14(FUNC_13(VAR_14, VAR_17, sizeof(VAR_17), &VAR_19)))
        goto end;

    if (VAR_11 < 4) {





        if (!FUNC_15(FUNC_10(VAR_15), 0)




                || !FUNC_14(FUNC_13(VAR_15, VAR_17, sizeof(VAR_17), &VAR_19))
                || !FUNC_15(FUNC_10(VAR_14), 1)
                || !FUNC_16(VAR_21 = FUNC_5(VAR_14), ((void*)0))
                || !FUNC_18(FUNC_2(VAR_21))
                || !FUNC_15(FUNC_10(VAR_15), 1))
            goto end;
    } else if (VAR_11 == 4 || VAR_11 == 5) {





        if (!FUNC_15(FUNC_10(VAR_14), 1)
                || !FUNC_16(VAR_21 = FUNC_5(VAR_14), ((void*)0))
                || !FUNC_18(FUNC_2(VAR_21)))
            goto end;
    } else {







        if (!FUNC_15(FUNC_10(VAR_14), -1)
                || !FUNC_15(FUNC_4(VAR_14, -1), VAR_1))
            goto end;
    }

    VAR_16 = 1;

 end:
    FUNC_3(VAR_15);
    FUNC_3(VAR_14);
    FUNC_0(VAR_13);
    FUNC_0(VAR_12);

    return VAR_16;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;
typedef int SSL_CTX ;
typedef int SSL_CIPHER ;
typedef int SSL ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_0 ;
 int FUNC_7 (int const*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int const*,unsigned char const*,int) ;
 int FUNC_10 (int const*,int const*) ;
 int FUNC_11 (int const*,int ) ;
 int FUNC_12 (int const*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int const*) ;
 int FUNC_18 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int * VAR_4 ;
 int const* VAR_5 ;
 int FUNC_21 (int *,int *,int ) ;
 int FUNC_22 (int ,int ,int ,int ,int **,int **,int *,int *) ;
 int FUNC_23 (int *,int *,int **,int **,int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 int const* VAR_14 ;
 int FUNC_24 (int *,int *) ;
 char* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_25(int VAR_18)
{
    SSL_CTX *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
    SSL *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
    const SSL_CIPHER *VAR_23 = ((void*)0);
    const unsigned char VAR_24[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b,
        0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
        0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23,
        0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
    };
    int VAR_25 = 0;

    if (!FUNC_18(FUNC_22(FUNC_20(), FUNC_19(),
                                       VAR_3, 0,
                                       &VAR_19, &VAR_20, VAR_18 == 3 ? ((void*)0) : VAR_4,
                                       VAR_18 == 3 ? ((void*)0) : VAR_8)))
        goto end;

    if (VAR_18 != 3) {






        if (!FUNC_18(FUNC_2(VAR_20,
                                                "TLS_AES_128_GCM_SHA256")))
            goto end;
    }






    if (VAR_18 == 0 || VAR_18 == 1) {
        FUNC_6(VAR_20, VAR_16);
        FUNC_4(VAR_19, VAR_6);
    }

    if (VAR_18 >= 1) {
        FUNC_3(VAR_20, VAR_9);
        FUNC_5(VAR_19, VAR_11);
    }

    VAR_15 = VAR_13;
    VAR_17 = 0;
    VAR_7 = 0;
    VAR_10 = 0;
    VAR_12 = 0;

    if (VAR_18 != 3) {




        if (!FUNC_18(FUNC_23(VAR_19, VAR_20, &VAR_21, &VAR_22,
                                                 ((void*)0), ((void*)0)))
                || !FUNC_18(FUNC_21(VAR_21, VAR_22,
                                                    VAR_0))
                || !FUNC_16(FUNC_14(VAR_22))
                || !FUNC_16(FUNC_14(VAR_21)))
            goto end;

        if (VAR_18 == 0 || VAR_18 == 1) {
            if (!FUNC_18(VAR_17 == 1)
                    || !FUNC_18(VAR_7 == 0)




                    || !FUNC_18(VAR_10 == VAR_18)
                    || !FUNC_18(VAR_12 == 0))
                goto end;
        } else {
            if (!FUNC_18(VAR_17 == 0)
                    || !FUNC_18(VAR_7 == 0)
                    || !FUNC_18(VAR_10 == 1)
                    || !FUNC_18(VAR_12 == 0))
                goto end;
        }

        FUNC_24(VAR_21, VAR_22);
        VAR_21 = VAR_22 = ((void*)0);
        VAR_17 = VAR_10 = 0;
    }

    if (!FUNC_18(FUNC_23(VAR_19, VAR_20, &VAR_21, &VAR_22,
                                             ((void*)0), ((void*)0))))
        goto end;


    VAR_23 = FUNC_0(VAR_22, VAR_1);
    VAR_5 = FUNC_8();
    if (!FUNC_17(VAR_5)
            || !FUNC_17(VAR_23)
            || !FUNC_18(FUNC_9(VAR_5, VAR_24,
                                                      sizeof(VAR_24)))
            || !FUNC_18(FUNC_10(VAR_5, VAR_23))
            || !FUNC_18(FUNC_11(VAR_5,
                                                           VAR_2))
            || !FUNC_18(FUNC_12(VAR_5)))
        goto end;
    VAR_14 = VAR_5;


    if (!FUNC_18(FUNC_21(VAR_21, VAR_22, VAR_0))
            || !FUNC_18(FUNC_14(VAR_22))
            || !FUNC_18(FUNC_14(VAR_21)))
        goto end;

    if (VAR_18 == 0 || VAR_18 == 1) {
        if (!FUNC_18(VAR_17 == 1)
                || !FUNC_18(VAR_7 == 1)
                || !FUNC_18(VAR_10 == 0)
                || !FUNC_18(VAR_12 == 0))
            goto end;
    } else {
        if (!FUNC_18(VAR_17 == 0)
                || !FUNC_18(VAR_7 == 0)
                || !FUNC_18(VAR_10 == 1)
                || !FUNC_18(VAR_12 == 1))
            goto end;
    }

    FUNC_24(VAR_21, VAR_22);
    VAR_21 = VAR_22 = ((void*)0);
    VAR_17 = VAR_7 = 0;
    VAR_10 = VAR_12 = 0;

    if (!FUNC_18(FUNC_23(VAR_19, VAR_20, &VAR_21, &VAR_22,
                                             ((void*)0), ((void*)0))))
        goto end;






    if (!FUNC_18(FUNC_15(VAR_21, "P-256")))
        goto end;






    if (!FUNC_18(FUNC_21(VAR_21, VAR_22, VAR_0))
            || !FUNC_18(FUNC_14(VAR_22))
            || !FUNC_18(FUNC_14(VAR_21)))
        goto end;

    if (VAR_18 == 0 || VAR_18 == 1) {
        if (!FUNC_18(VAR_17 == 2)
                || !FUNC_18(VAR_7 == 2)
                || !FUNC_18(VAR_10 == 0)
                || !FUNC_18(VAR_12 == 0))
            goto end;
    } else {
        if (!FUNC_18(VAR_17 == 0)
                || !FUNC_18(VAR_7 == 0)
                || !FUNC_18(VAR_10 == 2)
                || !FUNC_18(VAR_12 == 2))
            goto end;
    }

    FUNC_24(VAR_21, VAR_22);
    VAR_21 = VAR_22 = ((void*)0);
    VAR_17 = VAR_7 = 0;
    VAR_10 = VAR_12 = 0;

    if (VAR_18 != 3) {




        VAR_15 = "Dummy Identity";
        if (!FUNC_18(FUNC_23(VAR_19, VAR_20, &VAR_21, &VAR_22,
                                                 ((void*)0), ((void*)0)))
                || !FUNC_18(FUNC_21(VAR_21, VAR_22,
                                                    VAR_0))
                || !FUNC_16(FUNC_14(VAR_22))
                || !FUNC_16(FUNC_14(VAR_21)))
            goto end;

        if (VAR_18 == 0 || VAR_18 == 1) {
            if (!FUNC_18(VAR_17 == 1)
                    || !FUNC_18(VAR_7 == 1)
                    || !FUNC_18(VAR_10 == 0)




                    || !FUNC_18(VAR_12 == VAR_18))
                goto end;
        } else {
            if (!FUNC_18(VAR_17 == 0)
                    || !FUNC_18(VAR_7 == 0)
                    || !FUNC_18(VAR_10 == 1)
                    || !FUNC_18(VAR_12 == 1))
                goto end;
        }

        FUNC_24(VAR_21, VAR_22);
        VAR_21 = VAR_22 = ((void*)0);
    }
    VAR_25 = 1;

 end:
    FUNC_7(VAR_5);
    FUNC_7(VAR_14);
    VAR_5 = VAR_14 = ((void*)0);
    FUNC_13(VAR_21);
    FUNC_13(VAR_22);
    FUNC_1(VAR_19);
    FUNC_1(VAR_20);
    return VAR_25;
}

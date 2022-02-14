
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL_SESSION ;
typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int,size_t*) ;
 void* FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 void* FUNC_13 (int *,char const*,int ,size_t*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (scalar_t__,int ) ;
 int FUNC_21 (scalar_t__,int ) ;
 int FUNC_22 (void*) ;
 int VAR_5 ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_25 () ;
 int * VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 void* FUNC_26 (int *,int *,int ) ;
 void* FUNC_27 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 void* FUNC_28 (int *,int *,int **,int **,int *,int *) ;
 int VAR_16 ;
 int * VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_29 (char const*) ;

__attribute__((used)) static int FUNC_30(int VAR_21)
{
    SSL_CTX *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);
    SSL *VAR_24 = ((void*)0), *VAR_25 = ((void*)0);
    int VAR_26 = 0;
    const char VAR_27[] = "Dummy data";
    char VAR_28[80];
    size_t VAR_29, VAR_30;
    SSL_SESSION *VAR_31 = ((void*)0);

    VAR_14 = VAR_20 = VAR_19 = VAR_11 = VAR_12 = 0;
    VAR_18 = VAR_10 = VAR_6 = VAR_8 = VAR_7 = 0;
    VAR_15 = 0;

    if (!FUNC_22(FUNC_27(FUNC_24(), FUNC_23(),
                                       VAR_5, 0,
                                       &VAR_22, &VAR_23, VAR_13, VAR_16))
        || !FUNC_22(FUNC_5(VAR_22,
                                                 VAR_0)))
        goto err;
    switch (VAR_21) {
    case 0:
    case 3:
    case 6:
    case 9:
        break;
    case 1:
    case 4:
    case 7:
    case 10:
        FUNC_2(VAR_23, VAR_2);
        break;
    case 2:
    case 5:
    case 8:
    case 11:
        FUNC_2(VAR_22, VAR_2);
        break;
    default:
        FUNC_14("Invalid test value");
        goto err;
    }

    if (VAR_21 >= 6) {

        if (!FUNC_22(FUNC_28(VAR_22, VAR_23, &VAR_24, &VAR_25, ((void*)0), ((void*)0)))
                || !FUNC_22(FUNC_26(VAR_24, VAR_25, VAR_1)))
            goto err;
        VAR_31 = FUNC_9(VAR_25);
        if (!FUNC_19(VAR_31))
            goto err;
        FUNC_12(VAR_25);
        FUNC_12(VAR_24);
        FUNC_8(VAR_24);
        FUNC_8(VAR_25);
        VAR_24 = VAR_25 = ((void*)0);
    }

    if ((VAR_21 >= 3 && VAR_21 <= 5) || VAR_21 >= 9) {







        if (!FUNC_22(FUNC_4(VAR_22, "P-256")))
            goto err;

    }

    VAR_17 = FUNC_1(FUNC_25());
    VAR_9 = FUNC_1(FUNC_25());
    if (!FUNC_19(VAR_17)
            || !FUNC_19(VAR_9)) {
        FUNC_0(VAR_17);
        FUNC_0(VAR_9);
        goto err;
    }


    if (!FUNC_22(FUNC_28(VAR_22, VAR_23, &VAR_24, &VAR_25, VAR_17,
                                      VAR_9)))
        goto err;

    if (VAR_21 >= 6) {

        if (!FUNC_22(FUNC_11(VAR_25, VAR_31))
                || !FUNC_22(FUNC_13(VAR_25, VAR_27, FUNC_29(VAR_27),
                                                   &VAR_29))
                || (VAR_21 <= 8
                    && !FUNC_16(FUNC_10(VAR_24, VAR_28, sizeof(VAR_28),
                                                &VAR_30),
                                                VAR_4)))
            goto err;
        if (VAR_21 <= 8) {
            if (!FUNC_17(FUNC_7(VAR_25), 0))
                goto err;
        } else {
            if (!FUNC_18(FUNC_7(VAR_25), 0))
                goto err;
        }
        if (!FUNC_16(FUNC_10(VAR_24, VAR_28, sizeof(VAR_28),
                                             &VAR_30),
                         VAR_3))
            goto err;
    }


    if (!FUNC_22(FUNC_26(VAR_24, VAR_25, VAR_1)))
        goto err;






    if (!FUNC_15(VAR_6) || !FUNC_15(VAR_8) || !FUNC_15(VAR_7))
        goto err;

    switch (VAR_21) {
    case 0:
        if (!FUNC_22(VAR_19)
                || !FUNC_22(VAR_11)
                || !FUNC_15(VAR_12)
                || !FUNC_21(VAR_15, 0))
            goto err;
        break;

    case 1:
        if (!FUNC_22(VAR_19)
                || !FUNC_15(VAR_11)
                || !FUNC_15(VAR_12)
                || !FUNC_20(VAR_15, 0))
            goto err;
        break;

    case 2:
        if (!FUNC_15(VAR_19)
                || !FUNC_22(VAR_11)
                || !FUNC_15(VAR_12)
                || !FUNC_21(VAR_15, 0))
            goto err;
        break;

    case 3:
        if (!FUNC_22(VAR_19)
                || !FUNC_22(VAR_11)
                || !FUNC_15(VAR_12)
                || !FUNC_21(VAR_15, 0))
            goto err;
        break;

    case 4:
        if (!FUNC_22(VAR_19)
                || !FUNC_15(VAR_11)
                || !FUNC_15(VAR_12)
                || !FUNC_20(VAR_15, 0))
            goto err;
        break;

    case 5:
        if (!FUNC_15(VAR_19)
                || !FUNC_22(VAR_11)
                || !FUNC_15(VAR_12)
                || !FUNC_21(VAR_15, 0))
            goto err;
        break;

    case 6:
        if (!FUNC_22(VAR_19)
                || !FUNC_15(VAR_11)
                || !FUNC_22(VAR_12)
                || !FUNC_21(VAR_15, 0))
            goto err;
        break;

    case 7:
        if (!FUNC_22(VAR_19)
                || !FUNC_15(VAR_11)
                || !FUNC_15(VAR_12)
                || !FUNC_20(VAR_15, 0))
            goto err;
        break;

    case 8:
        if (!FUNC_15(VAR_19)
                || !FUNC_15(VAR_11)
                || !FUNC_22(VAR_12)
                || !FUNC_21(VAR_15, 0))
            goto err;
        break;

    case 9:
        if (!FUNC_22(VAR_19)
                || !FUNC_15(VAR_11)
                || !FUNC_22(VAR_12)
                || !FUNC_21(VAR_15, 0))
            goto err;
        break;

    case 10:
        if (!FUNC_22(VAR_19)
                || !FUNC_15(VAR_11)
                || !FUNC_15(VAR_12)
                || !FUNC_20(VAR_15, 0))
            goto err;
        break;

    case 11:
        if (!FUNC_15(VAR_19)
                || !FUNC_15(VAR_11)
                || !FUNC_22(VAR_12)
                || !FUNC_21(VAR_15, 0))
            goto err;
        break;

    default:
        FUNC_14("Invalid test value");
        goto err;
    }

    VAR_26 = 1;
 err:
    FUNC_6(VAR_31);
    FUNC_8(VAR_24);
    FUNC_8(VAR_25);
    FUNC_3(VAR_22);
    FUNC_3(VAR_23);

    return VAR_26;
}

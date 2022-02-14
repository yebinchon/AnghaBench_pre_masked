
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_SESSION ;
typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int VAR_10 ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_17 (int *,int *,int **,int **,int *,int *) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_18(int VAR_20)
{
    SSL_CTX *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
    SSL *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
    SSL_SESSION *VAR_25 = ((void*)0);
    int VAR_26 = 0;
    VAR_13 = VAR_11 = VAR_18 = 0;


    if (VAR_20 == 10 || VAR_20 == 11)
        VAR_19 = 1;
    else
        VAR_19 = 0;


    switch (VAR_20) {
    case 0:
    case 1:
        VAR_16 = VAR_3;
        break;

    case 2:
    case 3:
        VAR_16 = VAR_4;
        break;

    case 4:
    case 5:
        VAR_16 = VAR_5;
        break;

    case 6:
    case 7:
        VAR_16 = VAR_6;
        break;

    default:
        VAR_16 = VAR_2;
    }

    if (!FUNC_12(FUNC_16(FUNC_14(),
                                       FUNC_13(),
                                       VAR_9,
                                       ((VAR_20 % 2) == 0) ? VAR_7
                                                        : VAR_8,
                                       &VAR_22, &VAR_21, VAR_10, VAR_15)))
        goto end;





    if (!FUNC_12(FUNC_1(VAR_22, VAR_1)))
        goto end;

    if (!FUNC_12(FUNC_2(VAR_22, VAR_14, VAR_12,
                                                 ((void*)0))))
        goto end;

    if (VAR_20 >= 8
            && !FUNC_12(FUNC_3(VAR_22, VAR_17)))
        goto end;

    if (!FUNC_12(FUNC_17(VAR_22, VAR_21, &VAR_24, &VAR_23,
                                             ((void*)0), ((void*)0)))
            || !FUNC_12(FUNC_15(VAR_24, VAR_23,
                                                VAR_0)))
        goto end;
    if (!FUNC_11(VAR_13, 1)
            || !FUNC_11(VAR_11, ((VAR_20 % 2) == 0) ? 1 : 0))
        goto end;

    VAR_13 = VAR_11 = 0;

    VAR_25 = FUNC_6(VAR_23);
    FUNC_9(VAR_23);
    FUNC_9(VAR_24);
    FUNC_5(VAR_24);
    FUNC_5(VAR_23);
    VAR_24 = VAR_23 = ((void*)0);


    if (!FUNC_12(FUNC_17(VAR_22, VAR_21, &VAR_24, &VAR_23, ((void*)0),
                                      ((void*)0)))
            || !FUNC_12(FUNC_8(VAR_23, VAR_25))
            || !FUNC_12(FUNC_15(VAR_24, VAR_23,
                                                VAR_0)))
        goto end;

    if (VAR_16 == VAR_3
            || VAR_16 == VAR_4) {
        if (!FUNC_10(FUNC_7(VAR_23)))
            goto end;
    } else {
        if (!FUNC_12(FUNC_7(VAR_23)))
            goto end;
    }

    if (!FUNC_11(VAR_13,
                     (VAR_19
                      || VAR_16 == VAR_4
                      || VAR_16 == VAR_6)
                     ? 1 : 0)
            || !FUNC_11(VAR_11, 1))
        goto end;

    VAR_26 = 1;

 end:
    FUNC_4(VAR_25);
    FUNC_5(VAR_24);
    FUNC_5(VAR_23);
    FUNC_0(VAR_22);
    FUNC_0(VAR_21);

    return VAR_26;
}

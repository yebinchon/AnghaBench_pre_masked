
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,int,size_t*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_15 ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int ,int ,int,int ,int **,int **,int ,int ) ;
 int FUNC_15 (int *,int *,int **,int **,int *,int *) ;
 int FUNC_16 (int) ;
 int VAR_16 ;
 int FUNC_17 (int *,size_t,int ,int) ;

__attribute__((used)) static int FUNC_18(int VAR_17)
{
    SSL_CTX *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
    SSL *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
    int VAR_22 = 0;
    size_t VAR_23 = 0;
    size_t VAR_24;
    int VAR_25;
    unsigned char VAR_26;
    BIO *VAR_27;
    int VAR_28;
    FUNC_0();

    if (!FUNC_10(FUNC_14(FUNC_12(), FUNC_11(),
                                       VAR_14, 0,
                                       &VAR_19, &VAR_18, VAR_15, VAR_16)))
        goto end;

    if (VAR_17 == VAR_8
            || VAR_17 == VAR_7) {
        VAR_23 = VAR_3;

        VAR_23 -= VAR_2;

        FUNC_2(VAR_19, VAR_13);
    } else if (VAR_17 == VAR_10
               || VAR_17 == VAR_9) {
        VAR_23 = VAR_5;
    }

    if (!FUNC_10(FUNC_15(VAR_19, VAR_18, &VAR_21, &VAR_20,
                                      ((void*)0), ((void*)0))))
        goto end;

    VAR_27 = FUNC_5(VAR_21);

    if (VAR_17 == VAR_12
            || VAR_17 == VAR_11) {
        VAR_23 = VAR_4;

        if (VAR_17 == VAR_11)
            VAR_23++;

        if (!FUNC_10(FUNC_17(VAR_27, VAR_23,
                                    VAR_1, VAR_14)))
            goto end;

        if (!FUNC_9(FUNC_3(VAR_21), 0))
            goto end;

        VAR_25 = (VAR_17 == VAR_12) ? 0 : 1;
        if (!FUNC_8(FUNC_16(0), VAR_25))
            goto end;

        goto success;
    }

    if (!FUNC_10(FUNC_13(VAR_21, VAR_20,
                                         VAR_6)))
        goto end;

    if (VAR_17 == VAR_7
            || VAR_17 == VAR_9) {
        VAR_25 = 1;
        VAR_23++;
    } else {
        VAR_25 = 0;
    }

    VAR_28 = VAR_13;

    if (!FUNC_10(FUNC_17(VAR_27, VAR_23, VAR_0,
                                VAR_28)))
        goto end;

    if (!FUNC_7(FUNC_6(VAR_21, &VAR_26, sizeof(VAR_26), &VAR_24)))
        goto end;

    if (!FUNC_8(FUNC_16(1), VAR_25))
        goto end;

 success:
    VAR_22 = 1;

 end:
    FUNC_4(VAR_21);
    FUNC_4(VAR_20);
    FUNC_1(VAR_19);
    FUNC_1(VAR_18);
    return VAR_22;
}

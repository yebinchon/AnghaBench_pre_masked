
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL_SESSION ;
typedef int SSL_CTX ;
typedef int SSL_CONF_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int*) ;
 int FUNC_7 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,unsigned char*,int,size_t*) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,int ,int ,size_t*) ;
 int FUNC_17 (scalar_t__,int) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ,unsigned char*,size_t) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (size_t,int ) ;
 int FUNC_22 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 scalar_t__ FUNC_25 (int *,int *,int ) ;
 scalar_t__ FUNC_26 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 scalar_t__ FUNC_27 (int *,int *,int **,int **,int *,int *) ;
 int VAR_14 ;
 int * VAR_15 ;
 scalar_t__ FUNC_28 (int **,int **,int **,int **,int **,int) ;
 int FUNC_29 (int ) ;

__attribute__((used)) static int FUNC_30(int VAR_16, int VAR_17, int VAR_18)
{
    SSL_CTX *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
    SSL *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
    int VAR_23 = 0;
    SSL_SESSION *VAR_24 = ((void*)0);
    size_t VAR_25, VAR_26;
    unsigned char VAR_27[20];

    VAR_11 = 0;

    if (!FUNC_22(FUNC_26(FUNC_24(), FUNC_23(),
                                       VAR_9, 0, &VAR_20,
                                       &VAR_19, VAR_12, VAR_14)))
        return 0;

    if (VAR_17 > 0) {
        if (VAR_18 == 0) {
            FUNC_7(VAR_20, VAR_6);
        } else {
            SSL_CONF_CTX *VAR_28 = FUNC_1();

            if (!FUNC_20(VAR_28))
                goto end;
            FUNC_2(VAR_28, VAR_1
                                            | VAR_2);
            FUNC_3(VAR_28, VAR_20);
            if (!FUNC_17(FUNC_4(VAR_28, "Options", "-AntiReplay"),
                             2)) {
                FUNC_0(VAR_28);
                goto end;
            }
            FUNC_0(VAR_28);
        }
        FUNC_6(VAR_20, VAR_10, &VAR_17);
    }

    if (!FUNC_22(FUNC_28(&VAR_19, &VAR_20, &VAR_21,
                                        &VAR_22, &VAR_24, VAR_16)))
        goto end;





    if (!FUNC_22(FUNC_25(VAR_22, VAR_21, VAR_5))
            || !FUNC_22(FUNC_13(VAR_21)))
        goto end;

    FUNC_15(VAR_21);
    FUNC_15(VAR_22);
    FUNC_10(VAR_22);
    FUNC_10(VAR_21);
    VAR_22 = VAR_21 = ((void*)0);

    if (!FUNC_22(FUNC_27(VAR_20, VAR_19, &VAR_22,
                                      &VAR_21, ((void*)0), ((void*)0)))
            || !FUNC_22(FUNC_14(VAR_21, VAR_24)))
        goto end;


    if (!FUNC_22(FUNC_16(VAR_21, VAR_0, FUNC_29(VAR_0),
                                        &VAR_26))
            || !FUNC_21(VAR_26, FUNC_29(VAR_0)))
        goto end;

    if (VAR_17 <= 1) {
        if (!FUNC_17(FUNC_12(VAR_22, VAR_27, sizeof(VAR_27),
                                             &VAR_25),
                         VAR_7)




                || !FUNC_17(FUNC_11(VAR_22),
                                VAR_4))
            goto end;
    } else {

        if (!FUNC_17(FUNC_12(VAR_22, VAR_27, sizeof(VAR_27),
                                             &VAR_25),
                         VAR_8)
                || !FUNC_19(VAR_0, FUNC_29(VAR_0), VAR_27, VAR_25)




                || !FUNC_18(FUNC_9(VAR_21), 0)
                || !FUNC_17(FUNC_12(VAR_22, VAR_27, sizeof(VAR_27),
                                             &VAR_25),
                                VAR_7)
                || !FUNC_17(FUNC_11(VAR_22),
                                VAR_3))
            goto end;
    }


    if (!FUNC_22(FUNC_25(VAR_22, VAR_21, VAR_5))
            || !FUNC_17(FUNC_13(VAR_21), (VAR_17 > 0) ? 1 : 0)
            || !FUNC_17(VAR_11, VAR_17 > 0 ? 1 : 0))
        goto end;

    VAR_23 = 1;

 end:
    FUNC_8(VAR_24);
    FUNC_8(VAR_13);
    FUNC_8(VAR_15);
    VAR_13 = VAR_15 = ((void*)0);
    FUNC_10(VAR_22);
    FUNC_10(VAR_21);
    FUNC_5(VAR_20);
    FUNC_5(VAR_19);
    return VAR_23;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int) ;
 char* VAR_1 ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* FUNC_13 (char const*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,char const*,int *) ;
 int * FUNC_16 (int ) ;
 int FUNC_17 (int *,int ,int *) ;
 int VAR_5 ;
 int * FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *,char*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int VAR_6 ;
 int FUNC_23 (int ,char*,...) ;
 int FUNC_24 (char*,int,int,int ) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (int) ;
 int FUNC_27 () ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_28 (char*,char) ;
 int FUNC_29 (char*) ;

int FUNC_30(int VAR_9, char *VAR_10[])
{
    const char *VAR_11 = VAR_4;
    const char *VAR_12 = VAR_1;
    char *VAR_13;
    char *VAR_14;
    BIO *VAR_15 = ((void*)0);
    char VAR_16[1024 * 10], *VAR_17;
    SSL_CTX *VAR_18 = ((void*)0);
    SSL *VAR_19;
    BIO *VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24 = VAR_2;

    if (VAR_9 > 1)
        VAR_11 = VAR_10[1];
    if (VAR_9 > 2)
        VAR_12 = VAR_10[2];

    VAR_13 = FUNC_13(VAR_11);
    if ((VAR_14 = FUNC_28(VAR_13, ':')) != ((void*)0))
        *VAR_14 = 0;






    VAR_18 = FUNC_16(FUNC_21());


    FUNC_17(VAR_18, VAR_5, ((void*)0));
    FUNC_15(VAR_18, VAR_12, ((void*)0));


    VAR_19 = FUNC_18(VAR_18);
    FUNC_20(VAR_19);


    if (FUNC_19(VAR_19, VAR_13) <= 0)
        goto err;


    VAR_20 = FUNC_2(FUNC_0());
    FUNC_8(VAR_20, VAR_19, VAR_0);


    VAR_15 = FUNC_2(FUNC_5());
    FUNC_6(VAR_15, VAR_11);
    FUNC_7(VAR_15, 1);
    VAR_15 = FUNC_3(VAR_20, VAR_15);

    VAR_17 = "GET / HTTP/1.0\r\n\r\n";
    VAR_22 = FUNC_29(VAR_17);

    VAR_23 = 0;
    for (;;) {
        VAR_21 = FUNC_10(VAR_15, &(VAR_17[VAR_23]), VAR_22);
        if (VAR_21 <= 0) {
            if (FUNC_9(VAR_15)) {
                FUNC_23(VAR_7, "write DELAY\n");
                FUNC_26(1);
                continue;
            } else {
                goto err;
            }
        }
        VAR_23 += VAR_21;
        VAR_22 -= VAR_21;
        if (VAR_22 <= 0)
            break;
    }

    for (;;) {
        VAR_21 = FUNC_4(VAR_15, VAR_16, sizeof(VAR_16));
        if (VAR_21 == 0)
            break;
        if (VAR_21 < 0) {
            if (FUNC_9(VAR_15)) {
                FUNC_23(VAR_7, "read DELAY\n");
                FUNC_26(1);
                continue;
            }
            goto err;
        }
        FUNC_24(VAR_16, 1, VAR_21, VAR_8);
    }

    VAR_24 = VAR_3;
    goto done;

 err:
    if (FUNC_11() == 0) {
        FUNC_23(VAR_7, "errno=%d ", VAR_6);
        FUNC_25("error");
    } else {
        FUNC_12(VAR_7);
    }
 done:
    FUNC_1(VAR_15);
    FUNC_14(VAR_18);
    return VAR_24;
}

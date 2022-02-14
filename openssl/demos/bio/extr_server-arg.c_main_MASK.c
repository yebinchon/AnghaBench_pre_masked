
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL_CTX ;
typedef int SSL_CONF_CTX ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (int *,int*,char***) ;
 int * FUNC_14 (int *) ;
 int * FUNC_15 (int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int ,int ,int ) ;
 int FUNC_19 (int *) ;
 int VAR_6 ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,char*,...) ;
 int FUNC_22 (char*,int,int,int ) ;
 int FUNC_23 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_24 (char*,char*) ;

int FUNC_25(int VAR_9, char *VAR_10[])
{
    char *VAR_11 = "*:4433";
    BIO *VAR_12, *VAR_13;
    SSL_CTX *VAR_14;
    SSL_CONF_CTX *VAR_15;
    char VAR_16[512];
    BIO *VAR_17 = ((void*)0);
    int VAR_18 = VAR_0, VAR_19;
    char **VAR_20 = VAR_10 + 1;
    int VAR_21 = VAR_9 - 1;

    VAR_14 = FUNC_15(FUNC_17());

    VAR_15 = FUNC_10();
    FUNC_11(VAR_15, VAR_5);
    FUNC_11(VAR_15, VAR_4);
    FUNC_12(VAR_15, VAR_14);
    while (*VAR_20 && **VAR_20 == '-') {
        int VAR_22;

        VAR_22 = FUNC_13(VAR_15, &VAR_21, &VAR_20);
        if (VAR_22 == -3) {
            FUNC_21(VAR_7, "Missing argument for %s\n", *VAR_20);
            goto err;
        }
        if (VAR_22 < 0) {
            FUNC_21(VAR_7, "Error in command %s\n", *VAR_20);
            FUNC_8(VAR_7);
            goto err;
        }

        if (VAR_22 > 0)
            continue;

        if (FUNC_24(*VAR_20, "-port") == 0) {
            VAR_11 = VAR_20[1];
            if (VAR_11 == ((void*)0)) {
                FUNC_21(VAR_7, "Missing -port argument\n");
                goto err;
            }
            VAR_20 += 2;
            VAR_21 -= 2;
            continue;
        } else {
            FUNC_21(VAR_7, "Unknown argument %s\n", *VAR_20);
            goto err;
        }
    }

    if (!FUNC_9(VAR_15)) {
        FUNC_21(VAR_7, "Finish error\n");
        FUNC_8(VAR_7);
        goto err;
    }
    VAR_12 = FUNC_4(VAR_14, 0);

    if ((VAR_17 = FUNC_3(VAR_11)) == ((void*)0))
        goto err;






    FUNC_7(VAR_17, VAR_12);

 again:






    if (FUNC_0(VAR_17) <= 0)
        goto err;

    for (;;) {
        VAR_19 = FUNC_6(VAR_17, VAR_16, 512);
        if (VAR_19 == 0) {





            FUNC_23("Done\n");
            VAR_13 = FUNC_5(VAR_17);
            FUNC_2(VAR_13);
            goto again;
        }
        if (VAR_19 < 0)
            goto err;
        FUNC_22(VAR_16, 1, VAR_19, VAR_8);
        FUNC_20(VAR_8);
    }

    VAR_18 = VAR_1;
 err:
    if (VAR_18 != VAR_1)
        FUNC_8(VAR_7);
    FUNC_1(VAR_17);
    return VAR_18;
}

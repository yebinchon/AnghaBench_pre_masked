
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL_CONF_CTX ;
typedef int SSL ;
typedef int BIO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 int * FUNC_5 (int ,int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 () ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int *) ;
 int VAR_1 ;
 int FUNC_17 (int *,int*,char***) ;
 int * FUNC_18 (int ) ;
 int VAR_2 ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 () ;
 int FUNC_21 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_22 (char*,char*) ;

int FUNC_23(int VAR_5, char **VAR_6)
{
    BIO *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    int VAR_9;
    char VAR_10[1024];
    SSL_CTX *VAR_11;
    SSL_CONF_CTX *VAR_12;
    SSL *VAR_13;
    char **VAR_14 = VAR_6 + 1;
    const char *VAR_15 = "localhost:4433";
    int VAR_16 = VAR_5 - 1;

    VAR_11 = FUNC_18(FUNC_20());
    VAR_12 = FUNC_14();
    FUNC_15(VAR_12, VAR_1);
    FUNC_16(VAR_12, VAR_11);
    while (*VAR_14 && **VAR_14 == '-') {
        int VAR_17;

        VAR_17 = FUNC_17(VAR_12, &VAR_16, &VAR_14);
        if (VAR_17 == -3) {
            FUNC_21(VAR_3, "Missing argument for %s\n", *VAR_14);
            goto end;
        }
        if (VAR_17 < 0) {
            FUNC_21(VAR_3, "Error in command %s\n", *VAR_14);
            FUNC_11(VAR_3);
            goto end;
        }

        if (VAR_17 > 0)
            continue;

        if (FUNC_22(*VAR_14, "-connect") == 0) {
            VAR_15 = VAR_14[1];
            if (VAR_15 == ((void*)0)) {
                FUNC_21(VAR_3, "Missing -connect argument\n");
                goto end;
            }
            VAR_14 += 2;
            VAR_16 -= 2;
            continue;
        } else {
            FUNC_21(VAR_3, "Unknown argument %s\n", *VAR_14);
            goto end;
        }
    }

    if (!FUNC_12(VAR_12)) {
        FUNC_21(VAR_3, "Finish error\n");
        FUNC_11(VAR_3);
        goto end;
    }







    VAR_7 = FUNC_6(VAR_11);

    FUNC_4(VAR_7, &VAR_13);

    if (!VAR_13) {
        FUNC_21(VAR_3, "Can't locate SSL pointer\n");
        goto end;
    }


    FUNC_19(VAR_13, VAR_2);



    FUNC_9(VAR_7, VAR_15);

    VAR_8 = FUNC_5(VAR_4, VAR_0);
    if (FUNC_0(VAR_7) <= 0) {
        FUNC_21(VAR_3, "Error connecting to server\n");
        FUNC_11(VAR_3);
        goto end;
    }

    if (FUNC_1(VAR_7) <= 0) {
        FUNC_21(VAR_3, "Error establishing SSL connection\n");
        FUNC_11(VAR_3);
        goto end;
    }



    FUNC_7(VAR_7, "GET / HTTP/1.0\n\n");
    for (;;) {
        VAR_9 = FUNC_8(VAR_7, VAR_10, 1024);
        if (VAR_9 <= 0)
            break;
        FUNC_10(VAR_8, VAR_10, VAR_9);
    }
 end:
    FUNC_13(VAR_12);
    FUNC_3(VAR_7);
    FUNC_2(VAR_8);
    return 0;
}

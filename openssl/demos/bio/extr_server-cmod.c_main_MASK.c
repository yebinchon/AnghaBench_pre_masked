
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL_CTX ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char*,char*,int ) ;
 int FUNC_10 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_11 (int *,char*) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (unsigned char*,int,int,int ) ;
 int FUNC_17 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_18(int VAR_4, char *VAR_5[])
{
    unsigned char VAR_6[512];
    char *VAR_7 = "*:4433";
    BIO *VAR_8 = ((void*)0);
    BIO *VAR_9, *VAR_10;
    SSL_CTX *VAR_11;
    int VAR_12 = VAR_0, VAR_13;

    VAR_11 = FUNC_12(FUNC_13());

    if (FUNC_9("cmod.cnf", "testapp", 0) <= 0) {
        FUNC_15(VAR_2, "Error processing config file\n");
        goto err;
    }

    if (FUNC_11(VAR_11, "server") == 0) {
        FUNC_15(VAR_2, "Error configuring server.\n");
        goto err;
    }


    VAR_9 = FUNC_4(VAR_11, 0);

    if ((VAR_8 = FUNC_3(VAR_7)) == ((void*)0))
        goto err;






    FUNC_7(VAR_8, VAR_9);

 again:






    if (FUNC_0(VAR_8) <= 0)
        goto err;

    for (;;) {
        VAR_13 = FUNC_6(VAR_8, VAR_6, sizeof(VAR_6));
        if (VAR_13 == 0) {





            FUNC_17("Done\n");
            VAR_10 = FUNC_5(VAR_8);
            FUNC_2(VAR_10);
            goto again;
        }
        if (VAR_13 < 0) {
            if (FUNC_8(VAR_8))
                continue;
            goto err;
        }
        FUNC_16(VAR_6, 1, VAR_13, VAR_3);
        FUNC_14(VAR_3);
    }

    VAR_12 = VAR_1;
 err:
    if (VAR_12 != VAR_1)
        FUNC_10(VAR_2);
    FUNC_1(VAR_8);
    return VAR_12;
}

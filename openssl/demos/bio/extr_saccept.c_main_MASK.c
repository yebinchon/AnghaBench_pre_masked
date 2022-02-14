
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,int *) ;
 int VAR_0 ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int ) ;
 int VAR_3 ;
 int FUNC_13 () ;
 int VAR_4 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int,int,int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 () ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_18(int VAR_7, char *VAR_8[])
{
    char *VAR_9 = ((void*)0);
    BIO *VAR_10 = ((void*)0);
    BIO *VAR_11, *VAR_12;
    SSL_CTX *VAR_13;
    char VAR_14[512];
    int VAR_15 = VAR_1, VAR_16;

    if (VAR_7 <= 1)
        VAR_9 = "*:4433";
    else
        VAR_9 = VAR_8[1];

    VAR_13 = FUNC_10(FUNC_13());
    if (!FUNC_12(VAR_13, VAR_0))
        goto err;
    if (!FUNC_11(VAR_13, VAR_0, VAR_3))
        goto err;
    if (!FUNC_9(VAR_13))
        goto err;


    VAR_11 = FUNC_4(VAR_13, 0);

    if ((VAR_10 = FUNC_3(VAR_9)) == ((void*)0))
        goto err;






    FUNC_7(VAR_10, VAR_11);


    FUNC_17();

 again:






    if (FUNC_0(VAR_10) <= 0)
        goto err;

    while (!VAR_4) {
        VAR_16 = FUNC_6(VAR_10, VAR_14, 512);
        if (VAR_16 == 0) {





            FUNC_16("Done\n");
            VAR_12 = FUNC_5(VAR_10);
            FUNC_2(VAR_12);
            goto again;
        }
        if (VAR_16 < 0)
            goto err;
        FUNC_15(VAR_14, 1, VAR_16, VAR_6);
        FUNC_14(VAR_6);
    }

    VAR_15 = VAR_2;
 err:
    if (VAR_15 != VAR_2)
        FUNC_8(VAR_5);
    FUNC_1(VAR_10);
    return VAR_15;
}

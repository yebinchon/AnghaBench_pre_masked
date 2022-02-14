
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dummyrec ;
typedef int buf ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *,char const*,int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int VAR_1 ;
 int FUNC_15 () ;
 int VAR_2 ;
 int FUNC_16 (int *,int *,int ) ;
 int FUNC_17 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_18 (int *,int *,int **,int **,int *,int *) ;
 int FUNC_19 (char*) ;
 int VAR_3 ;
 int FUNC_20 (char const*) ;

__attribute__((used)) static int FUNC_21(void)
{
    SSL_CTX *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    SSL *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    const char *VAR_8 = "Dummy";
    BIO *VAR_9 = ((void*)0);
    int VAR_10 = 0, VAR_11;
    char VAR_12[80];
    unsigned char VAR_13[] = {
        0x17, 0x03, 0x03, 0x00, 0x05, 'D', 'u', 'm', 'm', 'y'
    };

    if (!FUNC_14(FUNC_17(FUNC_15(), FUNC_15(),
                                       VAR_1, 0,
                                       &VAR_4, &VAR_5, VAR_2, VAR_3)))
        goto err;





    if (!FUNC_14(FUNC_3(VAR_4, "AES128-SHA"))
            || !FUNC_14(FUNC_3(VAR_5, "AES256-SHA"))
            || !FUNC_14(FUNC_4(VAR_4,
                                                   "TLS_AES_128_GCM_SHA256"))
            || !FUNC_14(FUNC_4(VAR_5,
                                                   "TLS_AES_256_GCM_SHA384"))
            || !FUNC_14(FUNC_18(VAR_4, VAR_5, &VAR_6, &VAR_7, ((void*)0),
                          ((void*)0))))
        goto err;

    VAR_9 = FUNC_6(VAR_7);
    if (!FUNC_13(VAR_9)) {
        FUNC_19("Unexpected NULL bio received\n");
        goto err;
    }


    if (!FUNC_10(FUNC_16(VAR_6, VAR_7, VAR_0)))
        goto err;

    FUNC_1();


    if (!FUNC_11(FUNC_0(VAR_9, VAR_13, sizeof(VAR_13)), 0))
        goto err;


    if (!FUNC_12(VAR_11 = FUNC_7(VAR_6, VAR_12, sizeof(VAR_12) - 1), 0)) {
        VAR_12[VAR_11] = '\0';
        FUNC_9("Unexpected success reading data: %s\n", VAR_12);
        goto err;
    }
    if (!FUNC_12(FUNC_8(VAR_6, VAR_8, FUNC_20(VAR_8)), 0))
        goto err;

    VAR_10 = 1;
 err:
    FUNC_5(VAR_6);
    FUNC_5(VAR_7);
    FUNC_2(VAR_4);
    FUNC_2(VAR_5);

    return VAR_10;
}

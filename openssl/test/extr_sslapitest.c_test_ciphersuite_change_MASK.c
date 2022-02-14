
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int id; } ;
struct TYPE_8__ {TYPE_2__ const* cipher; int cipher_id; } ;
typedef TYPE_1__ SSL_SESSION ;
typedef int SSL_CTX ;
typedef TYPE_2__ SSL_CIPHER ;
typedef int SSL ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int VAR_4 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int VAR_5 ;
 int FUNC_16 (int *,int *,int ) ;
 int FUNC_17 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_18 (int *,int *,int **,int **,int *,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_19(void)
{
    SSL_CTX *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    SSL *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    SSL_SESSION *VAR_11 = ((void*)0);
    int VAR_12 = 0;
    const SSL_CIPHER *VAR_13 = ((void*)0);


    if (!FUNC_13(FUNC_17(FUNC_15(), FUNC_14(),
                                       VAR_4, 0,
                                       &VAR_8, &VAR_7, VAR_5, VAR_6))
            || !FUNC_13(FUNC_3(VAR_7,
                                                   "TLS_AES_128_GCM_SHA256"))
            || !FUNC_13(FUNC_18(VAR_8, VAR_7, &VAR_10,
                                          &VAR_9, ((void*)0), ((void*)0)))
            || !FUNC_13(FUNC_16(VAR_10, VAR_9,
                                                VAR_0)))
        goto end;

    VAR_11 = FUNC_7(VAR_9);

    VAR_13 = FUNC_5(VAR_11);
    FUNC_10(VAR_9);
    FUNC_10(VAR_10);
    FUNC_6(VAR_10);
    FUNC_6(VAR_9);
    VAR_10 = VAR_9 = ((void*)0);



    if (!FUNC_13(FUNC_3(VAR_7,
                                            "TLS_CHACHA20_POLY1305_SHA256"))
            || !FUNC_13(FUNC_18(VAR_8, VAR_7, &VAR_10, &VAR_9,
                                             ((void*)0), ((void*)0)))
            || !FUNC_13(FUNC_9(VAR_9, VAR_11))
            || !FUNC_13(FUNC_16(VAR_10, VAR_9,
                                                VAR_0))
            || !FUNC_13(FUNC_8(VAR_9)))
        goto end;

    FUNC_4(VAR_11);
    VAR_11 = FUNC_7(VAR_9);
    FUNC_10(VAR_9);
    FUNC_10(VAR_10);
    FUNC_6(VAR_10);
    FUNC_6(VAR_9);
    VAR_10 = VAR_9 = ((void*)0);






    if (!FUNC_13(FUNC_3(VAR_7, "TLS_AES_256_GCM_SHA384"))
            || !FUNC_13(FUNC_18(VAR_8, VAR_7, &VAR_10, &VAR_9,
                                             ((void*)0), ((void*)0)))
            || !FUNC_13(FUNC_9(VAR_9, VAR_11))
            || !FUNC_13(FUNC_16(VAR_10, VAR_9,
                                                VAR_1))
            || !FUNC_11(FUNC_8(VAR_9)))
        goto end;

    FUNC_4(VAR_11);
    VAR_11 = ((void*)0);
    FUNC_10(VAR_9);
    FUNC_10(VAR_10);
    FUNC_6(VAR_10);
    FUNC_6(VAR_9);
    VAR_10 = VAR_9 = ((void*)0);


    if (!FUNC_13(FUNC_3(VAR_7, "TLS_AES_256_GCM_SHA384"))
            || !FUNC_13(FUNC_18(VAR_8, VAR_7, &VAR_10,
                                          &VAR_9, ((void*)0), ((void*)0)))
            || !FUNC_13(FUNC_16(VAR_10, VAR_9,
                                                VAR_0)))
        goto end;

    VAR_11 = FUNC_7(VAR_9);
    FUNC_10(VAR_9);
    FUNC_10(VAR_10);
    FUNC_6(VAR_10);
    FUNC_6(VAR_9);
    VAR_10 = VAR_9 = ((void*)0);

    if (!FUNC_13(FUNC_3(VAR_7,
                   "TLS_AES_128_GCM_SHA256:TLS_AES_256_GCM_SHA384"))
            || !FUNC_13(FUNC_3(VAR_8,
                                                   "TLS_AES_256_GCM_SHA384"))
            || !FUNC_13(FUNC_18(VAR_8, VAR_7, &VAR_10, &VAR_9,
                                             ((void*)0), ((void*)0)))
            || !FUNC_13(FUNC_9(VAR_9, VAR_11))





            || !FUNC_11(FUNC_16(VAR_10, VAR_9,
                                                VAR_2)))
        goto end;


    VAR_11->cipher = VAR_13;
    VAR_11->cipher_id = VAR_11->cipher->id;






    if (!FUNC_11(FUNC_16(VAR_10, VAR_9,
                                                VAR_1))
            || !FUNC_12(FUNC_0(FUNC_1()),
                            VAR_3))
        goto end;

    VAR_12 = 1;

 end:
    FUNC_4(VAR_11);
    FUNC_6(VAR_10);
    FUNC_6(VAR_9);
    FUNC_2(VAR_8);
    FUNC_2(VAR_7);

    return VAR_12;
}

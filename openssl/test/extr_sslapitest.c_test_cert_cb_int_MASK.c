
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int ,int ,int ,int,int **,int **,int *,int *) ;
 int FUNC_11 (int *,int *,int **,int **,int *,int *) ;

__attribute__((used)) static int FUNC_12(int VAR_4, int VAR_5)
{
    SSL_CTX *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    SSL *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    int VAR_11 = 0, VAR_12;







    if (!FUNC_6(FUNC_10(FUNC_8(),
                                       FUNC_7(),
                                       VAR_1,
                                       VAR_4,
                                       &VAR_7, &VAR_6, ((void*)0), ((void*)0))))
        goto end;

    if (VAR_5 == 0)
        VAR_3 = -1;
    else if (VAR_5 >= 3)
        VAR_3 = 3;
    else
        VAR_3 = 0;

    if (VAR_5 == 2)
        VAR_8 = FUNC_1(FUNC_8());
    FUNC_2(VAR_7, VAR_2, VAR_8);

    if (!FUNC_6(FUNC_11(VAR_7, VAR_6, &VAR_10, &VAR_9,
                                      ((void*)0), ((void*)0))))
        goto end;

    if (VAR_5 == 4) {




        if (!FUNC_6(FUNC_4(VAR_9,
                                             "ecdsa_secp256r1_sha256")))
            goto end;
    } else if (VAR_5 == 5) {




        if (!FUNC_6(FUNC_4(VAR_9,
                           "rsa_pss_rsae_sha256:rsa_pkcs1_sha256")))
            goto end;
    }

    VAR_12 = FUNC_9(VAR_10, VAR_9, VAR_0);
    if (!FUNC_6(VAR_5 == 0 || VAR_5 == 4 || VAR_5 == 5 ? !VAR_12 : VAR_12)
            || (VAR_5 > 0
                && !FUNC_5((VAR_3 - 2) * (VAR_3 - 3), 0))) {
        goto end;
    }

    VAR_11 = 1;

 end:
    FUNC_3(VAR_10);
    FUNC_3(VAR_9);
    FUNC_0(VAR_7);
    FUNC_0(VAR_6);
    FUNC_0(VAR_8);

    return VAR_11;
}

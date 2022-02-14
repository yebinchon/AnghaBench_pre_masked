
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_2 ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int **,int **,int ,int ) ;
 int FUNC_11 (int *,int *,int **,int **,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_12(int VAR_4)
{
    SSL_CTX *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    SSL *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    int VAR_9 = 0;

    if (!FUNC_6(FUNC_10(FUNC_8(), FUNC_7(),
                                       VAR_1, 0,
                                       &VAR_6, &VAR_5, VAR_2, VAR_3))
            || !FUNC_6(FUNC_2(VAR_6,
                           "TLS_AES_128_GCM_SHA256:TLS_AES_128_CCM_SHA256")))
        goto end;

    if (VAR_4 >=4 && VAR_4 <= 7) {

        if (!FUNC_6(FUNC_1(VAR_5, "AES256-GCM-SHA384")))
            goto end;
    }

    if (VAR_4 == 0 || VAR_4 == 4) {

        if (!FUNC_6(FUNC_2(VAR_5,
                                                "TLS_AES_128_GCM_SHA256")))
            goto end;
    } else if (VAR_4 == 1 || VAR_4 == 5) {

        if (!FUNC_6(FUNC_2(VAR_5,
                                                "TLS_AES_128_CCM_SHA256")))
            goto end;
    }

    if (!FUNC_6(FUNC_11(VAR_6, VAR_5, &VAR_8,
                                          &VAR_7, ((void*)0), ((void*)0))))
        goto end;

    if (VAR_4 == 8 || VAR_4 == 9) {

        if (!FUNC_6(FUNC_4(VAR_7, "AES256-GCM-SHA384")))
            goto end;
    }

    if (VAR_4 == 2 || VAR_4 == 6 || VAR_4 == 8) {

        if (!FUNC_6(FUNC_5(VAR_7,
                                            "TLS_AES_128_GCM_SHA256")))
            goto end;
    } else if (VAR_4 == 3 || VAR_4 == 7 || VAR_4 == 9) {

        if (!FUNC_6(FUNC_5(VAR_7,
                                            "TLS_AES_128_CCM_SHA256")))
            goto end;
    }

    if (!FUNC_6(FUNC_9(VAR_8, VAR_7, VAR_0)))
        goto end;

    VAR_9 = 1;

 end:
    FUNC_3(VAR_8);
    FUNC_3(VAR_7);
    FUNC_0(VAR_6);
    FUNC_0(VAR_5);

    return VAR_9;
}

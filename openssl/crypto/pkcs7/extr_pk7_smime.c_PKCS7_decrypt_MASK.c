
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int PKCS7 ;
typedef int EVP_PKEY ;
typedef int BIO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_10 (int *,int *,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;

int FUNC_15(PKCS7 *VAR_9, EVP_PKEY *VAR_10, X509 *VAR_11, BIO *VAR_12, int VAR_13)
{
    BIO *VAR_14;
    int VAR_15 = 0, VAR_16;
    char *VAR_17 = ((void*)0);

    if (VAR_9 == ((void*)0)) {
        FUNC_12(VAR_3, VAR_5);
        return 0;
    }

    if (!FUNC_11(VAR_9)) {
        FUNC_12(VAR_3, VAR_7);
        return 0;
    }

    if (VAR_11 && !FUNC_14(VAR_11, VAR_10)) {
        FUNC_12(VAR_3,
                 VAR_6);
        return 0;
    }

    if ((VAR_14 = FUNC_10(VAR_9, VAR_10, ((void*)0), VAR_11)) == ((void*)0)) {
        FUNC_12(VAR_3, VAR_4);
        return 0;
    }

    if (VAR_13 & VAR_8) {
        BIO *VAR_18, *VAR_19;

        if ((VAR_18 = FUNC_4(FUNC_0())) == ((void*)0)) {
            FUNC_12(VAR_3, VAR_2);
            FUNC_1(VAR_14);
            return 0;
        }
        if ((VAR_19 = FUNC_5(VAR_18, VAR_14)) == ((void*)0)) {
            FUNC_12(VAR_3, VAR_2);
            FUNC_1(VAR_18);
            FUNC_1(VAR_14);
            return 0;
        }
        VAR_15 = FUNC_13(VAR_19, VAR_12);
        if (VAR_15 > 0 && FUNC_3(VAR_14) == VAR_0) {
            if (!FUNC_2(VAR_14))
                VAR_15 = 0;
        }
        FUNC_1(VAR_19);
        return VAR_15;
    }
    if ((VAR_17 = FUNC_9(VAR_1)) == ((void*)0)) {
        FUNC_12(VAR_3, VAR_2);
        goto err;
    }
    for (;;) {
        VAR_16 = FUNC_6(VAR_14, VAR_17, VAR_1);
        if (VAR_16 <= 0) {
            VAR_15 = 1;
            if (FUNC_3(VAR_14) == VAR_0) {
                if (!FUNC_2(VAR_14))
                    VAR_15 = 0;
            }

            break;
        }
        if (FUNC_7(VAR_12, VAR_17, VAR_16) != VAR_16) {
            break;
        }
    }
err:
    FUNC_8(VAR_17);
    FUNC_1(VAR_14);
    return VAR_15;
}

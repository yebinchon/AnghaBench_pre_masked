
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parameter; int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,unsigned char*,int*) ;
 int FUNC_4 (int *,unsigned char*,int*,unsigned char const*,int) ;
 int FUNC_5 (int ,char const*,int,int ,int *,int) ;
 int FUNC_6 (unsigned char*) ;
 unsigned char* FUNC_7 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;

unsigned char *FUNC_9(const X509_ALGOR *VAR_5,
                                const char *VAR_6, int VAR_7,
                                const unsigned char *VAR_8, int VAR_9,
                                unsigned char **VAR_10, int *VAR_11, int VAR_12)
{
    unsigned char *VAR_13 = ((void*)0);
    int VAR_14, VAR_15;
    EVP_CIPHER_CTX *VAR_16 = FUNC_2();

    if (VAR_16 == ((void*)0)) {
        FUNC_8(VAR_2, VAR_1);
        goto err;
    }


    if (!FUNC_5(VAR_5->algorithm, VAR_6, VAR_7,
                            VAR_5->parameter, VAR_16, VAR_12)) {
        FUNC_8(VAR_2,
                  VAR_3);
        goto err;
    }

    if ((VAR_13 = FUNC_7(VAR_9 + FUNC_0(VAR_16)))
            == ((void*)0)) {
        FUNC_8(VAR_2, VAR_1);
        goto err;
    }

    if (!FUNC_4(VAR_16, VAR_13, &VAR_15, VAR_8, VAR_9)) {
        FUNC_6(VAR_13);
        VAR_13 = ((void*)0);
        FUNC_8(VAR_2, VAR_0);
        goto err;
    }

    VAR_14 = VAR_15;
    if (!FUNC_3(VAR_16, VAR_13 + VAR_15, &VAR_15)) {
        FUNC_6(VAR_13);
        VAR_13 = ((void*)0);
        FUNC_8(VAR_2,
                  VAR_4);
        goto err;
    }
    VAR_14 += VAR_15;
    if (VAR_11)
        *VAR_11 = VAR_14;
    if (VAR_10)
        *VAR_10 = VAR_13;
 err:
    FUNC_1(VAR_16);
    return VAR_13;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int const*,int *,unsigned char*,unsigned char const*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (unsigned char*,unsigned char const*,int,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (unsigned char*,int) ;
 unsigned char* FUNC_8 (int) ;

int FUNC_9(EVP_CIPHER_CTX *VAR_4, const EVP_CIPHER *VAR_5,
                 const unsigned char *VAR_6, int VAR_7, const unsigned char *VAR_8,
                 EVP_PKEY *VAR_9)
{
    unsigned char *VAR_10 = ((void*)0);
    int VAR_11, VAR_12 = 0, VAR_13 = 0;

    if (VAR_5) {
        FUNC_0(VAR_4);
        if (!FUNC_2(VAR_4, VAR_5, ((void*)0), ((void*)0), ((void*)0)))
            return 0;
    }

    if (VAR_9 == ((void*)0))
        return 1;

    if (FUNC_4(VAR_9) != VAR_2) {
        FUNC_6(VAR_1, VAR_3);
        goto err;
    }

    VAR_12 = FUNC_5(VAR_9);
    VAR_10 = FUNC_8(VAR_12);
    if (VAR_10 == ((void*)0)) {

        FUNC_6(VAR_1, VAR_0);
        goto err;
    }

    VAR_11 = FUNC_3(VAR_10, VAR_6, VAR_7, VAR_9);
    if ((VAR_11 <= 0) || !FUNC_1(VAR_4, VAR_11)) {

        goto err;
    }
    if (!FUNC_2(VAR_4, ((void*)0), ((void*)0), VAR_10, VAR_8))
        goto err;

    VAR_13 = 1;
 err:
    FUNC_7(VAR_10, VAR_12);
    return VAR_13;
}

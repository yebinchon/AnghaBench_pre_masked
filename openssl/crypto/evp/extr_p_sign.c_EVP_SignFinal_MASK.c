
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,unsigned int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,unsigned char*,size_t*,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;

int FUNC_13(EVP_MD_CTX *VAR_4, unsigned char *VAR_5,
                  unsigned int *VAR_6, EVP_PKEY *VAR_7)
{
    unsigned char VAR_8[VAR_2];
    unsigned int VAR_9 = 0;
    int VAR_10 = 0;
    size_t VAR_11;
    EVP_PKEY_CTX *VAR_12 = ((void*)0);

    *VAR_6 = 0;
    if (FUNC_5(VAR_4, VAR_3)) {
        if (!FUNC_0(VAR_4, VAR_8, &VAR_9))
            goto err;
    } else {
        int VAR_13 = 0;
        EVP_MD_CTX *VAR_14 = FUNC_4();
        if (VAR_14 == ((void*)0)) {
            FUNC_12(VAR_1, VAR_0);
            return 0;
        }
        VAR_13 = FUNC_1(VAR_14, VAR_4);
        if (VAR_13)
            VAR_13 = FUNC_0(VAR_14, VAR_8, &VAR_9);
        FUNC_2(VAR_14);
        if (!VAR_13)
            return 0;
    }

    VAR_11 = (size_t)FUNC_11(VAR_7);
    VAR_10 = 0;
    VAR_12 = FUNC_7(VAR_7, ((void*)0));
    if (VAR_12 == ((void*)0))
        goto err;
    if (FUNC_10(VAR_12) <= 0)
        goto err;
    if (FUNC_8(VAR_12, FUNC_3(VAR_4)) <= 0)
        goto err;
    if (FUNC_9(VAR_12, VAR_5, &VAR_11, VAR_8, VAR_9) <= 0)
        goto err;
    *VAR_6 = VAR_11;
    VAR_10 = 1;
 err:
    FUNC_6(VAR_12);
    return VAR_10;
}

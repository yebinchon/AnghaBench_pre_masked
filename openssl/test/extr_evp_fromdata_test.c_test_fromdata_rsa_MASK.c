
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **,int *) ;
 int FUNC_4 (int *) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,unsigned long*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void)
{
    int VAR_15 = 0;
    EVP_PKEY_CTX *VAR_16 = ((void*)0);
    EVP_PKEY *VAR_17 = ((void*)0);






    static unsigned long VAR_18[] = {
        0xbc747fc5,
        0x10001,
        0x7b133399,
        0xe963,
        0xceb7,
        0x8599,
        0xbd87,
        0xcc3b,
    };
    OSSL_PARAM VAR_19[] = {
        FUNC_5(VAR_11, &VAR_18[VAR_4]),
        FUNC_5(VAR_8, &VAR_18[VAR_3]),
        FUNC_5(VAR_7, &VAR_18[VAR_0]),
        FUNC_5(VAR_10, &VAR_18[VAR_12]),
        FUNC_5(VAR_10, &VAR_18[VAR_13]),
        FUNC_5(VAR_9, &VAR_18[VAR_1]),
        FUNC_5(VAR_9, &VAR_18[VAR_2]),
        FUNC_5(VAR_6, &VAR_18[VAR_14]),
        VAR_5
    };

    if (!FUNC_6(VAR_16 = FUNC_1(((void*)0), "RSA", ((void*)0))))
        goto err;

    if (!FUNC_7(FUNC_4(VAR_16))
        || !FUNC_7(FUNC_3(VAR_16, &VAR_17, VAR_19)))
        goto err;







    VAR_15 = 1;

 err:
    FUNC_2(VAR_17);
    FUNC_0(VAR_16);

    return VAR_15;
}

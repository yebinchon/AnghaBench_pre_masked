
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_PUBKEY ;
typedef int X509_ALGOR ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int*,void const**,int *) ;
 int FUNC_4 (int *,unsigned char const**,int*,int **,int *) ;
 int * FUNC_5 (int,void const*) ;
 int FUNC_6 (int **,unsigned char const**,int) ;

__attribute__((used)) static int FUNC_7(EVP_PKEY *VAR_3, X509_PUBKEY *VAR_4)
{
    const unsigned char *VAR_5 = ((void*)0);
    const void *VAR_6;
    int VAR_7, VAR_8;
    EC_KEY *VAR_9 = ((void*)0);
    X509_ALGOR *VAR_10;

    if (!FUNC_4(((void*)0), &VAR_5, &VAR_8, &VAR_10, VAR_4))
        return 0;
    FUNC_3(((void*)0), &VAR_7, &VAR_6, VAR_10);

    VAR_9 = FUNC_5(VAR_7, VAR_6);

    if (!VAR_9) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }


    if (!FUNC_6(&VAR_9, &VAR_5, VAR_8)) {
        FUNC_1(VAR_0, VAR_1);
        goto ecerr;
    }

    FUNC_2(VAR_3, VAR_9);
    return 1;

 ecerr:
    FUNC_0(VAR_9);
    return 0;
}

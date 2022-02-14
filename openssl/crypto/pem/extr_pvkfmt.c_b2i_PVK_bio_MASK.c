
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pem_password_cb ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,int) ;
 unsigned char* FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (unsigned char const**,unsigned int,unsigned int,int *,void*) ;
 int FUNC_5 (unsigned char const**,int,int ,unsigned int*,unsigned int*) ;

EVP_PKEY *FUNC_6(BIO *VAR_3, pem_password_cb *VAR_4, void *VAR_5)
{
    unsigned char VAR_6[24], *VAR_7 = ((void*)0);
    const unsigned char *VAR_8;
    int VAR_9;
    EVP_PKEY *VAR_10 = ((void*)0);
    unsigned int VAR_11, VAR_12;
    if (FUNC_0(VAR_3, VAR_6, 24) != 24) {
        FUNC_3(VAR_1, VAR_2);
        return ((void*)0);
    }
    VAR_8 = VAR_6;

    if (!FUNC_5(&VAR_8, 24, 0, &VAR_11, &VAR_12))
        return 0;
    VAR_9 = (int)VAR_12 + VAR_11;
    VAR_7 = FUNC_2(VAR_9);
    if (VAR_7 == ((void*)0)) {
        FUNC_3(VAR_1, VAR_0);
        return 0;
    }
    VAR_8 = VAR_7;
    if (FUNC_0(VAR_3, VAR_7, VAR_9) != VAR_9) {
        FUNC_3(VAR_1, VAR_2);
        goto err;
    }
    VAR_10 = FUNC_4(&VAR_8, VAR_11, VAR_12, VAR_4, VAR_5);

 err:
    FUNC_1(VAR_7, VAR_9);
    return VAR_10;
}

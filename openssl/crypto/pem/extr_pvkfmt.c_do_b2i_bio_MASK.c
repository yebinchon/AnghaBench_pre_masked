
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *,unsigned char*,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (unsigned char const**,unsigned int,int) ;
 int * FUNC_5 (unsigned char const**,unsigned int,int) ;
 unsigned int FUNC_6 (unsigned int,int,int) ;
 scalar_t__ FUNC_7 (unsigned char const**,int,unsigned int*,unsigned int*,int*,int*) ;

__attribute__((used)) static EVP_PKEY *FUNC_8(BIO *VAR_5, int VAR_6)
{
    const unsigned char *VAR_7;
    unsigned char VAR_8[16], *VAR_9 = ((void*)0);
    unsigned int VAR_10, VAR_11, VAR_12;
    int VAR_13;
    EVP_PKEY *VAR_14 = ((void*)0);
    if (FUNC_0(VAR_5, VAR_8, 16) != 16) {
        FUNC_3(VAR_2, VAR_4);
        return ((void*)0);
    }
    VAR_7 = VAR_8;
    if (FUNC_7(&VAR_7, 16, &VAR_11, &VAR_10, &VAR_13, &VAR_6) <= 0)
        return ((void*)0);

    VAR_12 = FUNC_6(VAR_10, VAR_13, VAR_6);
    if (VAR_12 > VAR_0) {
        FUNC_3(VAR_2, VAR_3);
        return ((void*)0);
    }
    VAR_9 = FUNC_2(VAR_12);
    if (VAR_9 == ((void*)0)) {
        FUNC_3(VAR_2, VAR_1);
        goto err;
    }
    VAR_7 = VAR_9;
    if (FUNC_0(VAR_5, VAR_9, VAR_12) != (int)VAR_12) {
        FUNC_3(VAR_2, VAR_4);
        goto err;
    }

    if (VAR_13)
        VAR_14 = FUNC_4(&VAR_7, VAR_10, VAR_6);
    else
        VAR_14 = FUNC_5(&VAR_7, VAR_10, VAR_6);

 err:
    FUNC_1(VAR_9);
    return VAR_14;
}

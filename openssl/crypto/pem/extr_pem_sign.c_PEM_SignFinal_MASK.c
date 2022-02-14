
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,unsigned int*,int *) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(EVP_MD_CTX *VAR_2, unsigned char *VAR_3,
                  unsigned int *VAR_4, EVP_PKEY *VAR_5)
{
    unsigned char *VAR_6;
    int VAR_7, VAR_8 = 0;
    unsigned int VAR_9;

    VAR_6 = FUNC_4(FUNC_1(VAR_5));
    if (VAR_6 == ((void*)0)) {
        FUNC_5(VAR_1, VAR_0);
        goto err;
    }

    if (FUNC_2(VAR_2, VAR_6, &VAR_9, VAR_5) <= 0)
        goto err;

    VAR_7 = FUNC_0(VAR_3, VAR_6, VAR_9);
    *VAR_4 = VAR_7;
    VAR_8 = 1;
 err:

    FUNC_3(VAR_6);
    return VAR_8;
}

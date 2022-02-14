
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char const*,int) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 scalar_t__ FUNC_4 (int *) ;

EVP_PKEY *FUNC_5(int VAR_0, ENGINE *VAR_1,
                               const unsigned char *VAR_2, int VAR_3)
{
    EVP_PKEY_CTX *VAR_4 = ((void*)0);
    EVP_PKEY *VAR_5 = ((void*)0);
    VAR_4 = FUNC_1(VAR_0, VAR_1);
    if (!VAR_4)
        return ((void*)0);
    if (FUNC_4(VAR_4) <= 0)
        goto merr;
    if (FUNC_2(VAR_4, VAR_2, VAR_3) <= 0)
        goto merr;
    if (FUNC_3(VAR_4, &VAR_5) <= 0)
        goto merr;
 merr:
    FUNC_0(VAR_4);
    return VAR_5;
}

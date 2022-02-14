
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char**,int *,int) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_0, EVP_PKEY *VAR_1, int VAR_2)
{
    unsigned char *VAR_3 = ((void*)0);
    int VAR_4, VAR_5;
    VAR_4 = FUNC_2(&VAR_3, VAR_1, VAR_2);
    if (VAR_4 < 0)
        return -1;
    VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_4);
    FUNC_1(VAR_3);
    if (VAR_5 == VAR_4)
        return VAR_4;
    return -1;
}

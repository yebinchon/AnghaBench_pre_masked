
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;


 scalar_t__ FUNC_0 (int *,int ,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(EVP_CIPHER_CTX *VAR_4)
{
    int VAR_5;

    if (FUNC_0(VAR_4, VAR_0, 0, &VAR_5) <= 0)
        return 0;
    if (VAR_5 == 128)
        return VAR_1;
    else if (VAR_5 == 64)
        return VAR_3;
    else if (VAR_5 == 40)
        return VAR_2;
    else
        return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,size_t,void*) ;

int FUNC_1(EVP_PKEY *VAR_2,
                               const unsigned char *VAR_3, size_t VAR_4)
{
    if (VAR_4 > VAR_1)
        return 0;
    if (FUNC_0(VAR_2, VAR_0, VAR_4,
                           (void *)VAR_3) <= 0)
        return 0;
    return 1;
}

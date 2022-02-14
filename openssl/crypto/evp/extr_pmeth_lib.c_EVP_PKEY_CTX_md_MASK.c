
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int,int ,void*) ;
 int VAR_1 ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(EVP_PKEY_CTX *VAR_2, int VAR_3, int VAR_4, const char *VAR_5)
{
    const EVP_MD *VAR_6;

    if (VAR_5 == ((void*)0) || (VAR_6 = FUNC_1(VAR_5)) == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    return FUNC_0(VAR_2, -1, VAR_3, VAR_4, 0, (void *)VAR_6);
}

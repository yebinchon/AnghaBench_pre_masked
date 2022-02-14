
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_PUBKEY ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,unsigned char const**,long) ;

EVP_PKEY *FUNC_4(EVP_PKEY **VAR_0, const unsigned char **VAR_1, long VAR_2)
{
    X509_PUBKEY *VAR_3;
    EVP_PKEY *VAR_4;
    const unsigned char *VAR_5;

    VAR_5 = *VAR_1;
    VAR_3 = FUNC_3(((void*)0), &VAR_5, VAR_2);
    if (VAR_3 == ((void*)0))
        return ((void*)0);
    VAR_4 = FUNC_2(VAR_3);
    FUNC_1(VAR_3);
    if (VAR_4 == ((void*)0))
        return ((void*)0);
    *VAR_1 = VAR_5;
    if (VAR_0 != ((void*)0)) {
        FUNC_0(*VAR_0);
        *VAR_0 = VAR_4;
    }
    return VAR_4;
}

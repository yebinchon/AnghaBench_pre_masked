
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_NAMEMAP ;
typedef int OPENSSL_CTX ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int,int ,int const**) ;
 int FUNC_3 (int *,char const*) ;
 int * FUNC_4 (int *) ;

const EVP_CIPHER *FUNC_5(OPENSSL_CTX *VAR_3, const char *VAR_4)
{
    const EVP_CIPHER *VAR_5;
    OSSL_NAMEMAP *VAR_6;
    int VAR_7;

    if (!FUNC_1(VAR_1, ((void*)0)))
        return ((void*)0);

    VAR_5 = (const EVP_CIPHER *)FUNC_0(VAR_4, VAR_0);

    if (VAR_5 != ((void*)0))
        return VAR_5;







    VAR_6 = FUNC_4(VAR_3);
    VAR_7 = FUNC_3(VAR_6, VAR_4);
    if (VAR_7 == 0)
        return ((void*)0);

    FUNC_2(VAR_6, VAR_7, VAR_2, &VAR_5);

    return VAR_5;
}

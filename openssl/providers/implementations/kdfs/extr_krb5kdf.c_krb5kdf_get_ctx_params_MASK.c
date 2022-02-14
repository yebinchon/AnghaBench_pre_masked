
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cipher; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ KRB5KDF_CTX ;
typedef int EVP_CIPHER ;


 size_t FUNC_0 (int const*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,size_t) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, OSSL_PARAM VAR_3[])
{
    KRB5KDF_CTX *VAR_4 = (KRB5KDF_CTX *)VAR_2;
    const EVP_CIPHER *VAR_5;
    size_t VAR_6;
    OSSL_PARAM *VAR_7;

    VAR_5 = FUNC_3(&VAR_4->cipher);
    if (VAR_5)
        VAR_6 = FUNC_0(VAR_5);
    else
        VAR_6 = VAR_0;

    if ((VAR_7 = FUNC_1(VAR_3, VAR_1)) != ((void*)0))
        return FUNC_2(VAR_7, VAR_6);
    return -2;
}

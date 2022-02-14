
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_CMP_PKIFREETEXT ;
typedef int ASN1_UTF8STRING ;


 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(OSSL_CMP_PKIFREETEXT *VAR_0, const char *VAR_1)
{
    ASN1_UTF8STRING *VAR_2;

    if (!FUNC_3(VAR_0 != ((void*)0) && VAR_1 != ((void*)0)))
        return 0;
    if ((VAR_2 = FUNC_2()) == ((void*)0))
        return 0;
    if (!FUNC_0(VAR_2, VAR_1, -1))
        goto err;
    if (!FUNC_4(VAR_0, VAR_2))
        goto err;
    return 1;

 err:
    FUNC_1(VAR_2);
    return 0;
}

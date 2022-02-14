
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_NAME ;
typedef int X509 ;
typedef int OCSP_CERTID ;
typedef int EVP_MD ;
typedef int ASN1_INTEGER ;
typedef int ASN1_BIT_STRING ;


 int * FUNC_0 () ;
 int * FUNC_1 (int const*,int *,int *,int const*) ;
 int * FUNC_2 (int const*) ;
 int * FUNC_3 (int const*) ;
 int * FUNC_4 (int const*) ;
 int * FUNC_5 (int const*) ;

OCSP_CERTID *FUNC_6(const EVP_MD *VAR_0, const X509 *VAR_1,
                             const X509 *VAR_2)
{
    X509_NAME *VAR_3;
    const ASN1_INTEGER *VAR_4;
    ASN1_BIT_STRING *VAR_5;
    if (!VAR_0)
        VAR_0 = FUNC_0();
    if (VAR_1) {
        VAR_3 = FUNC_4(VAR_1);
        VAR_4 = FUNC_3(VAR_1);
    } else {
        VAR_3 = FUNC_5(VAR_2);
        VAR_4 = ((void*)0);
    }
    VAR_5 = FUNC_2(VAR_2);
    return FUNC_1(VAR_0, VAR_3, VAR_5, VAR_4);
}

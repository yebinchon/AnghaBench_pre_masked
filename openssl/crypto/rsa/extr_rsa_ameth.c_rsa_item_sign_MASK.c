
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_ALGOR ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;
typedef int ASN1_STRING ;
typedef int ASN1_ITEM ;
typedef int ASN1_BIT_STRING ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,int ,int *) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(EVP_MD_CTX *VAR_4, const ASN1_ITEM *VAR_5, void *VAR_6,
                         X509_ALGOR *VAR_7, X509_ALGOR *VAR_8,
                         ASN1_BIT_STRING *VAR_9)
{
    int VAR_10;
    EVP_PKEY_CTX *VAR_11 = FUNC_2(VAR_4);

    if (FUNC_3(VAR_11, &VAR_10) <= 0)
        return 0;
    if (VAR_10 == VAR_1)
        return 2;
    if (VAR_10 == VAR_2) {
        ASN1_STRING *VAR_12 = ((void*)0);
        VAR_12 = FUNC_6(VAR_11);
        if (!VAR_12)
            return 0;

        if (VAR_8) {
            ASN1_STRING *VAR_13 = FUNC_0(VAR_12);
            if (!VAR_13) {
                FUNC_1(VAR_12);
                return 0;
            }
            FUNC_5(VAR_8, FUNC_4(VAR_0),
                            VAR_3, VAR_13);
        }
        FUNC_5(VAR_7, FUNC_4(VAR_0),
                        VAR_3, VAR_12);
        return 3;
    }
    return 2;
}

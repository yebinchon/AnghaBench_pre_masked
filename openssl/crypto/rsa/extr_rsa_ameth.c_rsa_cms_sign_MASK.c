
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_ALGOR ;
typedef int EVP_PKEY_CTX ;
typedef int CMS_SignerInfo ;
typedef int ASN1_STRING ;


 int FUNC_0 (int *,int *,int *,int *,int **) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(CMS_SignerInfo *VAR_6)
{
    int VAR_7 = VAR_2;
    X509_ALGOR *VAR_8;
    EVP_PKEY_CTX *VAR_9 = FUNC_1(VAR_6);
    ASN1_STRING *VAR_10 = ((void*)0);

    FUNC_0(VAR_6, ((void*)0), ((void*)0), ((void*)0), &VAR_8);
    if (VAR_9) {
        if (FUNC_2(VAR_9, &VAR_7) <= 0)
            return 0;
    }
    if (VAR_7 == VAR_2) {
        FUNC_4(VAR_8, FUNC_3(VAR_1), VAR_4, 0);
        return 1;
    }

    if (VAR_7 != VAR_3)
        return 0;
    VAR_10 = FUNC_5(VAR_9);
    if (!VAR_10)
        return 0;
    FUNC_4(VAR_8, FUNC_3(VAR_0), VAR_5, VAR_10);
    return 1;
}

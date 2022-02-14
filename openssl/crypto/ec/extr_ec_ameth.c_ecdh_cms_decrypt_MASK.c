
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_ALGOR ;
typedef int EVP_PKEY_CTX ;
typedef int CMS_RecipientInfo ;
typedef int ASN1_BIT_STRING ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int **,int **,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(CMS_RecipientInfo *VAR_3)
{
    EVP_PKEY_CTX *VAR_4;
    VAR_4 = FUNC_0(VAR_3);
    if (!VAR_4)
        return 0;

    if (!FUNC_3(VAR_4)) {
        X509_ALGOR *VAR_5;
        ASN1_BIT_STRING *VAR_6;
        if (!FUNC_1(VAR_3, &VAR_5, &VAR_6,
                                                 ((void*)0), ((void*)0), ((void*)0)))
            return 0;
        if (!VAR_5 || !VAR_6)
            return 0;
        if (!FUNC_4(VAR_4, VAR_5, VAR_6)) {
            FUNC_2(VAR_0, VAR_1);
            return 0;
        }
    }

    if (!FUNC_5(VAR_4, VAR_3)) {
        FUNC_2(VAR_0, VAR_2);
        return 0;
    }
    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_ALGOR ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int ASN1_OBJECT ;
typedef int ASN1_ITEM ;
typedef int ASN1_BIT_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int const*) ;
 int VAR_4 ;
 int FUNC_3 (int const**,int*,int *,int *) ;

__attribute__((used)) static int FUNC_4(EVP_MD_CTX *VAR_5, const ASN1_ITEM *VAR_6, void *VAR_7,
                           X509_ALGOR *VAR_8, ASN1_BIT_STRING *VAR_9,
                           EVP_PKEY *VAR_10)
{
    const ASN1_OBJECT *VAR_11;
    int VAR_12;
    int VAR_13;


    FUNC_3(&VAR_11, &VAR_12, ((void*)0), VAR_8);
    VAR_13 = FUNC_2(VAR_11);
    if ((VAR_13 != VAR_2 && VAR_13 != VAR_3) || VAR_12 != VAR_4) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (!FUNC_1(VAR_5, ((void*)0), ((void*)0), ((void*)0), VAR_10))
        return 0;

    return 2;
}

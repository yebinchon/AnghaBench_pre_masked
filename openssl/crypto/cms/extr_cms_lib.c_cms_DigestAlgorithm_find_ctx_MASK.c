
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_ALGOR ;
typedef int EVP_MD_CTX ;
typedef int BIO ;
typedef int ASN1_OBJECT ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int **) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const**,int *,int *,int *) ;

int FUNC_10(EVP_MD_CTX *VAR_3, BIO *VAR_4,
                                 X509_ALGOR *VAR_5)
{
    int VAR_6;
    const ASN1_OBJECT *VAR_7;
    FUNC_9(&VAR_7, ((void*)0), ((void*)0), VAR_5);
    VAR_6 = FUNC_8(VAR_7);

    for (;;) {
        EVP_MD_CTX *VAR_8;
        VAR_4 = FUNC_0(VAR_4, VAR_0);
        if (VAR_4 == ((void*)0)) {
            FUNC_3(VAR_1,
                   VAR_2);
            return 0;
        }
        FUNC_1(VAR_4, &VAR_8);
        if (FUNC_6(VAR_8) == VAR_6




            || FUNC_7(FUNC_5(VAR_8)) == VAR_6)
            return FUNC_4(VAR_3, VAR_8);
        VAR_4 = FUNC_2(VAR_4);
    }
}

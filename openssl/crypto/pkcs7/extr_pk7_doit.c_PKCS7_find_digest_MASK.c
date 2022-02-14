
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD_CTX ;
typedef int BIO ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int **) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static BIO *FUNC_5(EVP_MD_CTX **VAR_4, BIO *VAR_5, int VAR_6)
{
    for (;;) {
        VAR_5 = FUNC_0(VAR_5, VAR_0);
        if (VAR_5 == ((void*)0)) {
            FUNC_4(VAR_2,
                     VAR_3);
            return ((void*)0);
        }
        FUNC_1(VAR_5, VAR_4);
        if (*VAR_4 == ((void*)0)) {
            FUNC_4(VAR_2, VAR_1);
            return ((void*)0);
        }
        if (FUNC_3(*VAR_4) == VAR_6)
            return VAR_5;
        VAR_5 = FUNC_2(VAR_5);
    }
    return ((void*)0);
}

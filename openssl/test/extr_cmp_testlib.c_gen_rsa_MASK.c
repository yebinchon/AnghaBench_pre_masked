
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;

EVP_PKEY *FUNC_7(void)
{
    EVP_PKEY_CTX *VAR_1 = ((void*)0);
    EVP_PKEY *VAR_2 = ((void*)0);

    (void)(FUNC_6(VAR_1 = FUNC_1(VAR_0, ((void*)0)))
               && FUNC_5(FUNC_4(VAR_1), 0)
               && FUNC_5(FUNC_2(VAR_1, 2048), 0)
               && FUNC_5(FUNC_3(VAR_1, &VAR_2), 0));
    FUNC_0(VAR_1);
    return VAR_2;
}

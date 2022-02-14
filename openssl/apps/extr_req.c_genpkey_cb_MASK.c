
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(EVP_PKEY_CTX *VAR_0)
{
    char VAR_1 = '*';
    BIO *VAR_2 = FUNC_2(VAR_0);
    int VAR_3;
    VAR_3 = FUNC_3(VAR_0, 0);
    if (VAR_3 == 0)
        VAR_1 = '.';
    if (VAR_3 == 1)
        VAR_1 = '+';
    if (VAR_3 == 2)
        VAR_1 = '*';
    if (VAR_3 == 3)
        VAR_1 = '\n';
    FUNC_1(VAR_2, &VAR_1, 1);
    (void)FUNC_0(VAR_2);
    return 1;
}

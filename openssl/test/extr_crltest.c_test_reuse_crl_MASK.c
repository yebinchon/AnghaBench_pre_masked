
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_CRL ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,int **,int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,char**) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(void)
{
    X509_CRL *VAR_2 = FUNC_1(VAR_0);
    char *VAR_3;
    BIO *VAR_4 = FUNC_5(VAR_1, &VAR_3);

    VAR_2 = FUNC_3(VAR_4, &VAR_2, ((void*)0), ((void*)0));

    FUNC_2(VAR_3);
    FUNC_0(VAR_4);
    FUNC_4(VAR_2);
    return 1;
}

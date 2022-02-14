
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE_CTX ;
typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(void)
{
    X509_STORE_CTX *VAR_1 = ((void*)0);
    X509 *VAR_2 = ((void*)0);
    BIO *VAR_3 = ((void*)0);
    int VAR_4 = 0, VAR_5;

    VAR_3 = FUNC_1(VAR_0, "r");
    if (VAR_3 == ((void*)0))
        goto err;

    VAR_2 = FUNC_2(VAR_3, ((void*)0), 0, ((void*)0));
    if (VAR_2 == ((void*)0))
        goto err;

    VAR_1 = FUNC_5();
    if (VAR_1 == ((void*)0))
        goto err;

    if (!FUNC_4(VAR_1, ((void*)0), VAR_2, ((void*)0)))
        goto err;


    VAR_5 = FUNC_7(VAR_1);

    if (VAR_5 == 0) {

        VAR_4 = 1;
    }

 err:
    FUNC_3(VAR_1);
    FUNC_6(VAR_2);
    FUNC_0(VAR_3);
    return VAR_4;
}

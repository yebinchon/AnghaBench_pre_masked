
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_EXTENSION ;
typedef int X509 ;


 int * FUNC_0 (int ,char const**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **) ;

__attribute__((used)) static int FUNC_7(void)
{
    static const char * VAR_0[] = {
        "www.openssl.org",
        "www.openssl.net",
        ((void*)0)
    };

    X509 *VAR_1 = ((void*)0);
    X509_EXTENSION * VAR_2 = ((void*)0);
    int VAR_3 = 0;

    if (!FUNC_2(FUNC_6(&VAR_1)))
        goto err;




    VAR_2 = FUNC_0(FUNC_5(VAR_1), VAR_0);
    if (!FUNC_1(VAR_2))
        goto err;

    FUNC_3(VAR_2);
    VAR_3 = 1;
err:
    FUNC_4(VAR_1);
    return VAR_3;
}

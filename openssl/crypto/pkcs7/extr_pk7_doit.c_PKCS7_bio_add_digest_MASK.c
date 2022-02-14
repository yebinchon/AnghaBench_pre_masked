
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
typedef int EVP_MD ;
typedef int BIO ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int const*) ;
 int VAR_0 ;
 int * FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(BIO **VAR_3, X509_ALGOR *VAR_4)
{
    BIO *VAR_5;
    const EVP_MD *VAR_6;
    if ((VAR_5 = FUNC_2(FUNC_0())) == ((void*)0)) {
        FUNC_6(VAR_1, VAR_0);
        goto err;
    }

    VAR_6 = FUNC_5(VAR_4->algorithm);
    if (VAR_6 == ((void*)0)) {
        FUNC_6(VAR_1, VAR_2);
        goto err;
    }

    FUNC_4(VAR_5, VAR_6);
    if (*VAR_3 == ((void*)0))
        *VAR_3 = VAR_5;
    else if (!FUNC_3(*VAR_3, VAR_5)) {
        FUNC_6(VAR_1, VAR_0);
        goto err;
    }
    VAR_5 = ((void*)0);

    return 1;

 err:
    FUNC_1(VAR_5);
    return 0;

}

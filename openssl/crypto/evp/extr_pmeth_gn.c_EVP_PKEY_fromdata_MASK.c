
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int operation; int keymgmt; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 () ;
 int VAR_4 ;
 void* FUNC_2 (int *,int ,int *,int) ;

int FUNC_3(EVP_PKEY_CTX *VAR_5, EVP_PKEY **VAR_6, OSSL_PARAM VAR_7[])
{
    void *VAR_8 = ((void*)0);

    if (VAR_5 == ((void*)0) || (VAR_5->operation & VAR_3) == 0) {
        FUNC_0(VAR_0, VAR_4);
        return -2;
    }

    if (VAR_6 == ((void*)0))
        return -1;

    if (*VAR_6 == ((void*)0))
        *VAR_6 = FUNC_1();

    if (*VAR_6 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }

    VAR_8 =
        FUNC_2(*VAR_6, VAR_5->keymgmt, VAR_7,
                             VAR_5->operation == VAR_2);

    if (VAR_8 == ((void*)0))
        return 0;

    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_PUBKEY ;
struct TYPE_3__ {int * pkey; int pkeyhashlen; int pkeyhash; } ;
typedef TYPE_1__ SCT_CTX ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;

int FUNC_3(SCT_CTX *VAR_0, X509_PUBKEY *VAR_1)
{
    EVP_PKEY *VAR_2 = FUNC_1(VAR_1);

    if (VAR_2 == ((void*)0))
        return 0;

    if (!FUNC_2(VAR_1, &VAR_0->pkeyhash, &VAR_0->pkeyhashlen)) {
        FUNC_0(VAR_2);
        return 0;
    }

    FUNC_0(VAR_0->pkey);
    VAR_0->pkey = VAR_2;
    return 1;
}

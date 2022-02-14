
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* pmeth; scalar_t__ pkey_gencb; TYPE_2__* data; } ;
struct TYPE_8__ {int * pub_exp; int primes; int nbits; } ;
struct TYPE_7__ {int pkey_id; } ;
typedef TYPE_2__ RSA_PKEY_CTX ;
typedef int RSA ;
typedef TYPE_3__ EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int BN_GENCB ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int *,int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_10(EVP_PKEY_CTX *VAR_1, EVP_PKEY *VAR_2)
{
    RSA *VAR_3 = ((void*)0);
    RSA_PKEY_CTX *VAR_4 = VAR_1->data;
    BN_GENCB *VAR_5;
    int VAR_6;

    if (VAR_4->pub_exp == ((void*)0)) {
        VAR_4->pub_exp = FUNC_2();
        if (VAR_4->pub_exp == ((void*)0) || !FUNC_3(VAR_4->pub_exp, VAR_0))
            return 0;
    }
    VAR_3 = FUNC_7();
    if (VAR_3 == ((void*)0))
        return 0;
    if (VAR_1->pkey_gencb) {
        VAR_5 = FUNC_1();
        if (VAR_5 == ((void*)0)) {
            FUNC_5(VAR_3);
            return 0;
        }
        FUNC_8(VAR_5, VAR_1);
    } else {
        VAR_5 = ((void*)0);
    }
    VAR_6 = FUNC_6(VAR_3, VAR_4->nbits, VAR_4->primes,
                                       VAR_4->pub_exp, VAR_5);
    FUNC_0(VAR_5);
    if (VAR_6 > 0 && !FUNC_9(VAR_3, VAR_1)) {
        FUNC_5(VAR_3);
        return 0;
    }
    if (VAR_6 > 0)
        FUNC_4(VAR_2, VAR_1->pmeth->pkey_id, VAR_3);
    else
        FUNC_5(VAR_3);
    return VAR_6;
}

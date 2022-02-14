
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prime_len; int subprime_len; int use_dsa; int * md; } ;
typedef int EVP_MD ;
typedef int DSA ;
typedef TYPE_1__ DH_PKEY_CTX ;
typedef int BN_GENCB ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int,int,int const*,int *,int ,int *,int *,int *,int *) ;
 int FUNC_5 (int *,int,int,int const*,int *,int ,int,int *,int *,int *,int *) ;

__attribute__((used)) static DSA *FUNC_6(DH_PKEY_CTX *VAR_0, BN_GENCB *VAR_1)
{
    DSA *VAR_2;
    int VAR_3 = 0;
    int VAR_4 = VAR_0->prime_len;
    int VAR_5 = VAR_0->subprime_len;
    const EVP_MD *VAR_6 = VAR_0->md;
    if (VAR_0->use_dsa > 2)
        return ((void*)0);
    VAR_2 = FUNC_1();
    if (VAR_2 == ((void*)0))
        return ((void*)0);
    if (VAR_5 == -1) {
        if (VAR_4 >= 2048)
            VAR_5 = 256;
        else
            VAR_5 = 160;
    }
    if (VAR_6 == ((void*)0)) {
        if (VAR_4 >= 2048)
            VAR_6 = FUNC_3();
        else
            VAR_6 = FUNC_2();
    }
    if (VAR_0->use_dsa == 1)
        VAR_3 = FUNC_4(VAR_2, VAR_4, VAR_5, VAR_6,
                                  ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0), VAR_1);
    else if (VAR_0->use_dsa == 2)
        VAR_3 = FUNC_5(VAR_2, VAR_4, VAR_5, VAR_6,
                                   ((void*)0), 0, -1, ((void*)0), ((void*)0), ((void*)0), VAR_1);
    if (VAR_3 <= 0) {
        FUNC_0(VAR_2);
        return ((void*)0);
    }
    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * policies; } ;
typedef int POLICYINFO ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(OSSL_CMP_CTX *VAR_1, POLICYINFO *VAR_2)
{
    if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) {
        FUNC_1(0, VAR_0);
        return 0;
    }

    if (VAR_1->policies == ((void*)0)
            && (VAR_1->policies = FUNC_0()) == ((void*)0))
        return 0;

    return FUNC_2(VAR_1->policies, VAR_2);
}

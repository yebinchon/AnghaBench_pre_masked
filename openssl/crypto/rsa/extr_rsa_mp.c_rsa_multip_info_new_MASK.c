
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * pp; int * t; int * d; int * r; } ;
typedef TYPE_1__ RSA_PRIME_INFO ;


 int FUNC_0 (int *) ;
 void* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;

RSA_PRIME_INFO *FUNC_5(void)
{
    RSA_PRIME_INFO *VAR_2;


    if ((VAR_2 = FUNC_3(sizeof(RSA_PRIME_INFO))) == ((void*)0)) {
        FUNC_4(VAR_1, VAR_0);
        return ((void*)0);
    }
    if ((VAR_2->r = FUNC_1()) == ((void*)0))
        goto err;
    if ((VAR_2->d = FUNC_1()) == ((void*)0))
        goto err;
    if ((VAR_2->t = FUNC_1()) == ((void*)0))
        goto err;
    if ((VAR_2->pp = FUNC_1()) == ((void*)0))
        goto err;

    return VAR_2;

 err:
    FUNC_0(VAR_2->r);
    FUNC_0(VAR_2->d);
    FUNC_0(VAR_2->t);
    FUNC_0(VAR_2->pp);
    FUNC_2(VAR_2);
    return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int * blinding; } ;
typedef TYPE_1__ RSA ;
typedef int BN_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*,int *) ;

int FUNC_2(RSA *VAR_2, BN_CTX *VAR_3)
{
    int VAR_4 = 0;

    if (VAR_2->blinding != ((void*)0))
        FUNC_0(VAR_2);

    VAR_2->blinding = FUNC_1(VAR_2, VAR_3);
    if (VAR_2->blinding == ((void*)0))
        goto err;

    VAR_2->flags |= VAR_0;
    VAR_2->flags &= ~VAR_1;
    VAR_4 = 1;
 err:
    return VAR_4;
}
